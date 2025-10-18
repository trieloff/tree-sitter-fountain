# tree-sitter-fountain

[![CI][ci]](https://github.com/tree-sitter-grammars/tree-sitter-fountain/actions/workflows/ci.yml)
[![discord][discord]](https://discord.gg/w7nTvsVJhm)
[![matrix][matrix]](https://matrix.to/#/#tree-sitter-chat:matrix.org)
<!-- NOTE: uncomment these if you're publishing packages: -->
<!-- [![npm][npm]](https://www.npmjs.com/package/tree-sitter-fountain) -->
<!-- [![crates][crates]](https://crates.io/crates/tree-sitter-fountain) -->
<!-- [![pypi][pypi]](https://pypi.org/project/tree-sitter-fountain/) -->

A (rudimentary) tree-sitter parser for [.fountain](https://fountain.io/) files.

## Installation
You're probably already using `nvim-treesitter`. Open the file where you put its configs:
```lua
require'nvim-treesitter.configs'.setup {
    -- ...
}

-- Add the following:
local treesitter_parser_config = require("nvim-treesitter.parsers").get_parser_configs()
treesitter_parser_config.fountain = {
    install_info = {
        url = "https://github.com/gboere/tree-sitter-fountain",
        files = {"src/parser.c"},
        branch = "master",
    },
    filetype = "fountain",
}
vim.filetype.add ({
    extension = {
        fountain = 'fountain'
    }
})
```

After doing that, you'll need to download `queries/highlights.scm` from the repo and put it into `(NeoVim config folder)/after/queries/fountain/highlights.scm`. Or some other `runtime folder` as `(folder)/queries/highlights.scm`. See `:help rtp` for a list of all possible folders.

Then, run `:TSInstall fountain`.

## Updating
You'll need to fetch `queries/highlights.scm` manually. Then run `:TSUpdate fountain`.

## Testing

### Running Tests

Run the unit tests using Node.js built-in test runner:

```bash
npm test
```

This will run all fixture-based tests in `test/fixtures/`.

Alternatively, run the tree-sitter corpus tests:

```bash
npm run test:tree-sitter
```

### Creating New Tests

To add a new test:

1. Create a `.fountain` file in `test/fixtures/` with your test content
2. Create a corresponding `.json` file with the same name containing expected AST nodes:

```json
{
  "type": "document",
  "expectedNodes": [
    {"type": "scene_heading"},
    {"type": "action"},
    {"type": "dialogue_block"}
  ]
}
```

The test runner will automatically discover and run your new test on the next `npm test` run.

## References

<!-- NOTE: add the grammar's references here -->

[ci]: https://img.shields.io/github/actions/workflow/status/tree-sitter-grammars/tree-sitter-fountain/ci.yml?logo=github&label=CI
[discord]: https://img.shields.io/discord/1063097320771698699?logo=discord&label=discord
[matrix]: https://img.shields.io/matrix/tree-sitter-chat%3Amatrix.org?logo=matrix&label=matrix
[npm]: https://img.shields.io/npm/v/tree-sitter-fountain?logo=npm
[crates]: https://img.shields.io/crates/v/tree-sitter-fountain?logo=rust
[pypi]: https://img.shields.io/pypi/v/tree-sitter-fountain?logo=pypi&logoColor=ffd242
