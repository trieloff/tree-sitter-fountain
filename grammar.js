/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "fountain",
  conflicts: $ => [
    [$.title_page_field, $.action]
  ],

  externals: $ => [
    $.scene_start,
    $.section_start,
    $.note_start,
    $.forced_action_start,
    $.forced_character_start,
    $.forced_transition_start,
    $.lyric_start,
    $.centered_start,
    $.page_break_marker,
    $.synopsis_start,
    $.boneyard_start,
    $.title_continuation,
    $.blank_line,
    $.dialogue_line_start
  ],

  rules: {
    document: $ => seq(
      optional($.title_page),
      repeat($._element)
    ),

    // Title page: consume all key:value pairs and indented lines
    // until we hit a blank line or EOF or a scene/section start
    title_page: $ => prec(20, repeat1($.title_page_field)),

    _element: $ => choice(
      $.boneyard,
      $.page_break,
      $.scene_heading,
      $.synopsis,
      $.section_heading,
      $.dialogue_block,
      $.transition,
      $.centered,
      $.lyric,
      $.note,
      $.action
    ),

    // Title page field supports multi-line values via indented continuation lines
    title_page_field: $ => choice(
      // Form 1: Key with inline value (space is part of the key token)
      seq(
        $.title_key_with_space,
        $.description,
        '\n',
        repeat(seq($.title_continuation, '\n'))
      ),
      // Form 2: Key without inline value, followed by continuations
      seq(
        $.title_key,
        '\n',
        repeat1(seq($.title_continuation, '\n'))
      )
    ),

    title_key: $ => token(prec(1, seq(
      /[A-Z][a-z][A-Za-z0-9 ]*/,  // Must start with capital then lowercase (Title case)
      ':'
    ))),

    title_key_with_space: $ => token(prec(1, seq(
      /[A-Z][a-z][A-Za-z0-9 ]*/,  // Must start with capital then lowercase (Title case)
      ':',
      ' '
    ))),

    scene_heading: $ => prec(5, seq(
      $.scene_start,
      ' ',
      $.description,
      optional($.scene_number),
      '\n'
    )),

    scene_number: $ => seq(
      '#',
      /[A-Za-z0-9\-\.]+/,
      '#'
    ),

    character: $ => choice(
      seq(
        token(seq(
          /[A-Z][A-Z0-9 \(\)\.']*[A-Z0-9\)\.]/,  // Character name - all caps, can have spaces, must end with letter/digit/paren/period
          optional(/ \^/)  // optional dual dialogue marker with single space
        )),
        token.immediate(/\n/)  // Must be immediately followed by newline (no colon allowed)
      ),
      seq(
        $.forced_character_start,
        /[^\n]+/,
        optional(/ \^/),
        '\n'
      )
    ),

    dialogue_block: $ => prec(4, seq(
      $.character,
      repeat1(seq(
        $.dialogue_line_start,  // Must be a non-blank line
        choice($.dialogue, $.parenthetical)
      )),
      optional($.blank_line)  // Optional at EOF
    )),

    dialogue: $ => prec.right(seq(
      $.line,
      token.immediate('\n')
    )),

    parenthetical: $ => prec.right(seq(
      '(',
      /[^)]+/,
      ')',
      '\n'
    )),

    action: $ => prec(1, choice(
      seq(
        $.forced_action_start,
        /[^\n]+/,
        '\n'
      ),
      seq(
        $.line,
        '\n'
      )
    )),

    transition: $ => prec(3, choice(
      seq(
        $.forced_transition_start,
        /[^\n]+/,
        '\n'
      ),
      seq(
        token(/[A-Z][A-Z ]*TO:/),  // Any uppercase text ending in TO:
        '\n'
      )
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

    // Boneyard comments (/* ... */)
    boneyard: $ => prec(10, seq(
      $.boneyard_start,
      /[\s\S]*?\*\//
    )),

    // Page breaks (===)
    page_break: $ => prec(10, seq(
      $.page_break_marker,
      '\n'
    )),

    // Synopses (= text)
    synopsis: $ => prec(5, seq(
      $.synopsis_start,
      /[^\n]+/,
      '\n'
    )),

    // Lyrics (~text)
    lyric: $ => prec(4, seq(
      $.lyric_start,
      /[^\n]+/,
      '\n'
    )),

    // Centered text (>text<)
    centered: $ => prec(4, seq(
      $.centered_start,
      /[^<\n]+/,
      '<',
      '\n'
    )),

    line: $ => token(prec(-1, /[^\n]+/)),  // Lower precedence so specific patterns match first

    // Description should not start with whitespace (to avoid matching continuation lines)
    description: $ => /[^ \t\n][^\n]*/
  }
});
