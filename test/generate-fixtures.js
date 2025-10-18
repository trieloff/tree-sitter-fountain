const { execSync } = require('child_process');
const fs = require('fs');
const path = require('path');

const fixturesDir = path.join(__dirname, 'fixtures');

/**
 * Parse tree-sitter CLI output into a JSON AST structure
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

// Get all .fountain files in fixtures directory
const fountainFiles = fs.readdirSync(fixturesDir)
  .filter(f => f.endsWith('.fountain'));

for (const file of fountainFiles) {
  const fountainPath = path.join(fixturesDir, file);
  const jsonPath = path.join(fixturesDir, file.replace('.fountain', '.json'));

  // Parse using tree-sitter CLI (ignore exit code as it may fail on parse errors)
  let output;
  try {
    output = execSync(`npx --yes tree-sitter parse "${fountainPath}" 2>&1`, { encoding: 'utf8' });
  } catch (err) {
    output = err.stdout || err.output?.join('') || '';
  }

  // Convert to JSON AST
  const ast = parseTreeSitterOutput(output);

  // Write to file
  fs.writeFileSync(jsonPath, JSON.stringify(ast, null, 2));
  console.log(`Generated ${jsonPath}`);
}
