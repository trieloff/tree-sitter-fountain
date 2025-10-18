const Parser = require('tree-sitter');
const Fountain = require('../bindings/node');
const fs = require('fs');
const path = require('path');

const fixturesDir = path.join(__dirname, 'fixtures');
const parser = new Parser();
parser.setLanguage(Fountain);

// Get all .fountain files in fixtures directory
const fountainFiles = fs.readdirSync(fixturesDir)
  .filter(f => f.endsWith('.fountain'));

for (const file of fountainFiles) {
  const fountainPath = path.join(fixturesDir, file);
  const jsonPath = path.join(fixturesDir, file.replace('.fountain', '.json'));

  const sourceCode = fs.readFileSync(fountainPath, 'utf8');
  const tree = parser.parse(sourceCode);

  fs.writeFileSync(jsonPath, JSON.stringify(tree.rootNode, null, 2));
  console.log(`Generated ${jsonPath}`);
}
