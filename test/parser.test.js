const { test } = require('node:test');
const assert = require('node:assert');
const fs = require('node:fs');
const path = require('node:path');
const { exec } = require('node:child_process');
const { promisify } = require('node:util');

const execAsync = promisify(exec);
const fixturesDir = path.join(__dirname, 'fixtures');

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

    // Verify document type
    assert.ok(stdout.includes('(document'), 'Should parse as document');
    assert.strictEqual(expected.type, 'document', 'Expected type should be document');

    // Verify expected nodes are present
    for (const expectedNode of expected.expectedNodes) {
      assert.ok(
        stdout.includes(`(${expectedNode.type}`),
        `Should contain ${expectedNode.type} node`
      );
    }

    // Count expected nodes
    const nodeCount = expected.expectedNodes.length;
    const actualMatches = expected.expectedNodes.filter(node =>
      stdout.includes(`(${node.type}`)
    ).length;

    assert.strictEqual(
      actualMatches,
      nodeCount,
      `Should find all ${nodeCount} expected nodes`
    );
  });
}
