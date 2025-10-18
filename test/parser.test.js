const { test } = require('node:test');
const assert = require('node:assert');
const fs = require('node:fs');
const path = require('node:path');
const { exec } = require('node:child_process');
const { promisify } = require('node:util');

const execAsync = promisify(exec);
const fixturesDir = path.join(__dirname, 'fixtures');

/**
 * Parse tree-sitter CLI output into a JSON AST structure
 * Converts from: (node_type [0,0] - [1,0] ...)
 * To: {type: 'node_type', children: [...]}
 */
function parseTreeSitterOutput(output) {
  // Remove warning and debug lines, extract only the AST portion
  const lines = output.split('\n');

  // Find the start of the AST (first line starting with '(document')
  const astStartIdx = lines.findIndex(line => line.trim().startsWith('(document'));
  if (astStartIdx === -1) {
    throw new Error('Could not find AST in output');
  }

  // Find the end of the AST (last ')' before any file path lines)
  let astEndIdx = astStartIdx;
  let parenCount = 0;
  for (let i = astStartIdx; i < lines.length; i++) {
    const line = lines[i];
    // Stop if we hit a line with file path (contains .fountain)
    if (line.includes('.fountain')) break;

    for (const char of line) {
      if (char === '(') parenCount++;
      if (char === ')') parenCount--;
    }
    astEndIdx = i;
    if (parenCount === 0) break;
  }

  const cleanOutput = lines.slice(astStartIdx, astEndIdx + 1).join('\n').trim();

  const stack = [];
  let current = null;
  let i = 0;

  while (i < cleanOutput.length) {
    if (cleanOutput[i] === '(') {
      // Start of a node
      i++;
      let nodeType = '';
      while (i < cleanOutput.length && cleanOutput[i] !== ' ' && cleanOutput[i] !== ')' && cleanOutput[i] !== '\n') {
        nodeType += cleanOutput[i];
        i++;
      }

      const node = { type: nodeType, children: [] };

      if (current) {
        stack.push(current);
      }
      current = node;

      // Skip position info [x,y] - [x,y]
      while (i < cleanOutput.length && cleanOutput[i] !== '\n' && cleanOutput[i] !== '(' && cleanOutput[i] !== ')') {
        i++;
      }
    } else if (cleanOutput[i] === ')') {
      // End of a node
      if (stack.length > 0) {
        const parent = stack.pop();
        parent.children.push(current);
        current = parent;
      }
      i++;
    } else if (cleanOutput[i] === '\n' || cleanOutput[i] === ' ') {
      i++;
    } else {
      i++;
    }
  }

  return current;
}

/**
 * Deep compare two AST structures, ignoring empty children arrays
 */
function compareAST(actual, expected, path = 'root') {
  assert.strictEqual(actual.type, expected.type, `Node type mismatch at ${path}`);

  const actualChildren = actual.children?.filter(c => c) || [];
  const expectedChildren = expected.children?.filter(c => c) || [];

  assert.strictEqual(
    actualChildren.length,
    expectedChildren.length,
    `Children count mismatch at ${path}: expected ${expectedChildren.length}, got ${actualChildren.length}`
  );

  for (let i = 0; i < expectedChildren.length; i++) {
    compareAST(actualChildren[i], expectedChildren[i], `${path}.children[${i}]`);
  }
}

// Get all .fountain files in fixtures directory
const fountainFiles = fs.readdirSync(fixturesDir)
  .filter(f => f.endsWith('.fountain'))
  .map(f => path.basename(f, '.fountain'));

for (const testName of fountainFiles) {
  test(testName, async (t) => {
    const fountainPath = path.join(fixturesDir, `${testName}.fountain`);
    const jsonPath = path.join(fixturesDir, `${testName}.json`);

    // Check that both files exist
    assert.ok(fs.existsSync(fountainPath), `Fountain file ${testName}.fountain should exist`);
    assert.ok(fs.existsSync(jsonPath), `JSON file ${testName}.json should exist`);

    // Load expected AST
    const expected = JSON.parse(fs.readFileSync(jsonPath, 'utf8'));

    // Parse the fountain file using tree-sitter CLI
    const { stdout } = await execAsync(`npx --yes tree-sitter parse "${fountainPath}" 2>&1`);

    // Parse the tree-sitter output into AST
    const actual = parseTreeSitterOutput(stdout);

    // Deep compare the ASTs
    compareAST(actual, expected);
  });
}
