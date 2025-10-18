#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_title_key = 2,
  sym_title_key_with_space = 3,
  anon_sym_SPACE = 4,
  anon_sym_DASH = 5,
  anon_sym_DOT = 6,
  sym_scene_location = 7,
  sym_scene_time = 8,
  anon_sym_POUND = 9,
  aux_sym_scene_number_token1 = 10,
  aux_sym_character_token1 = 11,
  aux_sym_character_token2 = 12,
  aux_sym_character_token3 = 13,
  anon_sym_LF2 = 14,
  anon_sym_LPAREN = 15,
  aux_sym_parenthetical_token1 = 16,
  anon_sym_RPAREN = 17,
  aux_sym_transition_token1 = 18,
  anon_sym_RBRACK_RBRACK = 19,
  sym_note_content = 20,
  anon_sym_STAR_SLASH = 21,
  sym_boneyard_content = 22,
  sym_centered_text = 23,
  sym_centered_end = 24,
  anon_sym_STAR_STAR_STAR = 25,
  aux_sym_bold_italic_token1 = 26,
  anon_sym_STAR_STAR = 27,
  anon_sym_STAR = 28,
  anon_sym__ = 29,
  aux_sym_underline_token1 = 30,
  sym_uppercase_text = 31,
  sym_text = 32,
  sym_description = 33,
  sym_scene_start = 34,
  sym_section_start = 35,
  sym_note_start = 36,
  sym_forced_action_start = 37,
  sym_forced_character_start = 38,
  sym_forced_transition_start = 39,
  sym_lyric_start = 40,
  sym_centered_start = 41,
  sym_page_break_marker = 42,
  sym_synopsis_start = 43,
  sym_boneyard_start = 44,
  sym_title_continuation = 45,
  sym_blank_line = 46,
  sym_dialogue_line_start = 47,
  sym_document = 48,
  sym_title_page = 49,
  sym__element = 50,
  sym_title_page_field = 51,
  sym_scene_heading = 52,
  sym_scene_number = 53,
  sym_character = 54,
  sym_dialogue_block = 55,
  sym_dialogue = 56,
  sym_parenthetical = 57,
  sym_action = 58,
  sym_transition = 59,
  sym_section_heading = 60,
  sym_note = 61,
  sym_boneyard = 62,
  sym_page_break = 63,
  sym_synopsis = 64,
  sym_lyric = 65,
  sym_centered = 66,
  sym__inline_content = 67,
  sym_bold_italic = 68,
  sym_bold = 69,
  sym_italic = 70,
  sym_underline = 71,
  aux_sym_document_repeat1 = 72,
  aux_sym_title_page_repeat1 = 73,
  aux_sym_title_page_field_repeat1 = 74,
  aux_sym_dialogue_block_repeat1 = 75,
  aux_sym_dialogue_repeat1 = 76,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_title_key] = "title_key",
  [sym_title_key_with_space] = "title_key_with_space",
  [anon_sym_SPACE] = " ",
  [anon_sym_DASH] = "-",
  [anon_sym_DOT] = ".",
  [sym_scene_location] = "scene_location",
  [sym_scene_time] = "scene_time",
  [anon_sym_POUND] = "#",
  [aux_sym_scene_number_token1] = "scene_number_token1",
  [aux_sym_character_token1] = "character_token1",
  [aux_sym_character_token2] = "character_token2",
  [aux_sym_character_token3] = "character_token3",
  [anon_sym_LF2] = "\n",
  [anon_sym_LPAREN] = "(",
  [aux_sym_parenthetical_token1] = "parenthetical_token1",
  [anon_sym_RPAREN] = ")",
  [aux_sym_transition_token1] = "transition_token1",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [sym_note_content] = "note_content",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_boneyard_content] = "boneyard_content",
  [sym_centered_text] = "centered_text",
  [sym_centered_end] = "centered_end",
  [anon_sym_STAR_STAR_STAR] = "***",
  [aux_sym_bold_italic_token1] = "bold_italic_token1",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym__] = "_",
  [aux_sym_underline_token1] = "underline_token1",
  [sym_uppercase_text] = "uppercase_text",
  [sym_text] = "text",
  [sym_description] = "description",
  [sym_scene_start] = "scene_start",
  [sym_section_start] = "section_start",
  [sym_note_start] = "note_start",
  [sym_forced_action_start] = "forced_action_start",
  [sym_forced_character_start] = "forced_character_start",
  [sym_forced_transition_start] = "forced_transition_start",
  [sym_lyric_start] = "lyric_start",
  [sym_centered_start] = "centered_start",
  [sym_page_break_marker] = "page_break_marker",
  [sym_synopsis_start] = "synopsis_start",
  [sym_boneyard_start] = "boneyard_start",
  [sym_title_continuation] = "title_continuation",
  [sym_blank_line] = "blank_line",
  [sym_dialogue_line_start] = "dialogue_line_start",
  [sym_document] = "document",
  [sym_title_page] = "title_page",
  [sym__element] = "_element",
  [sym_title_page_field] = "title_page_field",
  [sym_scene_heading] = "scene_heading",
  [sym_scene_number] = "scene_number",
  [sym_character] = "character",
  [sym_dialogue_block] = "dialogue_block",
  [sym_dialogue] = "dialogue",
  [sym_parenthetical] = "parenthetical",
  [sym_action] = "action",
  [sym_transition] = "transition",
  [sym_section_heading] = "section_heading",
  [sym_note] = "note",
  [sym_boneyard] = "boneyard",
  [sym_page_break] = "page_break",
  [sym_synopsis] = "synopsis",
  [sym_lyric] = "lyric",
  [sym_centered] = "centered",
  [sym__inline_content] = "_inline_content",
  [sym_bold_italic] = "bold_italic",
  [sym_bold] = "bold",
  [sym_italic] = "italic",
  [sym_underline] = "underline",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_title_page_repeat1] = "title_page_repeat1",
  [aux_sym_title_page_field_repeat1] = "title_page_field_repeat1",
  [aux_sym_dialogue_block_repeat1] = "dialogue_block_repeat1",
  [aux_sym_dialogue_repeat1] = "dialogue_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_title_key] = sym_title_key,
  [sym_title_key_with_space] = sym_title_key_with_space,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_scene_location] = sym_scene_location,
  [sym_scene_time] = sym_scene_time,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_scene_number_token1] = aux_sym_scene_number_token1,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [aux_sym_character_token2] = aux_sym_character_token2,
  [aux_sym_character_token3] = aux_sym_character_token3,
  [anon_sym_LF2] = anon_sym_LF,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_parenthetical_token1] = aux_sym_parenthetical_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_transition_token1] = aux_sym_transition_token1,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [sym_note_content] = sym_note_content,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_boneyard_content] = sym_boneyard_content,
  [sym_centered_text] = sym_centered_text,
  [sym_centered_end] = sym_centered_end,
  [anon_sym_STAR_STAR_STAR] = anon_sym_STAR_STAR_STAR,
  [aux_sym_bold_italic_token1] = aux_sym_bold_italic_token1,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym__] = anon_sym__,
  [aux_sym_underline_token1] = aux_sym_underline_token1,
  [sym_uppercase_text] = sym_uppercase_text,
  [sym_text] = sym_text,
  [sym_description] = sym_description,
  [sym_scene_start] = sym_scene_start,
  [sym_section_start] = sym_section_start,
  [sym_note_start] = sym_note_start,
  [sym_forced_action_start] = sym_forced_action_start,
  [sym_forced_character_start] = sym_forced_character_start,
  [sym_forced_transition_start] = sym_forced_transition_start,
  [sym_lyric_start] = sym_lyric_start,
  [sym_centered_start] = sym_centered_start,
  [sym_page_break_marker] = sym_page_break_marker,
  [sym_synopsis_start] = sym_synopsis_start,
  [sym_boneyard_start] = sym_boneyard_start,
  [sym_title_continuation] = sym_title_continuation,
  [sym_blank_line] = sym_blank_line,
  [sym_dialogue_line_start] = sym_dialogue_line_start,
  [sym_document] = sym_document,
  [sym_title_page] = sym_title_page,
  [sym__element] = sym__element,
  [sym_title_page_field] = sym_title_page_field,
  [sym_scene_heading] = sym_scene_heading,
  [sym_scene_number] = sym_scene_number,
  [sym_character] = sym_character,
  [sym_dialogue_block] = sym_dialogue_block,
  [sym_dialogue] = sym_dialogue,
  [sym_parenthetical] = sym_parenthetical,
  [sym_action] = sym_action,
  [sym_transition] = sym_transition,
  [sym_section_heading] = sym_section_heading,
  [sym_note] = sym_note,
  [sym_boneyard] = sym_boneyard,
  [sym_page_break] = sym_page_break,
  [sym_synopsis] = sym_synopsis,
  [sym_lyric] = sym_lyric,
  [sym_centered] = sym_centered,
  [sym__inline_content] = sym__inline_content,
  [sym_bold_italic] = sym_bold_italic,
  [sym_bold] = sym_bold,
  [sym_italic] = sym_italic,
  [sym_underline] = sym_underline,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_title_page_repeat1] = aux_sym_title_page_repeat1,
  [aux_sym_title_page_field_repeat1] = aux_sym_title_page_field_repeat1,
  [aux_sym_dialogue_block_repeat1] = aux_sym_dialogue_block_repeat1,
  [aux_sym_dialogue_repeat1] = aux_sym_dialogue_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_title_key] = {
    .visible = true,
    .named = true,
  },
  [sym_title_key_with_space] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_scene_location] = {
    .visible = true,
    .named = true,
  },
  [sym_scene_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_scene_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parenthetical_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_transition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_note_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_boneyard_content] = {
    .visible = true,
    .named = true,
  },
  [sym_centered_text] = {
    .visible = true,
    .named = true,
  },
  [sym_centered_end] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bold_italic_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_underline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_uppercase_text] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_scene_start] = {
    .visible = true,
    .named = true,
  },
  [sym_section_start] = {
    .visible = true,
    .named = true,
  },
  [sym_note_start] = {
    .visible = true,
    .named = true,
  },
  [sym_forced_action_start] = {
    .visible = true,
    .named = true,
  },
  [sym_forced_character_start] = {
    .visible = true,
    .named = true,
  },
  [sym_forced_transition_start] = {
    .visible = true,
    .named = true,
  },
  [sym_lyric_start] = {
    .visible = true,
    .named = true,
  },
  [sym_centered_start] = {
    .visible = true,
    .named = true,
  },
  [sym_page_break_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_synopsis_start] = {
    .visible = true,
    .named = true,
  },
  [sym_boneyard_start] = {
    .visible = true,
    .named = true,
  },
  [sym_title_continuation] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_line] = {
    .visible = true,
    .named = true,
  },
  [sym_dialogue_line_start] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_title_page] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_title_page_field] = {
    .visible = true,
    .named = true,
  },
  [sym_scene_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_scene_number] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_dialogue_block] = {
    .visible = true,
    .named = true,
  },
  [sym_dialogue] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthetical] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_transition] = {
    .visible = true,
    .named = true,
  },
  [sym_section_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_boneyard] = {
    .visible = true,
    .named = true,
  },
  [sym_page_break] = {
    .visible = true,
    .named = true,
  },
  [sym_synopsis] = {
    .visible = true,
    .named = true,
  },
  [sym_lyric] = {
    .visible = true,
    .named = true,
  },
  [sym_centered] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_content] = {
    .visible = false,
    .named = true,
  },
  [sym_bold_italic] = {
    .visible = true,
    .named = true,
  },
  [sym_bold] = {
    .visible = true,
    .named = true,
  },
  [sym_italic] = {
    .visible = true,
    .named = true,
  },
  [sym_underline] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_title_page_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_title_page_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dialogue_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dialogue_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 45,
  [46] = 44,
  [47] = 41,
  [48] = 45,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 75,
  [114] = 72,
  [115] = 70,
  [116] = 69,
  [117] = 96,
  [118] = 95,
  [119] = 94,
  [120] = 93,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        ' ', 19,
        '#', 61,
        '(', 68,
        ')', 72,
        '*', 89,
        '-', 53,
        '.', 54,
        '<', 82,
        ']', 33,
        '_', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '_') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '_') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '_') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '-') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(56);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '^') ADVANCE(66);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '-') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(85);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '-') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == ' ') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(18);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        ' ', 19,
        '#', 61,
        '(', 68,
        ')', 72,
        '*', 89,
        '-', 53,
        '.', 54,
        '<', 82,
        ']', 33,
        '^', 66,
        '_', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        ' ', 19,
        '#', 61,
        '(', 68,
        ')', 72,
        '*', 89,
        '-', 53,
        '.', 54,
        '<', 82,
        ']', 33,
        '_', 90,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '^') ADVANCE(1);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(105);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != '_') ADVANCE(97);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(105);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != '_') ADVANCE(97);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '^') ADVANCE(1);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '/') ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == ']') ADVANCE(74);
      END_STATE();
    case 34:
      if (lookahead == '^') ADVANCE(1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2);
      END_STATE();
    case 35:
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(36);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(108);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 37:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 38:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(71);
      END_STATE();
    case 39:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '_') ADVANCE(97);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(79);
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '_') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '\n') SKIP(42);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '_') ADVANCE(90);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_title_key);
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_title_key_with_space);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_') ADVANCE(107);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_scene_location);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_scene_location);
      if (lookahead == '\n') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_scene_location);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_scene_time);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_scene_time);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_scene_number_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_character_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_character_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_character_token3);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LF2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_') ADVANCE(107);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_note_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_note_content);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_boneyard_content);
      if (lookahead == '*') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_boneyard_content);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_centered_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_centered_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_centered_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_bold_italic_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '*') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_bold_italic_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '*') ADVANCE(83);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_underline_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '_') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_underline_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_uppercase_text);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_uppercase_text);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_uppercase_text);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_uppercase_text);
      if (lookahead == ' ') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_text);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '_') ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '*' &&
          lookahead != '_') ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '*' &&
          lookahead != '_') ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '*' &&
          lookahead != '_') ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '*' &&
          lookahead != '_') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_description);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(108);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 41, .external_lex_state = 2},
  [2] = {.lex_state = 42, .external_lex_state = 2},
  [3] = {.lex_state = 42, .external_lex_state = 2},
  [4] = {.lex_state = 42, .external_lex_state = 2},
  [5] = {.lex_state = 42, .external_lex_state = 2},
  [6] = {.lex_state = 41, .external_lex_state = 2},
  [7] = {.lex_state = 41, .external_lex_state = 3},
  [8] = {.lex_state = 41, .external_lex_state = 3},
  [9] = {.lex_state = 41, .external_lex_state = 2},
  [10] = {.lex_state = 41, .external_lex_state = 3},
  [11] = {.lex_state = 41, .external_lex_state = 3},
  [12] = {.lex_state = 41, .external_lex_state = 3},
  [13] = {.lex_state = 42, .external_lex_state = 4},
  [14] = {.lex_state = 42, .external_lex_state = 4},
  [15] = {.lex_state = 42, .external_lex_state = 4},
  [16] = {.lex_state = 42, .external_lex_state = 4},
  [17] = {.lex_state = 42, .external_lex_state = 4},
  [18] = {.lex_state = 42, .external_lex_state = 2},
  [19] = {.lex_state = 42, .external_lex_state = 2},
  [20] = {.lex_state = 42, .external_lex_state = 2},
  [21] = {.lex_state = 42, .external_lex_state = 2},
  [22] = {.lex_state = 42, .external_lex_state = 2},
  [23] = {.lex_state = 42, .external_lex_state = 2},
  [24] = {.lex_state = 42, .external_lex_state = 2},
  [25] = {.lex_state = 42, .external_lex_state = 2},
  [26] = {.lex_state = 42, .external_lex_state = 2},
  [27] = {.lex_state = 42, .external_lex_state = 2},
  [28] = {.lex_state = 42, .external_lex_state = 2},
  [29] = {.lex_state = 42, .external_lex_state = 2},
  [30] = {.lex_state = 42, .external_lex_state = 2},
  [31] = {.lex_state = 42, .external_lex_state = 2},
  [32] = {.lex_state = 42, .external_lex_state = 2},
  [33] = {.lex_state = 42, .external_lex_state = 2},
  [34] = {.lex_state = 42, .external_lex_state = 2},
  [35] = {.lex_state = 42, .external_lex_state = 2},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 0, .external_lex_state = 5},
  [57] = {.lex_state = 0, .external_lex_state = 6},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 0, .external_lex_state = 5},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 29},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 30},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 30},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 38},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 36},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0, .external_lex_state = 5},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0, .external_lex_state = 5},
  [100] = {.lex_state = 36},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 78},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 16},
  [109] = {.lex_state = 15},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 15},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 30},
  [115] = {.lex_state = 29},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 14},
  [118] = {.lex_state = 14},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 13},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_title_key] = ACTIONS(1),
    [sym_title_key_with_space] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_character_token1] = ACTIONS(1),
    [aux_sym_character_token3] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_transition_token1] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [sym_centered_end] = ACTIONS(1),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym_uppercase_text] = ACTIONS(1),
    [sym_scene_start] = ACTIONS(1),
    [sym_section_start] = ACTIONS(1),
    [sym_note_start] = ACTIONS(1),
    [sym_forced_action_start] = ACTIONS(1),
    [sym_forced_character_start] = ACTIONS(1),
    [sym_forced_transition_start] = ACTIONS(1),
    [sym_lyric_start] = ACTIONS(1),
    [sym_centered_start] = ACTIONS(1),
    [sym_page_break_marker] = ACTIONS(1),
    [sym_synopsis_start] = ACTIONS(1),
    [sym_boneyard_start] = ACTIONS(1),
    [sym_title_continuation] = ACTIONS(1),
    [sym_blank_line] = ACTIONS(1),
    [sym_dialogue_line_start] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(91),
    [sym_title_page] = STATE(5),
    [sym__element] = STATE(2),
    [sym_title_page_field] = STATE(9),
    [sym_scene_heading] = STATE(2),
    [sym_character] = STATE(56),
    [sym_dialogue_block] = STATE(2),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section_heading] = STATE(2),
    [sym_note] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym_page_break] = STATE(2),
    [sym_synopsis] = STATE(2),
    [sym_lyric] = STATE(2),
    [sym_centered] = STATE(2),
    [sym__inline_content] = STATE(39),
    [sym_bold_italic] = STATE(39),
    [sym_bold] = STATE(39),
    [sym_italic] = STATE(39),
    [sym_underline] = STATE(39),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_title_page_repeat1] = STATE(9),
    [aux_sym_dialogue_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_title_key] = ACTIONS(5),
    [sym_title_key_with_space] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [aux_sym_character_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym_STAR_STAR] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym__] = ACTIONS(21),
    [sym_uppercase_text] = ACTIONS(23),
    [sym_text] = ACTIONS(23),
    [sym_scene_start] = ACTIONS(25),
    [sym_section_start] = ACTIONS(27),
    [sym_note_start] = ACTIONS(29),
    [sym_forced_action_start] = ACTIONS(31),
    [sym_forced_character_start] = ACTIONS(33),
    [sym_forced_transition_start] = ACTIONS(35),
    [sym_lyric_start] = ACTIONS(37),
    [sym_centered_start] = ACTIONS(39),
    [sym_page_break_marker] = ACTIONS(41),
    [sym_synopsis_start] = ACTIONS(43),
    [sym_boneyard_start] = ACTIONS(45),
  },
  [2] = {
    [sym__element] = STATE(3),
    [sym_scene_heading] = STATE(3),
    [sym_character] = STATE(56),
    [sym_dialogue_block] = STATE(3),
    [sym_action] = STATE(3),
    [sym_transition] = STATE(3),
    [sym_section_heading] = STATE(3),
    [sym_note] = STATE(3),
    [sym_boneyard] = STATE(3),
    [sym_page_break] = STATE(3),
    [sym_synopsis] = STATE(3),
    [sym_lyric] = STATE(3),
    [sym_centered] = STATE(3),
    [sym__inline_content] = STATE(39),
    [sym_bold_italic] = STATE(39),
    [sym_bold] = STATE(39),
    [sym_italic] = STATE(39),
    [sym_underline] = STATE(39),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_dialogue_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(9),
    [aux_sym_character_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym_STAR_STAR] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym__] = ACTIONS(21),
    [sym_uppercase_text] = ACTIONS(23),
    [sym_text] = ACTIONS(23),
    [sym_scene_start] = ACTIONS(25),
    [sym_section_start] = ACTIONS(27),
    [sym_note_start] = ACTIONS(29),
    [sym_forced_action_start] = ACTIONS(31),
    [sym_forced_character_start] = ACTIONS(33),
    [sym_forced_transition_start] = ACTIONS(35),
    [sym_lyric_start] = ACTIONS(37),
    [sym_centered_start] = ACTIONS(39),
    [sym_page_break_marker] = ACTIONS(41),
    [sym_synopsis_start] = ACTIONS(43),
    [sym_boneyard_start] = ACTIONS(45),
  },
  [3] = {
    [sym__element] = STATE(3),
    [sym_scene_heading] = STATE(3),
    [sym_character] = STATE(56),
    [sym_dialogue_block] = STATE(3),
    [sym_action] = STATE(3),
    [sym_transition] = STATE(3),
    [sym_section_heading] = STATE(3),
    [sym_note] = STATE(3),
    [sym_boneyard] = STATE(3),
    [sym_page_break] = STATE(3),
    [sym_synopsis] = STATE(3),
    [sym_lyric] = STATE(3),
    [sym_centered] = STATE(3),
    [sym__inline_content] = STATE(39),
    [sym_bold_italic] = STATE(39),
    [sym_bold] = STATE(39),
    [sym_italic] = STATE(39),
    [sym_underline] = STATE(39),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_dialogue_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_DOT] = ACTIONS(51),
    [aux_sym_character_token1] = ACTIONS(54),
    [aux_sym_transition_token1] = ACTIONS(57),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(60),
    [anon_sym_STAR_STAR] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(66),
    [anon_sym__] = ACTIONS(69),
    [sym_uppercase_text] = ACTIONS(72),
    [sym_text] = ACTIONS(72),
    [sym_scene_start] = ACTIONS(75),
    [sym_section_start] = ACTIONS(78),
    [sym_note_start] = ACTIONS(81),
    [sym_forced_action_start] = ACTIONS(84),
    [sym_forced_character_start] = ACTIONS(87),
    [sym_forced_transition_start] = ACTIONS(90),
    [sym_lyric_start] = ACTIONS(93),
    [sym_centered_start] = ACTIONS(96),
    [sym_page_break_marker] = ACTIONS(99),
    [sym_synopsis_start] = ACTIONS(102),
    [sym_boneyard_start] = ACTIONS(105),
  },
  [4] = {
    [sym__element] = STATE(3),
    [sym_scene_heading] = STATE(3),
    [sym_character] = STATE(56),
    [sym_dialogue_block] = STATE(3),
    [sym_action] = STATE(3),
    [sym_transition] = STATE(3),
    [sym_section_heading] = STATE(3),
    [sym_note] = STATE(3),
    [sym_boneyard] = STATE(3),
    [sym_page_break] = STATE(3),
    [sym_synopsis] = STATE(3),
    [sym_lyric] = STATE(3),
    [sym_centered] = STATE(3),
    [sym__inline_content] = STATE(39),
    [sym_bold_italic] = STATE(39),
    [sym_bold] = STATE(39),
    [sym_italic] = STATE(39),
    [sym_underline] = STATE(39),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_dialogue_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(9),
    [aux_sym_character_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym_STAR_STAR] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym__] = ACTIONS(21),
    [sym_uppercase_text] = ACTIONS(23),
    [sym_text] = ACTIONS(23),
    [sym_scene_start] = ACTIONS(25),
    [sym_section_start] = ACTIONS(27),
    [sym_note_start] = ACTIONS(29),
    [sym_forced_action_start] = ACTIONS(31),
    [sym_forced_character_start] = ACTIONS(33),
    [sym_forced_transition_start] = ACTIONS(35),
    [sym_lyric_start] = ACTIONS(37),
    [sym_centered_start] = ACTIONS(39),
    [sym_page_break_marker] = ACTIONS(41),
    [sym_synopsis_start] = ACTIONS(43),
    [sym_boneyard_start] = ACTIONS(45),
  },
  [5] = {
    [sym__element] = STATE(4),
    [sym_scene_heading] = STATE(4),
    [sym_character] = STATE(56),
    [sym_dialogue_block] = STATE(4),
    [sym_action] = STATE(4),
    [sym_transition] = STATE(4),
    [sym_section_heading] = STATE(4),
    [sym_note] = STATE(4),
    [sym_boneyard] = STATE(4),
    [sym_page_break] = STATE(4),
    [sym_synopsis] = STATE(4),
    [sym_lyric] = STATE(4),
    [sym_centered] = STATE(4),
    [sym__inline_content] = STATE(39),
    [sym_bold_italic] = STATE(39),
    [sym_bold] = STATE(39),
    [sym_italic] = STATE(39),
    [sym_underline] = STATE(39),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_dialogue_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(9),
    [aux_sym_character_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(15),
    [anon_sym_STAR_STAR] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym__] = ACTIONS(21),
    [sym_uppercase_text] = ACTIONS(23),
    [sym_text] = ACTIONS(23),
    [sym_scene_start] = ACTIONS(25),
    [sym_section_start] = ACTIONS(27),
    [sym_note_start] = ACTIONS(29),
    [sym_forced_action_start] = ACTIONS(31),
    [sym_forced_character_start] = ACTIONS(33),
    [sym_forced_transition_start] = ACTIONS(35),
    [sym_lyric_start] = ACTIONS(37),
    [sym_centered_start] = ACTIONS(39),
    [sym_page_break_marker] = ACTIONS(41),
    [sym_synopsis_start] = ACTIONS(43),
    [sym_boneyard_start] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(112), 1,
      sym_title_key,
    ACTIONS(115), 1,
      sym_title_key_with_space,
    STATE(6), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(118), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(110), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [36] = 4,
    ACTIONS(124), 1,
      sym_title_continuation,
    STATE(11), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(122), 11,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(120), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [70] = 4,
    ACTIONS(124), 1,
      sym_title_continuation,
    STATE(10), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(122), 11,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(120), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [104] = 5,
    ACTIONS(5), 1,
      sym_title_key,
    ACTIONS(7), 1,
      sym_title_key_with_space,
    STATE(6), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(128), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(126), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [140] = 4,
    ACTIONS(124), 1,
      sym_title_continuation,
    STATE(11), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(132), 11,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(130), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [174] = 4,
    ACTIONS(138), 1,
      sym_title_continuation,
    STATE(11), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(136), 11,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(134), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [208] = 2,
    ACTIONS(136), 11,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(134), 13,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      sym_title_continuation,
      ts_builtin_sym_end,
  [237] = 4,
    ACTIONS(145), 1,
      sym_dialogue_line_start,
    STATE(14), 1,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(143), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(141), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [269] = 4,
    ACTIONS(151), 1,
      sym_dialogue_line_start,
    STATE(14), 1,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(149), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(147), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [301] = 2,
    ACTIONS(149), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(147), 13,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      sym_dialogue_line_start,
      ts_builtin_sym_end,
  [328] = 2,
    ACTIONS(156), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(154), 13,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      sym_dialogue_line_start,
      ts_builtin_sym_end,
  [355] = 2,
    ACTIONS(160), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(158), 13,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      sym_dialogue_line_start,
      ts_builtin_sym_end,
  [382] = 2,
    ACTIONS(164), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(162), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [408] = 2,
    ACTIONS(168), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(166), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [434] = 2,
    ACTIONS(172), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(170), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [460] = 2,
    ACTIONS(176), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(174), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [486] = 2,
    ACTIONS(180), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(178), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [512] = 2,
    ACTIONS(184), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(182), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [538] = 2,
    ACTIONS(188), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(186), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [564] = 2,
    ACTIONS(192), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(190), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [590] = 2,
    ACTIONS(196), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(194), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [616] = 2,
    ACTIONS(200), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(198), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [642] = 2,
    ACTIONS(204), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(202), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [668] = 2,
    ACTIONS(208), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(206), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [694] = 2,
    ACTIONS(212), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(210), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [720] = 2,
    ACTIONS(216), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(214), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [746] = 2,
    ACTIONS(220), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(218), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [772] = 2,
    ACTIONS(224), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(222), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [798] = 2,
    ACTIONS(228), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(226), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [824] = 2,
    ACTIONS(232), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(230), 12,
      sym_scene_start,
      sym_section_start,
      sym_note_start,
      sym_forced_action_start,
      sym_forced_character_start,
      sym_forced_transition_start,
      sym_lyric_start,
      sym_centered_start,
      sym_page_break_marker,
      sym_synopsis_start,
      sym_boneyard_start,
      ts_builtin_sym_end,
  [850] = 8,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(238), 1,
      anon_sym_STAR_STAR,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym__,
    ACTIONS(244), 2,
      sym_uppercase_text,
      sym_text,
    STATE(15), 2,
      sym_dialogue,
      sym_parenthetical,
    STATE(37), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
  [882] = 7,
    ACTIONS(236), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(238), 1,
      anon_sym_STAR_STAR,
    ACTIONS(240), 1,
      anon_sym_STAR,
    ACTIONS(242), 1,
      anon_sym__,
    ACTIONS(246), 1,
      anon_sym_LF2,
    ACTIONS(248), 2,
      sym_uppercase_text,
      sym_text,
    STATE(40), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
  [910] = 7,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(252), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(255), 1,
      anon_sym_STAR_STAR,
    ACTIONS(258), 1,
      anon_sym_STAR,
    ACTIONS(261), 1,
      anon_sym__,
    ACTIONS(264), 2,
      sym_uppercase_text,
      sym_text,
    STATE(38), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
  [938] = 7,
    ACTIONS(15), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(17), 1,
      anon_sym_STAR_STAR,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym__,
    ACTIONS(267), 1,
      anon_sym_LF,
    ACTIONS(269), 2,
      sym_uppercase_text,
      sym_text,
    STATE(38), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
  [966] = 7,
    ACTIONS(271), 1,
      anon_sym_LF2,
    ACTIONS(273), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(276), 1,
      anon_sym_STAR_STAR,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(282), 1,
      anon_sym__,
    ACTIONS(285), 2,
      sym_uppercase_text,
      sym_text,
    STATE(40), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
  [994] = 1,
    ACTIONS(288), 7,
      anon_sym_LF,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1004] = 1,
    ACTIONS(290), 7,
      anon_sym_LF,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1014] = 2,
    ACTIONS(292), 1,
      anon_sym_LF2,
    ACTIONS(290), 6,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1026] = 1,
    ACTIONS(294), 7,
      anon_sym_LF,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1036] = 1,
    ACTIONS(296), 7,
      anon_sym_LF,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1046] = 2,
    ACTIONS(298), 1,
      anon_sym_LF2,
    ACTIONS(294), 6,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1058] = 2,
    ACTIONS(300), 1,
      anon_sym_LF2,
    ACTIONS(288), 6,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1070] = 2,
    ACTIONS(302), 1,
      anon_sym_LF2,
    ACTIONS(296), 6,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1082] = 6,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(306), 1,
      anon_sym_SPACE,
    ACTIONS(308), 1,
      anon_sym_DASH,
    ACTIONS(310), 1,
      sym_scene_location,
    ACTIONS(312), 1,
      anon_sym_POUND,
    STATE(86), 1,
      sym_scene_number,
  [1101] = 5,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(316), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      sym_scene_location,
    STATE(61), 1,
      sym_scene_number,
  [1117] = 4,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(316), 1,
      anon_sym_DASH,
    ACTIONS(320), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym_scene_number,
  [1130] = 4,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(324), 1,
      anon_sym_DASH,
    STATE(88), 1,
      sym_scene_number,
  [1143] = 3,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(326), 1,
      anon_sym_LF,
    STATE(105), 1,
      sym_scene_number,
  [1153] = 3,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(328), 1,
      anon_sym_LF,
    STATE(101), 1,
      sym_scene_number,
  [1163] = 3,
    ACTIONS(312), 1,
      anon_sym_POUND,
    ACTIONS(322), 1,
      anon_sym_LF,
    STATE(88), 1,
      sym_scene_number,
  [1173] = 2,
    ACTIONS(145), 1,
      sym_dialogue_line_start,
    STATE(13), 1,
      aux_sym_dialogue_block_repeat1,
  [1180] = 2,
    ACTIONS(124), 1,
      sym_title_continuation,
    STATE(7), 1,
      aux_sym_title_page_field_repeat1,
  [1187] = 2,
    ACTIONS(330), 1,
      anon_sym_LF,
    ACTIONS(332), 1,
      aux_sym_character_token3,
  [1194] = 2,
    ACTIONS(334), 1,
      anon_sym_LF,
    ACTIONS(336), 1,
      anon_sym_SPACE,
  [1201] = 1,
    ACTIONS(338), 1,
      sym_scene_time,
  [1205] = 1,
    ACTIONS(322), 1,
      anon_sym_LF,
  [1209] = 1,
    ACTIONS(340), 1,
      sym_scene_time,
  [1213] = 1,
    ACTIONS(342), 1,
      anon_sym_POUND,
  [1217] = 1,
    ACTIONS(344), 1,
      anon_sym_LF,
  [1221] = 1,
    ACTIONS(346), 1,
      anon_sym_LF,
  [1225] = 1,
    ACTIONS(348), 1,
      sym_note_content,
  [1229] = 1,
    ACTIONS(350), 1,
      sym_dialogue_line_start,
  [1233] = 1,
    ACTIONS(352), 1,
      anon_sym_LF,
  [1237] = 1,
    ACTIONS(354), 1,
      anon_sym__,
  [1241] = 1,
    ACTIONS(356), 1,
      anon_sym_STAR,
  [1245] = 1,
    ACTIONS(358), 1,
      anon_sym_LF,
  [1249] = 1,
    ACTIONS(360), 1,
      anon_sym_STAR_STAR,
  [1253] = 1,
    ACTIONS(362), 1,
      anon_sym_LF,
  [1257] = 1,
    ACTIONS(364), 1,
      anon_sym_LF,
  [1261] = 1,
    ACTIONS(366), 1,
      anon_sym_STAR_STAR_STAR,
  [1265] = 1,
    ACTIONS(368), 1,
      anon_sym_LF,
  [1269] = 1,
    ACTIONS(370), 1,
      anon_sym_STAR_SLASH,
  [1273] = 1,
    ACTIONS(372), 1,
      anon_sym_LF,
  [1277] = 1,
    ACTIONS(374), 1,
      sym_centered_end,
  [1281] = 1,
    ACTIONS(376), 1,
      anon_sym_LF,
  [1285] = 1,
    ACTIONS(378), 1,
      aux_sym_parenthetical_token1,
  [1289] = 1,
    ACTIONS(380), 1,
      anon_sym_LF,
  [1293] = 1,
    ACTIONS(382), 1,
      anon_sym_LF,
  [1297] = 1,
    ACTIONS(384), 1,
      anon_sym_RBRACK_RBRACK,
  [1301] = 1,
    ACTIONS(386), 1,
      sym_description,
  [1305] = 1,
    ACTIONS(320), 1,
      anon_sym_LF,
  [1309] = 1,
    ACTIONS(388), 1,
      sym_scene_time,
  [1313] = 1,
    ACTIONS(328), 1,
      anon_sym_LF,
  [1317] = 1,
    ACTIONS(390), 1,
      anon_sym_LF,
  [1321] = 1,
    ACTIONS(392), 1,
      aux_sym_scene_number_token1,
  [1325] = 1,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
  [1329] = 1,
    ACTIONS(396), 1,
      sym_dialogue_line_start,
  [1333] = 1,
    ACTIONS(398), 1,
      aux_sym_underline_token1,
  [1337] = 1,
    ACTIONS(400), 1,
      aux_sym_bold_italic_token1,
  [1341] = 1,
    ACTIONS(402), 1,
      aux_sym_bold_italic_token1,
  [1345] = 1,
    ACTIONS(404), 1,
      aux_sym_bold_italic_token1,
  [1349] = 1,
    ACTIONS(406), 1,
      anon_sym_LF,
  [1353] = 1,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
  [1357] = 1,
    ACTIONS(410), 1,
      sym_dialogue_line_start,
  [1361] = 1,
    ACTIONS(412), 1,
      sym_description,
  [1365] = 1,
    ACTIONS(326), 1,
      anon_sym_LF,
  [1369] = 1,
    ACTIONS(414), 1,
      anon_sym_LF,
  [1373] = 1,
    ACTIONS(416), 1,
      anon_sym_LF,
  [1377] = 1,
    ACTIONS(418), 1,
      sym_boneyard_content,
  [1381] = 1,
    ACTIONS(420), 1,
      anon_sym_LF,
  [1385] = 1,
    ACTIONS(422), 1,
      aux_sym_character_token2,
  [1389] = 1,
    ACTIONS(424), 1,
      anon_sym_LF,
  [1393] = 1,
    ACTIONS(426), 1,
      sym_centered_text,
  [1397] = 1,
    ACTIONS(428), 1,
      aux_sym_character_token2,
  [1401] = 1,
    ACTIONS(430), 1,
      aux_sym_character_token2,
  [1405] = 1,
    ACTIONS(432), 1,
      aux_sym_character_token2,
  [1409] = 1,
    ACTIONS(434), 1,
      aux_sym_character_token2,
  [1413] = 1,
    ACTIONS(436), 1,
      anon_sym_STAR_STAR_STAR,
  [1417] = 1,
    ACTIONS(438), 1,
      anon_sym_STAR_STAR,
  [1421] = 1,
    ACTIONS(440), 1,
      anon_sym_STAR,
  [1425] = 1,
    ACTIONS(442), 1,
      anon_sym__,
  [1429] = 1,
    ACTIONS(444), 1,
      aux_sym_bold_italic_token1,
  [1433] = 1,
    ACTIONS(446), 1,
      aux_sym_bold_italic_token1,
  [1437] = 1,
    ACTIONS(448), 1,
      aux_sym_bold_italic_token1,
  [1441] = 1,
    ACTIONS(450), 1,
      aux_sym_underline_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 104,
  [SMALL_STATE(10)] = 140,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 208,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 269,
  [SMALL_STATE(15)] = 301,
  [SMALL_STATE(16)] = 328,
  [SMALL_STATE(17)] = 355,
  [SMALL_STATE(18)] = 382,
  [SMALL_STATE(19)] = 408,
  [SMALL_STATE(20)] = 434,
  [SMALL_STATE(21)] = 460,
  [SMALL_STATE(22)] = 486,
  [SMALL_STATE(23)] = 512,
  [SMALL_STATE(24)] = 538,
  [SMALL_STATE(25)] = 564,
  [SMALL_STATE(26)] = 590,
  [SMALL_STATE(27)] = 616,
  [SMALL_STATE(28)] = 642,
  [SMALL_STATE(29)] = 668,
  [SMALL_STATE(30)] = 694,
  [SMALL_STATE(31)] = 720,
  [SMALL_STATE(32)] = 746,
  [SMALL_STATE(33)] = 772,
  [SMALL_STATE(34)] = 798,
  [SMALL_STATE(35)] = 824,
  [SMALL_STATE(36)] = 850,
  [SMALL_STATE(37)] = 882,
  [SMALL_STATE(38)] = 910,
  [SMALL_STATE(39)] = 938,
  [SMALL_STATE(40)] = 966,
  [SMALL_STATE(41)] = 994,
  [SMALL_STATE(42)] = 1004,
  [SMALL_STATE(43)] = 1014,
  [SMALL_STATE(44)] = 1026,
  [SMALL_STATE(45)] = 1036,
  [SMALL_STATE(46)] = 1046,
  [SMALL_STATE(47)] = 1058,
  [SMALL_STATE(48)] = 1070,
  [SMALL_STATE(49)] = 1082,
  [SMALL_STATE(50)] = 1101,
  [SMALL_STATE(51)] = 1117,
  [SMALL_STATE(52)] = 1130,
  [SMALL_STATE(53)] = 1143,
  [SMALL_STATE(54)] = 1153,
  [SMALL_STATE(55)] = 1163,
  [SMALL_STATE(56)] = 1173,
  [SMALL_STATE(57)] = 1180,
  [SMALL_STATE(58)] = 1187,
  [SMALL_STATE(59)] = 1194,
  [SMALL_STATE(60)] = 1201,
  [SMALL_STATE(61)] = 1205,
  [SMALL_STATE(62)] = 1209,
  [SMALL_STATE(63)] = 1213,
  [SMALL_STATE(64)] = 1217,
  [SMALL_STATE(65)] = 1221,
  [SMALL_STATE(66)] = 1225,
  [SMALL_STATE(67)] = 1229,
  [SMALL_STATE(68)] = 1233,
  [SMALL_STATE(69)] = 1237,
  [SMALL_STATE(70)] = 1241,
  [SMALL_STATE(71)] = 1245,
  [SMALL_STATE(72)] = 1249,
  [SMALL_STATE(73)] = 1253,
  [SMALL_STATE(74)] = 1257,
  [SMALL_STATE(75)] = 1261,
  [SMALL_STATE(76)] = 1265,
  [SMALL_STATE(77)] = 1269,
  [SMALL_STATE(78)] = 1273,
  [SMALL_STATE(79)] = 1277,
  [SMALL_STATE(80)] = 1281,
  [SMALL_STATE(81)] = 1285,
  [SMALL_STATE(82)] = 1289,
  [SMALL_STATE(83)] = 1293,
  [SMALL_STATE(84)] = 1297,
  [SMALL_STATE(85)] = 1301,
  [SMALL_STATE(86)] = 1305,
  [SMALL_STATE(87)] = 1309,
  [SMALL_STATE(88)] = 1313,
  [SMALL_STATE(89)] = 1317,
  [SMALL_STATE(90)] = 1321,
  [SMALL_STATE(91)] = 1325,
  [SMALL_STATE(92)] = 1329,
  [SMALL_STATE(93)] = 1333,
  [SMALL_STATE(94)] = 1337,
  [SMALL_STATE(95)] = 1341,
  [SMALL_STATE(96)] = 1345,
  [SMALL_STATE(97)] = 1349,
  [SMALL_STATE(98)] = 1353,
  [SMALL_STATE(99)] = 1357,
  [SMALL_STATE(100)] = 1361,
  [SMALL_STATE(101)] = 1365,
  [SMALL_STATE(102)] = 1369,
  [SMALL_STATE(103)] = 1373,
  [SMALL_STATE(104)] = 1377,
  [SMALL_STATE(105)] = 1381,
  [SMALL_STATE(106)] = 1385,
  [SMALL_STATE(107)] = 1389,
  [SMALL_STATE(108)] = 1393,
  [SMALL_STATE(109)] = 1397,
  [SMALL_STATE(110)] = 1401,
  [SMALL_STATE(111)] = 1405,
  [SMALL_STATE(112)] = 1409,
  [SMALL_STATE(113)] = 1413,
  [SMALL_STATE(114)] = 1417,
  [SMALL_STATE(115)] = 1421,
  [SMALL_STATE(116)] = 1425,
  [SMALL_STATE(117)] = 1429,
  [SMALL_STATE(118)] = 1433,
  [SMALL_STATE(119)] = 1437,
  [SMALL_STATE(120)] = 1441,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_centered, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_centered, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 4, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synopsis, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synopsis, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_break, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_break, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 3, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 6, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 6, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 7, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 7, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold_italic, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold_italic, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_underline, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_underline, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_number, 3, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [394] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 4, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 1, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_scene_start = 0,
  ts_external_token_section_start = 1,
  ts_external_token_note_start = 2,
  ts_external_token_forced_action_start = 3,
  ts_external_token_forced_character_start = 4,
  ts_external_token_forced_transition_start = 5,
  ts_external_token_lyric_start = 6,
  ts_external_token_centered_start = 7,
  ts_external_token_page_break_marker = 8,
  ts_external_token_synopsis_start = 9,
  ts_external_token_boneyard_start = 10,
  ts_external_token_title_continuation = 11,
  ts_external_token_blank_line = 12,
  ts_external_token_dialogue_line_start = 13,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_scene_start] = sym_scene_start,
  [ts_external_token_section_start] = sym_section_start,
  [ts_external_token_note_start] = sym_note_start,
  [ts_external_token_forced_action_start] = sym_forced_action_start,
  [ts_external_token_forced_character_start] = sym_forced_character_start,
  [ts_external_token_forced_transition_start] = sym_forced_transition_start,
  [ts_external_token_lyric_start] = sym_lyric_start,
  [ts_external_token_centered_start] = sym_centered_start,
  [ts_external_token_page_break_marker] = sym_page_break_marker,
  [ts_external_token_synopsis_start] = sym_synopsis_start,
  [ts_external_token_boneyard_start] = sym_boneyard_start,
  [ts_external_token_title_continuation] = sym_title_continuation,
  [ts_external_token_blank_line] = sym_blank_line,
  [ts_external_token_dialogue_line_start] = sym_dialogue_line_start,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_scene_start] = true,
    [ts_external_token_section_start] = true,
    [ts_external_token_note_start] = true,
    [ts_external_token_forced_action_start] = true,
    [ts_external_token_forced_character_start] = true,
    [ts_external_token_forced_transition_start] = true,
    [ts_external_token_lyric_start] = true,
    [ts_external_token_centered_start] = true,
    [ts_external_token_page_break_marker] = true,
    [ts_external_token_synopsis_start] = true,
    [ts_external_token_boneyard_start] = true,
    [ts_external_token_title_continuation] = true,
    [ts_external_token_blank_line] = true,
    [ts_external_token_dialogue_line_start] = true,
  },
  [2] = {
    [ts_external_token_scene_start] = true,
    [ts_external_token_section_start] = true,
    [ts_external_token_note_start] = true,
    [ts_external_token_forced_action_start] = true,
    [ts_external_token_forced_character_start] = true,
    [ts_external_token_forced_transition_start] = true,
    [ts_external_token_lyric_start] = true,
    [ts_external_token_centered_start] = true,
    [ts_external_token_page_break_marker] = true,
    [ts_external_token_synopsis_start] = true,
    [ts_external_token_boneyard_start] = true,
  },
  [3] = {
    [ts_external_token_scene_start] = true,
    [ts_external_token_section_start] = true,
    [ts_external_token_note_start] = true,
    [ts_external_token_forced_action_start] = true,
    [ts_external_token_forced_character_start] = true,
    [ts_external_token_forced_transition_start] = true,
    [ts_external_token_lyric_start] = true,
    [ts_external_token_centered_start] = true,
    [ts_external_token_page_break_marker] = true,
    [ts_external_token_synopsis_start] = true,
    [ts_external_token_boneyard_start] = true,
    [ts_external_token_title_continuation] = true,
  },
  [4] = {
    [ts_external_token_scene_start] = true,
    [ts_external_token_section_start] = true,
    [ts_external_token_note_start] = true,
    [ts_external_token_forced_action_start] = true,
    [ts_external_token_forced_character_start] = true,
    [ts_external_token_forced_transition_start] = true,
    [ts_external_token_lyric_start] = true,
    [ts_external_token_centered_start] = true,
    [ts_external_token_page_break_marker] = true,
    [ts_external_token_synopsis_start] = true,
    [ts_external_token_boneyard_start] = true,
    [ts_external_token_dialogue_line_start] = true,
  },
  [5] = {
    [ts_external_token_dialogue_line_start] = true,
  },
  [6] = {
    [ts_external_token_title_continuation] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_fountain_external_scanner_create(void);
void tree_sitter_fountain_external_scanner_destroy(void *);
bool tree_sitter_fountain_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_fountain_external_scanner_serialize(void *, char *);
void tree_sitter_fountain_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_fountain(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_fountain_external_scanner_create,
      tree_sitter_fountain_external_scanner_destroy,
      tree_sitter_fountain_external_scanner_scan,
      tree_sitter_fountain_external_scanner_serialize,
      tree_sitter_fountain_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
