/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "fountain",
  conflicts: $ => [
    [$.dialogue_block]
  ],

  externals: $ => [
    $.title_page_key,
    $.scene_start,
    $.section_start,
    $.note_start
  ],

  rules: {
    document: $ => repeat($._element),

    _element: $ => choice(
      $.title_page_field,
      $.scene_heading,
      $.dialogue_block,
      $.transition,
      $.section_heading,
      $.note,
      $.action
    ),

    title_page_field: $ => prec(10, seq(
      $.title_page_key,
      optional(seq(' ', $.description)),
      '\n'
    )),

    scene_heading: $ => prec(5, seq(
      $.scene_start,
      ' ',
      $.description,
      '\n'
    )),

    character: $ => seq(
      /[A-Z][A-Z0-9 \(\)\.']*[A-Z\)]/,
      '\n'
    ),

    dialogue_block: $ => prec(4, seq(
      $.character,
      repeat1(choice($.dialogue, $.parenthetical))
    )),

    dialogue: $ => seq(
      $.line,
      '\n'
    ),

    parenthetical: $ => seq(
      '(',
      /[^)]+/,
      ')',
      '\n'
    ),

    action: $ => prec(1, seq(
      $.line,
      '\n'
    )),

    transition: $ => prec(3, seq(
      choice(
        'CUT TO:',
        'FADE OUT:',
        'FADE IN:',
        'FADE TO:',
        'DISSOLVE TO:',
        'MATCH CUT TO:',
        /[A-Z][A-Z ]+TO:/
      ),
      '\n'
    )),

    section_heading: $ => prec(5, seq(
      $.section_start,
      optional(seq(' ', $.description)),
      '\n'
    )),

    note: $ => prec(5, seq(
      $.note_start,
      $.note_content,
      ']]',
      '\n'
    )),

    note_content: $ => /[^\]]+/,

    line: $ => /[^\n]+/,

    description: $ => /[^\n]+/
  }
});
