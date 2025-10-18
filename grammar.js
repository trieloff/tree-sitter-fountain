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
    $.note_start,
    $.forced_action_start,
    $.forced_character_start,
    $.forced_transition_start,
    $.lyric_start,
    $.centered_start,
    $.page_break_marker,
    $.synopsis_start,
    $.boneyard_start
  ],

  rules: {
    document: $ => repeat($._element),

    _element: $ => choice(
      $.title_page_field,
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

    title_page_field: $ => prec(10, seq(
      $.title_page_key,
      optional(seq(' ', $.description)),
      '\n'
    )),

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
        /[A-Z][A-Z0-9 \(\)\.']*[A-Z\)]/,
        optional(/\s*\^/),  // dual dialogue marker
        '\n'
      ),
      seq(
        $.forced_character_start,
        /[^\n]+/,
        optional(/\s*\^/),
        '\n'
      )
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

    line: $ => /[^\n]+/,

    description: $ => /[^\n]+/
  }
});
