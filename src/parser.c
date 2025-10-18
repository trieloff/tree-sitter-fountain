#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 127
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 82
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
  sym_section_block = 51,
  sym_scene_block = 52,
  sym__scene_content = 53,
  sym_title_page_field = 54,
  sym_scene_heading = 55,
  sym_scene_number = 56,
  sym_character = 57,
  sym_dialogue_block = 58,
  sym_dialogue = 59,
  sym_parenthetical = 60,
  sym_action = 61,
  sym_transition = 62,
  sym_section_heading = 63,
  sym_note = 64,
  sym_boneyard = 65,
  sym_page_break = 66,
  sym_synopsis = 67,
  sym_lyric = 68,
  sym_centered = 69,
  sym__inline_content = 70,
  sym_bold_italic = 71,
  sym_bold = 72,
  sym_italic = 73,
  sym_underline = 74,
  aux_sym_document_repeat1 = 75,
  aux_sym_title_page_repeat1 = 76,
  aux_sym_section_block_repeat1 = 77,
  aux_sym_scene_block_repeat1 = 78,
  aux_sym_title_page_field_repeat1 = 79,
  aux_sym_dialogue_block_repeat1 = 80,
  aux_sym_dialogue_repeat1 = 81,
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
  [sym_section_block] = "section_block",
  [sym_scene_block] = "scene_block",
  [sym__scene_content] = "_scene_content",
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
  [aux_sym_section_block_repeat1] = "section_block_repeat1",
  [aux_sym_scene_block_repeat1] = "scene_block_repeat1",
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
  [sym_section_block] = sym_section_block,
  [sym_scene_block] = sym_scene_block,
  [sym__scene_content] = sym__scene_content,
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
  [aux_sym_section_block_repeat1] = aux_sym_section_block_repeat1,
  [aux_sym_scene_block_repeat1] = aux_sym_scene_block_repeat1,
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
  [sym_section_block] = {
    .visible = true,
    .named = true,
  },
  [sym_scene_block] = {
    .visible = true,
    .named = true,
  },
  [sym__scene_content] = {
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
  [aux_sym_section_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scene_block_repeat1] = {
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
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 44,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 47,
  [52] = 48,
  [53] = 49,
  [54] = 50,
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
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 91,
  [120] = 92,
  [121] = 90,
  [122] = 108,
  [123] = 100,
  [124] = 99,
  [125] = 67,
  [126] = 96,
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
        ')', 71,
        '*', 88,
        '-', 53,
        '.', 54,
        '<', 81,
        ']', 33,
        '_', 89,
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
      if (lookahead == ':') ADVANCE(72);
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
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '_') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(105);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '_') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(105);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '_') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(105);
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
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(91);
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
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(80);
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
        ')', 71,
        '*', 88,
        '-', 53,
        '.', 54,
        '<', 81,
        ']', 33,
        '^', 66,
        '_', 89,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        ' ', 19,
        '#', 61,
        '(', 68,
        ')', 71,
        '*', 88,
        '-', 53,
        '.', 54,
        '<', 81,
        ']', 33,
        '_', 89,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
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
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != '_') ADVANCE(96);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != '_') ADVANCE(96);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '^') ADVANCE(1);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '/') ADVANCE(76);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == ']') ADVANCE(73);
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
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(106);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 37:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(70);
      END_STATE();
    case 38:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 39:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '_') ADVANCE(96);
      END_STATE();
    case 40:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(78);
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      if (lookahead == '\n') SKIP(41);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '_') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(105);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '\n') SKIP(42);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '_') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(105);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
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
          (lookahead < '(' || '*' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_') ADVANCE(105);
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
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_note_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_note_content);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_boneyard_content);
      if (lookahead == '*') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_boneyard_content);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_centered_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_centered_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_centered_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_bold_italic_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '*') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_bold_italic_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '*') ADVANCE(82);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(86);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_underline_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '_') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_underline_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_uppercase_text);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_uppercase_text);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_uppercase_text);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_uppercase_text);
      if (lookahead == ' ') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_text);
      END_STATE();
    case 97:
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
    case 98:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '_') ADVANCE(105);
      END_STATE();
    case 99:
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
    case 100:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '_') ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '_') ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(35);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '_') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '_') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_description);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
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
  [6] = {.lex_state = 42, .external_lex_state = 2},
  [7] = {.lex_state = 42, .external_lex_state = 2},
  [8] = {.lex_state = 42, .external_lex_state = 2},
  [9] = {.lex_state = 42, .external_lex_state = 2},
  [10] = {.lex_state = 42, .external_lex_state = 2},
  [11] = {.lex_state = 42, .external_lex_state = 2},
  [12] = {.lex_state = 41, .external_lex_state = 3},
  [13] = {.lex_state = 41, .external_lex_state = 3},
  [14] = {.lex_state = 41, .external_lex_state = 3},
  [15] = {.lex_state = 41, .external_lex_state = 3},
  [16] = {.lex_state = 41, .external_lex_state = 2},
  [17] = {.lex_state = 41, .external_lex_state = 2},
  [18] = {.lex_state = 41, .external_lex_state = 3},
  [19] = {.lex_state = 42, .external_lex_state = 4},
  [20] = {.lex_state = 42, .external_lex_state = 4},
  [21] = {.lex_state = 42, .external_lex_state = 4},
  [22] = {.lex_state = 42, .external_lex_state = 4},
  [23] = {.lex_state = 42, .external_lex_state = 4},
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
  [36] = {.lex_state = 42, .external_lex_state = 2},
  [37] = {.lex_state = 42, .external_lex_state = 2},
  [38] = {.lex_state = 42, .external_lex_state = 2},
  [39] = {.lex_state = 42, .external_lex_state = 2},
  [40] = {.lex_state = 42, .external_lex_state = 2},
  [41] = {.lex_state = 42, .external_lex_state = 2},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 18},
  [63] = {.lex_state = 0, .external_lex_state = 5},
  [64] = {.lex_state = 0, .external_lex_state = 6},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 0, .external_lex_state = 5},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 29},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 36},
  [86] = {.lex_state = 37},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 13},
  [90] = {.lex_state = 31},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 14},
  [97] = {.lex_state = 13},
  [98] = {.lex_state = 0, .external_lex_state = 5},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 0, .external_lex_state = 5},
  [103] = {.lex_state = 36},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 77},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 11},
  [110] = {.lex_state = 15},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 16},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 38},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 29},
  [121] = {.lex_state = 31},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 14},
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
    [sym_document] = STATE(66),
    [sym_title_page] = STATE(3),
    [sym__element] = STATE(4),
    [sym_section_block] = STATE(4),
    [sym_scene_block] = STATE(4),
    [sym_title_page_field] = STATE(17),
    [sym_scene_heading] = STATE(11),
    [sym_character] = STATE(63),
    [sym_dialogue_block] = STATE(4),
    [sym_action] = STATE(4),
    [sym_transition] = STATE(4),
    [sym_section_heading] = STATE(6),
    [sym_note] = STATE(4),
    [sym_boneyard] = STATE(4),
    [sym_page_break] = STATE(4),
    [sym_synopsis] = STATE(4),
    [sym_lyric] = STATE(4),
    [sym_centered] = STATE(4),
    [sym__inline_content] = STATE(46),
    [sym_bold_italic] = STATE(46),
    [sym_bold] = STATE(46),
    [sym_italic] = STATE(46),
    [sym_underline] = STATE(46),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_title_page_repeat1] = STATE(17),
    [aux_sym_dialogue_repeat1] = STATE(46),
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
    [sym__element] = STATE(2),
    [sym_section_block] = STATE(2),
    [sym_scene_block] = STATE(2),
    [sym_scene_heading] = STATE(11),
    [sym_character] = STATE(63),
    [sym_dialogue_block] = STATE(2),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section_heading] = STATE(6),
    [sym_note] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym_page_break] = STATE(2),
    [sym_synopsis] = STATE(2),
    [sym_lyric] = STATE(2),
    [sym_centered] = STATE(2),
    [sym__inline_content] = STATE(46),
    [sym_bold_italic] = STATE(46),
    [sym_bold] = STATE(46),
    [sym_italic] = STATE(46),
    [sym_underline] = STATE(46),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_dialogue_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(49),
    [aux_sym_character_token1] = ACTIONS(52),
    [aux_sym_transition_token1] = ACTIONS(55),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(58),
    [anon_sym_STAR_STAR] = ACTIONS(61),
    [anon_sym_STAR] = ACTIONS(64),
    [anon_sym__] = ACTIONS(67),
    [sym_uppercase_text] = ACTIONS(70),
    [sym_text] = ACTIONS(70),
    [sym_scene_start] = ACTIONS(73),
    [sym_section_start] = ACTIONS(76),
    [sym_note_start] = ACTIONS(79),
    [sym_forced_action_start] = ACTIONS(82),
    [sym_forced_character_start] = ACTIONS(85),
    [sym_forced_transition_start] = ACTIONS(88),
    [sym_lyric_start] = ACTIONS(91),
    [sym_centered_start] = ACTIONS(94),
    [sym_page_break_marker] = ACTIONS(97),
    [sym_synopsis_start] = ACTIONS(100),
    [sym_boneyard_start] = ACTIONS(103),
  },
  [3] = {
    [sym__element] = STATE(5),
    [sym_section_block] = STATE(5),
    [sym_scene_block] = STATE(5),
    [sym_scene_heading] = STATE(11),
    [sym_character] = STATE(63),
    [sym_dialogue_block] = STATE(5),
    [sym_action] = STATE(5),
    [sym_transition] = STATE(5),
    [sym_section_heading] = STATE(6),
    [sym_note] = STATE(5),
    [sym_boneyard] = STATE(5),
    [sym_page_break] = STATE(5),
    [sym_synopsis] = STATE(5),
    [sym_lyric] = STATE(5),
    [sym_centered] = STATE(5),
    [sym__inline_content] = STATE(46),
    [sym_bold_italic] = STATE(46),
    [sym_bold] = STATE(46),
    [sym_italic] = STATE(46),
    [sym_underline] = STATE(46),
    [aux_sym_document_repeat1] = STATE(5),
    [aux_sym_dialogue_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(106),
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
  [4] = {
    [sym__element] = STATE(2),
    [sym_section_block] = STATE(2),
    [sym_scene_block] = STATE(2),
    [sym_scene_heading] = STATE(11),
    [sym_character] = STATE(63),
    [sym_dialogue_block] = STATE(2),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section_heading] = STATE(6),
    [sym_note] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym_page_break] = STATE(2),
    [sym_synopsis] = STATE(2),
    [sym_lyric] = STATE(2),
    [sym_centered] = STATE(2),
    [sym__inline_content] = STATE(46),
    [sym_bold_italic] = STATE(46),
    [sym_bold] = STATE(46),
    [sym_italic] = STATE(46),
    [sym_underline] = STATE(46),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_dialogue_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(106),
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
    [sym__element] = STATE(2),
    [sym_section_block] = STATE(2),
    [sym_scene_block] = STATE(2),
    [sym_scene_heading] = STATE(11),
    [sym_character] = STATE(63),
    [sym_dialogue_block] = STATE(2),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section_heading] = STATE(6),
    [sym_note] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym_page_break] = STATE(2),
    [sym_synopsis] = STATE(2),
    [sym_lyric] = STATE(2),
    [sym_centered] = STATE(2),
    [sym__inline_content] = STATE(46),
    [sym_bold_italic] = STATE(46),
    [sym_bold] = STATE(46),
    [sym_italic] = STATE(46),
    [sym_underline] = STATE(46),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_dialogue_repeat1] = STATE(46),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      aux_sym_character_token1,
    ACTIONS(13), 1,
      aux_sym_transition_token1,
    ACTIONS(15), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(17), 1,
      anon_sym_STAR_STAR,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym__,
    ACTIONS(25), 1,
      sym_scene_start,
    ACTIONS(29), 1,
      sym_note_start,
    ACTIONS(31), 1,
      sym_forced_action_start,
    ACTIONS(33), 1,
      sym_forced_character_start,
    ACTIONS(35), 1,
      sym_forced_transition_start,
    ACTIONS(37), 1,
      sym_lyric_start,
    ACTIONS(39), 1,
      sym_centered_start,
    ACTIONS(41), 1,
      sym_page_break_marker,
    ACTIONS(43), 1,
      sym_synopsis_start,
    ACTIONS(45), 1,
      sym_boneyard_start,
    STATE(11), 1,
      sym_scene_heading,
    STATE(63), 1,
      sym_character,
    ACTIONS(23), 2,
      sym_uppercase_text,
      sym_text,
    ACTIONS(110), 2,
      sym_section_start,
      ts_builtin_sym_end,
    STATE(46), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
    STATE(7), 11,
      sym_scene_block,
      sym_dialogue_block,
      sym_action,
      sym_transition,
      sym_note,
      sym_boneyard,
      sym_page_break,
      sym_synopsis,
      sym_lyric,
      sym_centered,
      aux_sym_section_block_repeat1,
  [87] = 23,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      aux_sym_character_token1,
    ACTIONS(13), 1,
      aux_sym_transition_token1,
    ACTIONS(15), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(17), 1,
      anon_sym_STAR_STAR,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym__,
    ACTIONS(25), 1,
      sym_scene_start,
    ACTIONS(29), 1,
      sym_note_start,
    ACTIONS(31), 1,
      sym_forced_action_start,
    ACTIONS(33), 1,
      sym_forced_character_start,
    ACTIONS(35), 1,
      sym_forced_transition_start,
    ACTIONS(37), 1,
      sym_lyric_start,
    ACTIONS(39), 1,
      sym_centered_start,
    ACTIONS(41), 1,
      sym_page_break_marker,
    ACTIONS(43), 1,
      sym_synopsis_start,
    ACTIONS(45), 1,
      sym_boneyard_start,
    STATE(11), 1,
      sym_scene_heading,
    STATE(63), 1,
      sym_character,
    ACTIONS(23), 2,
      sym_uppercase_text,
      sym_text,
    ACTIONS(112), 2,
      sym_section_start,
      ts_builtin_sym_end,
    STATE(46), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
    STATE(8), 11,
      sym_scene_block,
      sym_dialogue_block,
      sym_action,
      sym_transition,
      sym_note,
      sym_boneyard,
      sym_page_break,
      sym_synopsis,
      sym_lyric,
      sym_centered,
      aux_sym_section_block_repeat1,
  [174] = 23,
    ACTIONS(116), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      aux_sym_character_token1,
    ACTIONS(122), 1,
      aux_sym_transition_token1,
    ACTIONS(125), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(128), 1,
      anon_sym_STAR_STAR,
    ACTIONS(131), 1,
      anon_sym_STAR,
    ACTIONS(134), 1,
      anon_sym__,
    ACTIONS(140), 1,
      sym_scene_start,
    ACTIONS(143), 1,
      sym_note_start,
    ACTIONS(146), 1,
      sym_forced_action_start,
    ACTIONS(149), 1,
      sym_forced_character_start,
    ACTIONS(152), 1,
      sym_forced_transition_start,
    ACTIONS(155), 1,
      sym_lyric_start,
    ACTIONS(158), 1,
      sym_centered_start,
    ACTIONS(161), 1,
      sym_page_break_marker,
    ACTIONS(164), 1,
      sym_synopsis_start,
    ACTIONS(167), 1,
      sym_boneyard_start,
    STATE(11), 1,
      sym_scene_heading,
    STATE(63), 1,
      sym_character,
    ACTIONS(114), 2,
      sym_section_start,
      ts_builtin_sym_end,
    ACTIONS(137), 2,
      sym_uppercase_text,
      sym_text,
    STATE(46), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
    STATE(8), 11,
      sym_scene_block,
      sym_dialogue_block,
      sym_action,
      sym_transition,
      sym_note,
      sym_boneyard,
      sym_page_break,
      sym_synopsis,
      sym_lyric,
      sym_centered,
      aux_sym_section_block_repeat1,
  [261] = 20,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(174), 1,
      aux_sym_character_token1,
    ACTIONS(177), 1,
      aux_sym_transition_token1,
    ACTIONS(180), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(183), 1,
      anon_sym_STAR_STAR,
    ACTIONS(186), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym__,
    ACTIONS(195), 1,
      sym_note_start,
    ACTIONS(198), 1,
      sym_forced_action_start,
    ACTIONS(201), 1,
      sym_forced_character_start,
    ACTIONS(204), 1,
      sym_forced_transition_start,
    ACTIONS(207), 1,
      sym_lyric_start,
    ACTIONS(210), 1,
      sym_centered_start,
    ACTIONS(213), 1,
      sym_synopsis_start,
    ACTIONS(216), 1,
      sym_boneyard_start,
    STATE(63), 1,
      sym_character,
    ACTIONS(192), 2,
      sym_uppercase_text,
      sym_text,
    ACTIONS(170), 4,
      sym_scene_start,
      sym_section_start,
      sym_page_break_marker,
      ts_builtin_sym_end,
    STATE(46), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
    STATE(9), 10,
      sym__scene_content,
      sym_dialogue_block,
      sym_action,
      sym_transition,
      sym_note,
      sym_boneyard,
      sym_synopsis,
      sym_lyric,
      sym_centered,
      aux_sym_scene_block_repeat1,
  [340] = 20,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(223), 1,
      aux_sym_character_token1,
    ACTIONS(226), 1,
      aux_sym_transition_token1,
    ACTIONS(229), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(232), 1,
      anon_sym_STAR_STAR,
    ACTIONS(235), 1,
      anon_sym_STAR,
    ACTIONS(238), 1,
      anon_sym__,
    ACTIONS(244), 1,
      sym_note_start,
    ACTIONS(247), 1,
      sym_forced_action_start,
    ACTIONS(250), 1,
      sym_forced_character_start,
    ACTIONS(253), 1,
      sym_forced_transition_start,
    ACTIONS(256), 1,
      sym_lyric_start,
    ACTIONS(259), 1,
      sym_centered_start,
    ACTIONS(262), 1,
      sym_synopsis_start,
    ACTIONS(265), 1,
      sym_boneyard_start,
    STATE(63), 1,
      sym_character,
    ACTIONS(241), 2,
      sym_uppercase_text,
      sym_text,
    ACTIONS(219), 4,
      sym_scene_start,
      sym_section_start,
      sym_page_break_marker,
      ts_builtin_sym_end,
    STATE(46), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
    STATE(9), 10,
      sym__scene_content,
      sym_dialogue_block,
      sym_action,
      sym_transition,
      sym_note,
      sym_boneyard,
      sym_synopsis,
      sym_lyric,
      sym_centered,
      aux_sym_scene_block_repeat1,
  [419] = 20,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      aux_sym_character_token1,
    ACTIONS(275), 1,
      aux_sym_transition_token1,
    ACTIONS(278), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(281), 1,
      anon_sym_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_STAR,
    ACTIONS(287), 1,
      anon_sym__,
    ACTIONS(293), 1,
      sym_note_start,
    ACTIONS(296), 1,
      sym_forced_action_start,
    ACTIONS(299), 1,
      sym_forced_character_start,
    ACTIONS(302), 1,
      sym_forced_transition_start,
    ACTIONS(305), 1,
      sym_lyric_start,
    ACTIONS(308), 1,
      sym_centered_start,
    ACTIONS(311), 1,
      sym_synopsis_start,
    ACTIONS(314), 1,
      sym_boneyard_start,
    STATE(63), 1,
      sym_character,
    ACTIONS(290), 2,
      sym_uppercase_text,
      sym_text,
    ACTIONS(268), 4,
      sym_scene_start,
      sym_section_start,
      sym_page_break_marker,
      ts_builtin_sym_end,
    STATE(46), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
    STATE(10), 10,
      sym__scene_content,
      sym_dialogue_block,
      sym_action,
      sym_transition,
      sym_note,
      sym_boneyard,
      sym_synopsis,
      sym_lyric,
      sym_centered,
      aux_sym_scene_block_repeat1,
  [498] = 4,
    ACTIONS(321), 1,
      sym_title_continuation,
    STATE(15), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(319), 11,
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
    ACTIONS(317), 12,
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
  [532] = 4,
    ACTIONS(321), 1,
      sym_title_continuation,
    STATE(14), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(319), 11,
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
    ACTIONS(317), 12,
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
  [566] = 4,
    ACTIONS(321), 1,
      sym_title_continuation,
    STATE(15), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(325), 11,
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
    ACTIONS(323), 12,
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
  [600] = 4,
    ACTIONS(331), 1,
      sym_title_continuation,
    STATE(15), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(329), 11,
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
    ACTIONS(327), 12,
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
  [634] = 5,
    ACTIONS(336), 1,
      sym_title_key,
    ACTIONS(339), 1,
      sym_title_key_with_space,
    STATE(16), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(342), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(334), 12,
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
  [670] = 5,
    ACTIONS(5), 1,
      sym_title_key,
    ACTIONS(7), 1,
      sym_title_key_with_space,
    STATE(16), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(346), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(344), 12,
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
  [706] = 2,
    ACTIONS(329), 11,
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
    ACTIONS(327), 13,
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
  [735] = 4,
    ACTIONS(352), 1,
      sym_dialogue_line_start,
    STATE(20), 1,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(350), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(348), 12,
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
  [767] = 4,
    ACTIONS(358), 1,
      sym_dialogue_line_start,
    STATE(20), 1,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(356), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(354), 12,
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
  [799] = 2,
    ACTIONS(363), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(361), 13,
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
  [826] = 2,
    ACTIONS(356), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(354), 13,
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
  [853] = 2,
    ACTIONS(367), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(365), 13,
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
  [880] = 2,
    ACTIONS(371), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(369), 12,
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
  [906] = 2,
    ACTIONS(375), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(373), 12,
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
  [932] = 2,
    ACTIONS(379), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(377), 12,
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
  [958] = 2,
    ACTIONS(383), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(381), 12,
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
  [984] = 2,
    ACTIONS(387), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(385), 12,
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
  [1010] = 2,
    ACTIONS(391), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(389), 12,
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
  [1036] = 2,
    ACTIONS(395), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(393), 12,
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
  [1062] = 2,
    ACTIONS(399), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(397), 12,
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
  [1088] = 2,
    ACTIONS(403), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(401), 12,
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
  [1114] = 2,
    ACTIONS(407), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(405), 12,
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
  [1140] = 2,
    ACTIONS(411), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(409), 12,
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
  [1166] = 2,
    ACTIONS(415), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(413), 12,
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
  [1192] = 2,
    ACTIONS(419), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(417), 12,
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
  [1218] = 2,
    ACTIONS(423), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(421), 12,
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
  [1244] = 2,
    ACTIONS(427), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(425), 12,
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
  [1270] = 2,
    ACTIONS(431), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(429), 12,
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
  [1296] = 2,
    ACTIONS(435), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(433), 12,
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
  [1322] = 2,
    ACTIONS(439), 9,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
    ACTIONS(437), 12,
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
  [1348] = 9,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(447), 1,
      anon_sym_STAR,
    ACTIONS(449), 1,
      anon_sym__,
    ACTIONS(451), 1,
      sym_uppercase_text,
    ACTIONS(453), 1,
      sym_text,
    STATE(22), 2,
      sym_dialogue,
      sym_parenthetical,
    STATE(43), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
  [1382] = 7,
    ACTIONS(443), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(445), 1,
      anon_sym_STAR_STAR,
    ACTIONS(447), 1,
      anon_sym_STAR,
    ACTIONS(449), 1,
      anon_sym__,
    ACTIONS(455), 1,
      anon_sym_LF2,
    ACTIONS(457), 2,
      sym_uppercase_text,
      sym_text,
    STATE(45), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
  [1410] = 7,
    ACTIONS(459), 1,
      anon_sym_LF,
    ACTIONS(461), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(464), 1,
      anon_sym_STAR_STAR,
    ACTIONS(467), 1,
      anon_sym_STAR,
    ACTIONS(470), 1,
      anon_sym__,
    ACTIONS(473), 2,
      sym_uppercase_text,
      sym_text,
    STATE(44), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
  [1438] = 7,
    ACTIONS(476), 1,
      anon_sym_LF2,
    ACTIONS(478), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(481), 1,
      anon_sym_STAR_STAR,
    ACTIONS(484), 1,
      anon_sym_STAR,
    ACTIONS(487), 1,
      anon_sym__,
    ACTIONS(490), 2,
      sym_uppercase_text,
      sym_text,
    STATE(45), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
  [1466] = 7,
    ACTIONS(15), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(17), 1,
      anon_sym_STAR_STAR,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      anon_sym__,
    ACTIONS(493), 1,
      anon_sym_LF,
    ACTIONS(495), 2,
      sym_uppercase_text,
      sym_text,
    STATE(44), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
  [1494] = 1,
    ACTIONS(497), 7,
      anon_sym_LF,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1504] = 1,
    ACTIONS(499), 7,
      anon_sym_LF,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1514] = 1,
    ACTIONS(501), 7,
      anon_sym_LF,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1524] = 1,
    ACTIONS(503), 7,
      anon_sym_LF,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1534] = 2,
    ACTIONS(505), 1,
      anon_sym_LF2,
    ACTIONS(497), 6,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1546] = 2,
    ACTIONS(507), 1,
      anon_sym_LF2,
    ACTIONS(499), 6,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1558] = 2,
    ACTIONS(509), 1,
      anon_sym_LF2,
    ACTIONS(501), 6,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1570] = 2,
    ACTIONS(511), 1,
      anon_sym_LF2,
    ACTIONS(503), 6,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1582] = 6,
    ACTIONS(513), 1,
      anon_sym_LF,
    ACTIONS(515), 1,
      anon_sym_SPACE,
    ACTIONS(517), 1,
      anon_sym_DASH,
    ACTIONS(519), 1,
      sym_scene_location,
    ACTIONS(521), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym_scene_number,
  [1601] = 5,
    ACTIONS(521), 1,
      anon_sym_POUND,
    ACTIONS(523), 1,
      anon_sym_LF,
    ACTIONS(525), 1,
      anon_sym_DASH,
    ACTIONS(527), 1,
      sym_scene_location,
    STATE(68), 1,
      sym_scene_number,
  [1617] = 4,
    ACTIONS(521), 1,
      anon_sym_POUND,
    ACTIONS(525), 1,
      anon_sym_DASH,
    ACTIONS(529), 1,
      anon_sym_LF,
    STATE(68), 1,
      sym_scene_number,
  [1630] = 4,
    ACTIONS(521), 1,
      anon_sym_POUND,
    ACTIONS(531), 1,
      anon_sym_LF,
    ACTIONS(533), 1,
      anon_sym_DASH,
    STATE(94), 1,
      sym_scene_number,
  [1643] = 3,
    ACTIONS(521), 1,
      anon_sym_POUND,
    ACTIONS(531), 1,
      anon_sym_LF,
    STATE(94), 1,
      sym_scene_number,
  [1653] = 3,
    ACTIONS(521), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      anon_sym_LF,
    STATE(111), 1,
      sym_scene_number,
  [1663] = 3,
    ACTIONS(521), 1,
      anon_sym_POUND,
    ACTIONS(537), 1,
      anon_sym_LF,
    STATE(107), 1,
      sym_scene_number,
  [1673] = 2,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 1,
      anon_sym_SPACE,
  [1680] = 2,
    ACTIONS(352), 1,
      sym_dialogue_line_start,
    STATE(19), 1,
      aux_sym_dialogue_block_repeat1,
  [1687] = 2,
    ACTIONS(321), 1,
      sym_title_continuation,
    STATE(12), 1,
      aux_sym_title_page_field_repeat1,
  [1694] = 2,
    ACTIONS(543), 1,
      anon_sym_LF,
    ACTIONS(545), 1,
      aux_sym_character_token3,
  [1701] = 1,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
  [1705] = 1,
    ACTIONS(549), 1,
      aux_sym_bold_italic_token1,
  [1709] = 1,
    ACTIONS(531), 1,
      anon_sym_LF,
  [1713] = 1,
    ACTIONS(551), 1,
      anon_sym_POUND,
  [1717] = 1,
    ACTIONS(553), 1,
      anon_sym_LF,
  [1721] = 1,
    ACTIONS(555), 1,
      anon_sym_LF,
  [1725] = 1,
    ACTIONS(557), 1,
      anon_sym_LF,
  [1729] = 1,
    ACTIONS(559), 1,
      sym_dialogue_line_start,
  [1733] = 1,
    ACTIONS(561), 1,
      anon_sym_LF,
  [1737] = 1,
    ACTIONS(563), 1,
      anon_sym_STAR_SLASH,
  [1741] = 1,
    ACTIONS(565), 1,
      anon_sym_LF,
  [1745] = 1,
    ACTIONS(567), 1,
      anon_sym_LF,
  [1749] = 1,
    ACTIONS(569), 1,
      anon_sym_LF,
  [1753] = 1,
    ACTIONS(571), 1,
      anon_sym_LF,
  [1757] = 1,
    ACTIONS(573), 1,
      sym_centered_end,
  [1761] = 1,
    ACTIONS(575), 1,
      anon_sym_LF,
  [1765] = 1,
    ACTIONS(577), 1,
      anon_sym_LF,
  [1769] = 1,
    ACTIONS(579), 1,
      anon_sym_LF,
  [1773] = 1,
    ACTIONS(581), 1,
      anon_sym_RBRACK_RBRACK,
  [1777] = 1,
    ACTIONS(583), 1,
      sym_description,
  [1781] = 1,
    ACTIONS(585), 1,
      aux_sym_parenthetical_token1,
  [1785] = 1,
    ACTIONS(529), 1,
      anon_sym_LF,
  [1789] = 1,
    ACTIONS(587), 1,
      aux_sym_scene_number_token1,
  [1793] = 1,
    ACTIONS(589), 1,
      sym_scene_time,
  [1797] = 1,
    ACTIONS(591), 1,
      anon_sym_STAR,
  [1801] = 1,
    ACTIONS(593), 1,
      anon_sym_STAR_STAR_STAR,
  [1805] = 1,
    ACTIONS(595), 1,
      anon_sym_STAR_STAR,
  [1809] = 1,
    ACTIONS(597), 1,
      sym_scene_time,
  [1813] = 1,
    ACTIONS(537), 1,
      anon_sym_LF,
  [1817] = 1,
    ACTIONS(599), 1,
      anon_sym_LF,
  [1821] = 1,
    ACTIONS(601), 1,
      aux_sym_underline_token1,
  [1825] = 1,
    ACTIONS(603), 1,
      sym_scene_time,
  [1829] = 1,
    ACTIONS(605), 1,
      sym_dialogue_line_start,
  [1833] = 1,
    ACTIONS(607), 1,
      aux_sym_bold_italic_token1,
  [1837] = 1,
    ACTIONS(609), 1,
      aux_sym_bold_italic_token1,
  [1841] = 1,
    ACTIONS(611), 1,
      anon_sym_LF,
  [1845] = 1,
    ACTIONS(613), 1,
      sym_dialogue_line_start,
  [1849] = 1,
    ACTIONS(615), 1,
      sym_description,
  [1853] = 1,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
  [1857] = 1,
    ACTIONS(619), 1,
      anon_sym_LF,
  [1861] = 1,
    ACTIONS(621), 1,
      sym_boneyard_content,
  [1865] = 1,
    ACTIONS(535), 1,
      anon_sym_LF,
  [1869] = 1,
    ACTIONS(623), 1,
      anon_sym__,
  [1873] = 1,
    ACTIONS(625), 1,
      anon_sym_LF,
  [1877] = 1,
    ACTIONS(627), 1,
      aux_sym_character_token2,
  [1881] = 1,
    ACTIONS(629), 1,
      anon_sym_LF,
  [1885] = 1,
    ACTIONS(631), 1,
      anon_sym_LF,
  [1889] = 1,
    ACTIONS(633), 1,
      sym_centered_text,
  [1893] = 1,
    ACTIONS(635), 1,
      aux_sym_character_token2,
  [1897] = 1,
    ACTIONS(637), 1,
      aux_sym_character_token2,
  [1901] = 1,
    ACTIONS(639), 1,
      aux_sym_character_token2,
  [1905] = 1,
    ACTIONS(641), 1,
      aux_sym_character_token2,
  [1909] = 1,
    ACTIONS(643), 1,
      sym_note_content,
  [1913] = 1,
    ACTIONS(645), 1,
      anon_sym_STAR_STAR_STAR,
  [1917] = 1,
    ACTIONS(647), 1,
      anon_sym_STAR_STAR,
  [1921] = 1,
    ACTIONS(649), 1,
      anon_sym_STAR,
  [1925] = 1,
    ACTIONS(651), 1,
      anon_sym__,
  [1929] = 1,
    ACTIONS(653), 1,
      aux_sym_bold_italic_token1,
  [1933] = 1,
    ACTIONS(655), 1,
      aux_sym_bold_italic_token1,
  [1937] = 1,
    ACTIONS(657), 1,
      aux_sym_bold_italic_token1,
  [1941] = 1,
    ACTIONS(659), 1,
      aux_sym_underline_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 87,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 261,
  [SMALL_STATE(10)] = 340,
  [SMALL_STATE(11)] = 419,
  [SMALL_STATE(12)] = 498,
  [SMALL_STATE(13)] = 532,
  [SMALL_STATE(14)] = 566,
  [SMALL_STATE(15)] = 600,
  [SMALL_STATE(16)] = 634,
  [SMALL_STATE(17)] = 670,
  [SMALL_STATE(18)] = 706,
  [SMALL_STATE(19)] = 735,
  [SMALL_STATE(20)] = 767,
  [SMALL_STATE(21)] = 799,
  [SMALL_STATE(22)] = 826,
  [SMALL_STATE(23)] = 853,
  [SMALL_STATE(24)] = 880,
  [SMALL_STATE(25)] = 906,
  [SMALL_STATE(26)] = 932,
  [SMALL_STATE(27)] = 958,
  [SMALL_STATE(28)] = 984,
  [SMALL_STATE(29)] = 1010,
  [SMALL_STATE(30)] = 1036,
  [SMALL_STATE(31)] = 1062,
  [SMALL_STATE(32)] = 1088,
  [SMALL_STATE(33)] = 1114,
  [SMALL_STATE(34)] = 1140,
  [SMALL_STATE(35)] = 1166,
  [SMALL_STATE(36)] = 1192,
  [SMALL_STATE(37)] = 1218,
  [SMALL_STATE(38)] = 1244,
  [SMALL_STATE(39)] = 1270,
  [SMALL_STATE(40)] = 1296,
  [SMALL_STATE(41)] = 1322,
  [SMALL_STATE(42)] = 1348,
  [SMALL_STATE(43)] = 1382,
  [SMALL_STATE(44)] = 1410,
  [SMALL_STATE(45)] = 1438,
  [SMALL_STATE(46)] = 1466,
  [SMALL_STATE(47)] = 1494,
  [SMALL_STATE(48)] = 1504,
  [SMALL_STATE(49)] = 1514,
  [SMALL_STATE(50)] = 1524,
  [SMALL_STATE(51)] = 1534,
  [SMALL_STATE(52)] = 1546,
  [SMALL_STATE(53)] = 1558,
  [SMALL_STATE(54)] = 1570,
  [SMALL_STATE(55)] = 1582,
  [SMALL_STATE(56)] = 1601,
  [SMALL_STATE(57)] = 1617,
  [SMALL_STATE(58)] = 1630,
  [SMALL_STATE(59)] = 1643,
  [SMALL_STATE(60)] = 1653,
  [SMALL_STATE(61)] = 1663,
  [SMALL_STATE(62)] = 1673,
  [SMALL_STATE(63)] = 1680,
  [SMALL_STATE(64)] = 1687,
  [SMALL_STATE(65)] = 1694,
  [SMALL_STATE(66)] = 1701,
  [SMALL_STATE(67)] = 1705,
  [SMALL_STATE(68)] = 1709,
  [SMALL_STATE(69)] = 1713,
  [SMALL_STATE(70)] = 1717,
  [SMALL_STATE(71)] = 1721,
  [SMALL_STATE(72)] = 1725,
  [SMALL_STATE(73)] = 1729,
  [SMALL_STATE(74)] = 1733,
  [SMALL_STATE(75)] = 1737,
  [SMALL_STATE(76)] = 1741,
  [SMALL_STATE(77)] = 1745,
  [SMALL_STATE(78)] = 1749,
  [SMALL_STATE(79)] = 1753,
  [SMALL_STATE(80)] = 1757,
  [SMALL_STATE(81)] = 1761,
  [SMALL_STATE(82)] = 1765,
  [SMALL_STATE(83)] = 1769,
  [SMALL_STATE(84)] = 1773,
  [SMALL_STATE(85)] = 1777,
  [SMALL_STATE(86)] = 1781,
  [SMALL_STATE(87)] = 1785,
  [SMALL_STATE(88)] = 1789,
  [SMALL_STATE(89)] = 1793,
  [SMALL_STATE(90)] = 1797,
  [SMALL_STATE(91)] = 1801,
  [SMALL_STATE(92)] = 1805,
  [SMALL_STATE(93)] = 1809,
  [SMALL_STATE(94)] = 1813,
  [SMALL_STATE(95)] = 1817,
  [SMALL_STATE(96)] = 1821,
  [SMALL_STATE(97)] = 1825,
  [SMALL_STATE(98)] = 1829,
  [SMALL_STATE(99)] = 1833,
  [SMALL_STATE(100)] = 1837,
  [SMALL_STATE(101)] = 1841,
  [SMALL_STATE(102)] = 1845,
  [SMALL_STATE(103)] = 1849,
  [SMALL_STATE(104)] = 1853,
  [SMALL_STATE(105)] = 1857,
  [SMALL_STATE(106)] = 1861,
  [SMALL_STATE(107)] = 1865,
  [SMALL_STATE(108)] = 1869,
  [SMALL_STATE(109)] = 1873,
  [SMALL_STATE(110)] = 1877,
  [SMALL_STATE(111)] = 1881,
  [SMALL_STATE(112)] = 1885,
  [SMALL_STATE(113)] = 1889,
  [SMALL_STATE(114)] = 1893,
  [SMALL_STATE(115)] = 1897,
  [SMALL_STATE(116)] = 1901,
  [SMALL_STATE(117)] = 1905,
  [SMALL_STATE(118)] = 1909,
  [SMALL_STATE(119)] = 1913,
  [SMALL_STATE(120)] = 1917,
  [SMALL_STATE(121)] = 1921,
  [SMALL_STATE(122)] = 1925,
  [SMALL_STATE(123)] = 1929,
  [SMALL_STATE(124)] = 1933,
  [SMALL_STATE(125)] = 1937,
  [SMALL_STATE(126)] = 1941,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_block, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_block, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(102),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(101),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(100),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(99),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(67),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(96),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(46),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(118),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(117),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(116),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(115),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(114),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(113),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(110),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(106),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(102),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(101),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(100),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(99),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(67),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(96),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(46),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(118),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(117),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(116),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(115),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(114),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(113),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(110),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(106),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 2, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 2, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 2, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 2, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 7, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 7, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 4, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 4, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 2, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_centered, 4, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_centered, 4, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 4, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 4, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_break, 2, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_break, 2, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synopsis, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synopsis, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 6, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 6, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 4, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [461] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold_italic, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_underline, 3, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold_italic, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic, 3, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_underline, 3, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [547] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 3, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_number, 3, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 4, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 1, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
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
