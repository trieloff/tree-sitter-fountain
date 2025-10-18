#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
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
  sym_line = 25,
  sym_description = 26,
  sym_scene_start = 27,
  sym_section_start = 28,
  sym_note_start = 29,
  sym_forced_action_start = 30,
  sym_forced_character_start = 31,
  sym_forced_transition_start = 32,
  sym_lyric_start = 33,
  sym_centered_start = 34,
  sym_page_break_marker = 35,
  sym_synopsis_start = 36,
  sym_boneyard_start = 37,
  sym_title_continuation = 38,
  sym_blank_line = 39,
  sym_dialogue_line_start = 40,
  sym_document = 41,
  sym_title_page = 42,
  sym__element = 43,
  sym_title_page_field = 44,
  sym_scene_heading = 45,
  sym_scene_number = 46,
  sym_character = 47,
  sym_dialogue_block = 48,
  sym_dialogue = 49,
  sym_parenthetical = 50,
  sym_action = 51,
  sym_transition = 52,
  sym_section_heading = 53,
  sym_note = 54,
  sym_boneyard = 55,
  sym_page_break = 56,
  sym_synopsis = 57,
  sym_lyric = 58,
  sym_centered = 59,
  aux_sym_document_repeat1 = 60,
  aux_sym_title_page_repeat1 = 61,
  aux_sym_title_page_field_repeat1 = 62,
  aux_sym_dialogue_block_repeat1 = 63,
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
  [sym_line] = "line",
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
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_title_page_repeat1] = "title_page_repeat1",
  [aux_sym_title_page_field_repeat1] = "title_page_field_repeat1",
  [aux_sym_dialogue_block_repeat1] = "dialogue_block_repeat1",
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
  [sym_line] = sym_line,
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
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_title_page_repeat1] = aux_sym_title_page_repeat1,
  [aux_sym_title_page_field_repeat1] = aux_sym_title_page_field_repeat1,
  [aux_sym_dialogue_block_repeat1] = aux_sym_dialogue_block_repeat1,
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
  [sym_line] = {
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
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        ' ', 18,
        '#', 51,
        '(', 58,
        ')', 61,
        '*', 23,
        '-', 44,
        '.', 45,
        '<', 71,
        ']', 25,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(27);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(27);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(27);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(27);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '.') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '-') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '-') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '^') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(10);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '-') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '(') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == '.') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(17);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        ' ', 18,
        '#', 51,
        '(', 58,
        ')', 61,
        '*', 23,
        '-', 44,
        '.', 45,
        '<', 71,
        ']', 25,
        '^', 56,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        ' ', 18,
        '#', 51,
        '(', 58,
        ')', 61,
        '*', 23,
        '-', 44,
        '.', 45,
        '<', 71,
        ']', 25,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == '^') ADVANCE(1);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(27);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(27);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(27);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == ']') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == '^') ADVANCE(1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(27);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 27:
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(27);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(28);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(87);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 29:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(60);
      END_STATE();
    case 30:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 31:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(68);
      END_STATE();
    case 33:
      if (eof) ADVANCE(35);
      if (lookahead == '\n') SKIP(33);
      if (lookahead == '.') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 34:
      if (eof) ADVANCE(35);
      if (lookahead == '\n') SKIP(34);
      if (lookahead == '.') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(38);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_title_key);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_title_key_with_space);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_scene_location);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == ' ') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_scene_location);
      if (lookahead == '\n') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_scene_location);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_scene_time);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_scene_time);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_scene_number_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_character_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_character_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_character_token3);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_note_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_note_content);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_boneyard_content);
      if (lookahead == '*') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_boneyard_content);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_centered_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_centered_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_centered_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '.') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '(') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(16);
      if (lookahead == '.') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == '^') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '^') ADVANCE(76);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(85);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_description);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 33, .external_lex_state = 2},
  [2] = {.lex_state = 34, .external_lex_state = 2},
  [3] = {.lex_state = 34, .external_lex_state = 2},
  [4] = {.lex_state = 34, .external_lex_state = 2},
  [5] = {.lex_state = 34, .external_lex_state = 2},
  [6] = {.lex_state = 33, .external_lex_state = 3},
  [7] = {.lex_state = 33, .external_lex_state = 3},
  [8] = {.lex_state = 33, .external_lex_state = 3},
  [9] = {.lex_state = 33, .external_lex_state = 3},
  [10] = {.lex_state = 33, .external_lex_state = 2},
  [11] = {.lex_state = 33, .external_lex_state = 2},
  [12] = {.lex_state = 33, .external_lex_state = 3},
  [13] = {.lex_state = 34, .external_lex_state = 4},
  [14] = {.lex_state = 34, .external_lex_state = 4},
  [15] = {.lex_state = 34, .external_lex_state = 4},
  [16] = {.lex_state = 34, .external_lex_state = 4},
  [17] = {.lex_state = 34, .external_lex_state = 4},
  [18] = {.lex_state = 34, .external_lex_state = 2},
  [19] = {.lex_state = 34, .external_lex_state = 2},
  [20] = {.lex_state = 34, .external_lex_state = 2},
  [21] = {.lex_state = 34, .external_lex_state = 2},
  [22] = {.lex_state = 34, .external_lex_state = 2},
  [23] = {.lex_state = 34, .external_lex_state = 2},
  [24] = {.lex_state = 34, .external_lex_state = 2},
  [25] = {.lex_state = 34, .external_lex_state = 2},
  [26] = {.lex_state = 34, .external_lex_state = 2},
  [27] = {.lex_state = 34, .external_lex_state = 2},
  [28] = {.lex_state = 34, .external_lex_state = 2},
  [29] = {.lex_state = 34, .external_lex_state = 2},
  [30] = {.lex_state = 34, .external_lex_state = 2},
  [31] = {.lex_state = 34, .external_lex_state = 2},
  [32] = {.lex_state = 34, .external_lex_state = 2},
  [33] = {.lex_state = 34, .external_lex_state = 2},
  [34] = {.lex_state = 34, .external_lex_state = 2},
  [35] = {.lex_state = 34, .external_lex_state = 2},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 0, .external_lex_state = 5},
  [46] = {.lex_state = 0, .external_lex_state = 6},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 67},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 0, .external_lex_state = 5},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 29},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 28},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 0, .external_lex_state = 5},
  [80] = {.lex_state = 30},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 31},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 0, .external_lex_state = 5},
  [94] = {.lex_state = 28},
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
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_centered_end] = ACTIONS(1),
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
    [sym_document] = STATE(87),
    [sym_title_page] = STATE(2),
    [sym__element] = STATE(4),
    [sym_title_page_field] = STATE(11),
    [sym_scene_heading] = STATE(4),
    [sym_character] = STATE(45),
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
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_title_page_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_title_key] = ACTIONS(5),
    [sym_title_key_with_space] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [aux_sym_character_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [sym_line] = ACTIONS(15),
    [sym_scene_start] = ACTIONS(17),
    [sym_section_start] = ACTIONS(19),
    [sym_note_start] = ACTIONS(21),
    [sym_forced_action_start] = ACTIONS(23),
    [sym_forced_character_start] = ACTIONS(25),
    [sym_forced_transition_start] = ACTIONS(27),
    [sym_lyric_start] = ACTIONS(29),
    [sym_centered_start] = ACTIONS(31),
    [sym_page_break_marker] = ACTIONS(33),
    [sym_synopsis_start] = ACTIONS(35),
    [sym_boneyard_start] = ACTIONS(37),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      aux_sym_character_token1,
    ACTIONS(13), 1,
      aux_sym_transition_token1,
    ACTIONS(15), 1,
      sym_line,
    ACTIONS(17), 1,
      sym_scene_start,
    ACTIONS(19), 1,
      sym_section_start,
    ACTIONS(21), 1,
      sym_note_start,
    ACTIONS(23), 1,
      sym_forced_action_start,
    ACTIONS(25), 1,
      sym_forced_character_start,
    ACTIONS(27), 1,
      sym_forced_transition_start,
    ACTIONS(29), 1,
      sym_lyric_start,
    ACTIONS(31), 1,
      sym_centered_start,
    ACTIONS(33), 1,
      sym_page_break_marker,
    ACTIONS(35), 1,
      sym_synopsis_start,
    ACTIONS(37), 1,
      sym_boneyard_start,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_character,
    STATE(3), 13,
      sym__element,
      sym_scene_heading,
      sym_dialogue_block,
      sym_action,
      sym_transition,
      sym_section_heading,
      sym_note,
      sym_boneyard,
      sym_page_break,
      sym_synopsis,
      sym_lyric,
      sym_centered,
      aux_sym_document_repeat1,
  [67] = 18,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      aux_sym_character_token1,
    ACTIONS(13), 1,
      aux_sym_transition_token1,
    ACTIONS(15), 1,
      sym_line,
    ACTIONS(17), 1,
      sym_scene_start,
    ACTIONS(19), 1,
      sym_section_start,
    ACTIONS(21), 1,
      sym_note_start,
    ACTIONS(23), 1,
      sym_forced_action_start,
    ACTIONS(25), 1,
      sym_forced_character_start,
    ACTIONS(27), 1,
      sym_forced_transition_start,
    ACTIONS(29), 1,
      sym_lyric_start,
    ACTIONS(31), 1,
      sym_centered_start,
    ACTIONS(33), 1,
      sym_page_break_marker,
    ACTIONS(35), 1,
      sym_synopsis_start,
    ACTIONS(37), 1,
      sym_boneyard_start,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_character,
    STATE(5), 13,
      sym__element,
      sym_scene_heading,
      sym_dialogue_block,
      sym_action,
      sym_transition,
      sym_section_heading,
      sym_note,
      sym_boneyard,
      sym_page_break,
      sym_synopsis,
      sym_lyric,
      sym_centered,
      aux_sym_document_repeat1,
  [134] = 18,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      aux_sym_character_token1,
    ACTIONS(13), 1,
      aux_sym_transition_token1,
    ACTIONS(15), 1,
      sym_line,
    ACTIONS(17), 1,
      sym_scene_start,
    ACTIONS(19), 1,
      sym_section_start,
    ACTIONS(21), 1,
      sym_note_start,
    ACTIONS(23), 1,
      sym_forced_action_start,
    ACTIONS(25), 1,
      sym_forced_character_start,
    ACTIONS(27), 1,
      sym_forced_transition_start,
    ACTIONS(29), 1,
      sym_lyric_start,
    ACTIONS(31), 1,
      sym_centered_start,
    ACTIONS(33), 1,
      sym_page_break_marker,
    ACTIONS(35), 1,
      sym_synopsis_start,
    ACTIONS(37), 1,
      sym_boneyard_start,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_character,
    STATE(5), 13,
      sym__element,
      sym_scene_heading,
      sym_dialogue_block,
      sym_action,
      sym_transition,
      sym_section_heading,
      sym_note,
      sym_boneyard,
      sym_page_break,
      sym_synopsis,
      sym_lyric,
      sym_centered,
      aux_sym_document_repeat1,
  [201] = 18,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(48), 1,
      aux_sym_character_token1,
    ACTIONS(51), 1,
      aux_sym_transition_token1,
    ACTIONS(54), 1,
      sym_line,
    ACTIONS(57), 1,
      sym_scene_start,
    ACTIONS(60), 1,
      sym_section_start,
    ACTIONS(63), 1,
      sym_note_start,
    ACTIONS(66), 1,
      sym_forced_action_start,
    ACTIONS(69), 1,
      sym_forced_character_start,
    ACTIONS(72), 1,
      sym_forced_transition_start,
    ACTIONS(75), 1,
      sym_lyric_start,
    ACTIONS(78), 1,
      sym_centered_start,
    ACTIONS(81), 1,
      sym_page_break_marker,
    ACTIONS(84), 1,
      sym_synopsis_start,
    ACTIONS(87), 1,
      sym_boneyard_start,
    STATE(45), 1,
      sym_character,
    STATE(5), 13,
      sym__element,
      sym_scene_heading,
      sym_dialogue_block,
      sym_action,
      sym_transition,
      sym_section_heading,
      sym_note,
      sym_boneyard,
      sym_page_break,
      sym_synopsis,
      sym_lyric,
      sym_centered,
      aux_sym_document_repeat1,
  [268] = 4,
    ACTIONS(94), 1,
      sym_title_continuation,
    STATE(7), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(92), 6,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(90), 12,
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
  [297] = 4,
    ACTIONS(100), 1,
      sym_title_continuation,
    STATE(7), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(98), 6,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(96), 12,
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
  [326] = 4,
    ACTIONS(94), 1,
      sym_title_continuation,
    STATE(6), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(105), 6,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(103), 12,
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
  [355] = 4,
    ACTIONS(94), 1,
      sym_title_continuation,
    STATE(7), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(105), 6,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(103), 12,
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
  [384] = 5,
    ACTIONS(109), 1,
      sym_title_key,
    ACTIONS(112), 1,
      sym_title_key_with_space,
    STATE(10), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(115), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(107), 12,
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
  [415] = 5,
    ACTIONS(5), 1,
      sym_title_key,
    ACTIONS(7), 1,
      sym_title_key_with_space,
    STATE(10), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(119), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(117), 12,
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
  [446] = 2,
    ACTIONS(98), 6,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(96), 13,
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
  [470] = 4,
    ACTIONS(125), 1,
      sym_dialogue_line_start,
    STATE(14), 1,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(123), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(121), 12,
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
  [497] = 4,
    ACTIONS(131), 1,
      sym_dialogue_line_start,
    STATE(14), 1,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(129), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(127), 12,
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
  [524] = 2,
    ACTIONS(136), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
      sym_dialogue_line_start,
      ts_builtin_sym_end,
  [546] = 2,
    ACTIONS(140), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(138), 13,
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
  [568] = 2,
    ACTIONS(129), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(127), 13,
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
  [590] = 2,
    ACTIONS(144), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(142), 12,
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
  [611] = 2,
    ACTIONS(148), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(146), 12,
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
  [632] = 2,
    ACTIONS(152), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(150), 12,
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
  [653] = 2,
    ACTIONS(156), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(154), 12,
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
  [674] = 2,
    ACTIONS(160), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(158), 12,
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
  [695] = 2,
    ACTIONS(164), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [716] = 2,
    ACTIONS(168), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [737] = 2,
    ACTIONS(172), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [758] = 2,
    ACTIONS(176), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [779] = 2,
    ACTIONS(180), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [800] = 2,
    ACTIONS(184), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [821] = 2,
    ACTIONS(188), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [842] = 2,
    ACTIONS(192), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [863] = 2,
    ACTIONS(196), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [884] = 2,
    ACTIONS(200), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [905] = 2,
    ACTIONS(204), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [926] = 2,
    ACTIONS(208), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [947] = 2,
    ACTIONS(212), 4,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [968] = 6,
    ACTIONS(214), 1,
      anon_sym_LF,
    ACTIONS(216), 1,
      anon_sym_SPACE,
    ACTIONS(218), 1,
      anon_sym_DASH,
    ACTIONS(220), 1,
      sym_scene_location,
    ACTIONS(222), 1,
      anon_sym_POUND,
    STATE(78), 1,
      sym_scene_number,
  [987] = 5,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(224), 1,
      anon_sym_LF,
    ACTIONS(226), 1,
      anon_sym_DASH,
    ACTIONS(228), 1,
      sym_scene_location,
    STATE(53), 1,
      sym_scene_number,
  [1003] = 4,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_DASH,
    ACTIONS(230), 1,
      anon_sym_LF,
    STATE(53), 1,
      sym_scene_number,
  [1016] = 4,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(234), 1,
      anon_sym_DASH,
    STATE(75), 1,
      sym_scene_number,
  [1029] = 3,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    ACTIONS(238), 1,
      sym_line,
    STATE(17), 2,
      sym_dialogue,
      sym_parenthetical,
  [1040] = 3,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(240), 1,
      anon_sym_LF,
    STATE(88), 1,
      sym_scene_number,
  [1050] = 3,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(232), 1,
      anon_sym_LF,
    STATE(75), 1,
      sym_scene_number,
  [1060] = 3,
    ACTIONS(222), 1,
      anon_sym_POUND,
    ACTIONS(242), 1,
      anon_sym_LF,
    STATE(92), 1,
      sym_scene_number,
  [1070] = 2,
    ACTIONS(244), 1,
      anon_sym_LF,
    ACTIONS(246), 1,
      aux_sym_character_token3,
  [1077] = 2,
    ACTIONS(125), 1,
      sym_dialogue_line_start,
    STATE(13), 1,
      aux_sym_dialogue_block_repeat1,
  [1084] = 2,
    ACTIONS(94), 1,
      sym_title_continuation,
    STATE(9), 1,
      aux_sym_title_page_field_repeat1,
  [1091] = 2,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(250), 1,
      anon_sym_SPACE,
  [1098] = 1,
    ACTIONS(252), 1,
      anon_sym_LF,
  [1102] = 1,
    ACTIONS(254), 1,
      aux_sym_character_token2,
  [1106] = 1,
    ACTIONS(256), 1,
      anon_sym_STAR_SLASH,
  [1110] = 1,
    ACTIONS(258), 1,
      anon_sym_LF,
  [1114] = 1,
    ACTIONS(260), 1,
      sym_scene_time,
  [1118] = 1,
    ACTIONS(232), 1,
      anon_sym_LF,
  [1122] = 1,
    ACTIONS(262), 1,
      anon_sym_POUND,
  [1126] = 1,
    ACTIONS(264), 1,
      anon_sym_LF,
  [1130] = 1,
    ACTIONS(266), 1,
      sym_boneyard_content,
  [1134] = 1,
    ACTIONS(268), 1,
      anon_sym_LF,
  [1138] = 1,
    ACTIONS(270), 1,
      sym_dialogue_line_start,
  [1142] = 1,
    ACTIONS(272), 1,
      anon_sym_LF,
  [1146] = 1,
    ACTIONS(274), 1,
      sym_centered_end,
  [1150] = 1,
    ACTIONS(276), 1,
      anon_sym_LF,
  [1154] = 1,
    ACTIONS(278), 1,
      anon_sym_LF,
  [1158] = 1,
    ACTIONS(280), 1,
      anon_sym_LF,
  [1162] = 1,
    ACTIONS(282), 1,
      anon_sym_LF,
  [1166] = 1,
    ACTIONS(284), 1,
      anon_sym_LF,
  [1170] = 1,
    ACTIONS(286), 1,
      aux_sym_character_token2,
  [1174] = 1,
    ACTIONS(288), 1,
      anon_sym_LF,
  [1178] = 1,
    ACTIONS(290), 1,
      aux_sym_parenthetical_token1,
  [1182] = 1,
    ACTIONS(292), 1,
      anon_sym_LF2,
  [1186] = 1,
    ACTIONS(294), 1,
      sym_centered_text,
  [1190] = 1,
    ACTIONS(296), 1,
      anon_sym_LF,
  [1194] = 1,
    ACTIONS(298), 1,
      anon_sym_LF,
  [1198] = 1,
    ACTIONS(300), 1,
      anon_sym_RBRACK_RBRACK,
  [1202] = 1,
    ACTIONS(302), 1,
      sym_scene_time,
  [1206] = 1,
    ACTIONS(240), 1,
      anon_sym_LF,
  [1210] = 1,
    ACTIONS(304), 1,
      anon_sym_LF,
  [1214] = 1,
    ACTIONS(306), 1,
      sym_description,
  [1218] = 1,
    ACTIONS(230), 1,
      anon_sym_LF,
  [1222] = 1,
    ACTIONS(308), 1,
      sym_dialogue_line_start,
  [1226] = 1,
    ACTIONS(310), 1,
      aux_sym_scene_number_token1,
  [1230] = 1,
    ACTIONS(312), 1,
      sym_scene_time,
  [1234] = 1,
    ACTIONS(314), 1,
      aux_sym_character_token2,
  [1238] = 1,
    ACTIONS(316), 1,
      aux_sym_character_token2,
  [1242] = 1,
    ACTIONS(318), 1,
      aux_sym_character_token2,
  [1246] = 1,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
  [1250] = 1,
    ACTIONS(322), 1,
      sym_note_content,
  [1254] = 1,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
  [1258] = 1,
    ACTIONS(242), 1,
      anon_sym_LF,
  [1262] = 1,
    ACTIONS(326), 1,
      anon_sym_LF,
  [1266] = 1,
    ACTIONS(328), 1,
      anon_sym_LF,
  [1270] = 1,
    ACTIONS(330), 1,
      anon_sym_LF,
  [1274] = 1,
    ACTIONS(332), 1,
      anon_sym_LF,
  [1278] = 1,
    ACTIONS(334), 1,
      sym_dialogue_line_start,
  [1282] = 1,
    ACTIONS(336), 1,
      sym_description,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 297,
  [SMALL_STATE(8)] = 326,
  [SMALL_STATE(9)] = 355,
  [SMALL_STATE(10)] = 384,
  [SMALL_STATE(11)] = 415,
  [SMALL_STATE(12)] = 446,
  [SMALL_STATE(13)] = 470,
  [SMALL_STATE(14)] = 497,
  [SMALL_STATE(15)] = 524,
  [SMALL_STATE(16)] = 546,
  [SMALL_STATE(17)] = 568,
  [SMALL_STATE(18)] = 590,
  [SMALL_STATE(19)] = 611,
  [SMALL_STATE(20)] = 632,
  [SMALL_STATE(21)] = 653,
  [SMALL_STATE(22)] = 674,
  [SMALL_STATE(23)] = 695,
  [SMALL_STATE(24)] = 716,
  [SMALL_STATE(25)] = 737,
  [SMALL_STATE(26)] = 758,
  [SMALL_STATE(27)] = 779,
  [SMALL_STATE(28)] = 800,
  [SMALL_STATE(29)] = 821,
  [SMALL_STATE(30)] = 842,
  [SMALL_STATE(31)] = 863,
  [SMALL_STATE(32)] = 884,
  [SMALL_STATE(33)] = 905,
  [SMALL_STATE(34)] = 926,
  [SMALL_STATE(35)] = 947,
  [SMALL_STATE(36)] = 968,
  [SMALL_STATE(37)] = 987,
  [SMALL_STATE(38)] = 1003,
  [SMALL_STATE(39)] = 1016,
  [SMALL_STATE(40)] = 1029,
  [SMALL_STATE(41)] = 1040,
  [SMALL_STATE(42)] = 1050,
  [SMALL_STATE(43)] = 1060,
  [SMALL_STATE(44)] = 1070,
  [SMALL_STATE(45)] = 1077,
  [SMALL_STATE(46)] = 1084,
  [SMALL_STATE(47)] = 1091,
  [SMALL_STATE(48)] = 1098,
  [SMALL_STATE(49)] = 1102,
  [SMALL_STATE(50)] = 1106,
  [SMALL_STATE(51)] = 1110,
  [SMALL_STATE(52)] = 1114,
  [SMALL_STATE(53)] = 1118,
  [SMALL_STATE(54)] = 1122,
  [SMALL_STATE(55)] = 1126,
  [SMALL_STATE(56)] = 1130,
  [SMALL_STATE(57)] = 1134,
  [SMALL_STATE(58)] = 1138,
  [SMALL_STATE(59)] = 1142,
  [SMALL_STATE(60)] = 1146,
  [SMALL_STATE(61)] = 1150,
  [SMALL_STATE(62)] = 1154,
  [SMALL_STATE(63)] = 1158,
  [SMALL_STATE(64)] = 1162,
  [SMALL_STATE(65)] = 1166,
  [SMALL_STATE(66)] = 1170,
  [SMALL_STATE(67)] = 1174,
  [SMALL_STATE(68)] = 1178,
  [SMALL_STATE(69)] = 1182,
  [SMALL_STATE(70)] = 1186,
  [SMALL_STATE(71)] = 1190,
  [SMALL_STATE(72)] = 1194,
  [SMALL_STATE(73)] = 1198,
  [SMALL_STATE(74)] = 1202,
  [SMALL_STATE(75)] = 1206,
  [SMALL_STATE(76)] = 1210,
  [SMALL_STATE(77)] = 1214,
  [SMALL_STATE(78)] = 1218,
  [SMALL_STATE(79)] = 1222,
  [SMALL_STATE(80)] = 1226,
  [SMALL_STATE(81)] = 1230,
  [SMALL_STATE(82)] = 1234,
  [SMALL_STATE(83)] = 1238,
  [SMALL_STATE(84)] = 1242,
  [SMALL_STATE(85)] = 1246,
  [SMALL_STATE(86)] = 1250,
  [SMALL_STATE(87)] = 1254,
  [SMALL_STATE(88)] = 1258,
  [SMALL_STATE(89)] = 1262,
  [SMALL_STATE(90)] = 1266,
  [SMALL_STATE(91)] = 1270,
  [SMALL_STATE(92)] = 1274,
  [SMALL_STATE(93)] = 1278,
  [SMALL_STATE(94)] = 1282,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_break, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_break, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 7, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 7, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 6, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 6, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 4, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_centered, 4, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_centered, 4, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synopsis, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synopsis, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_number, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 4, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [324] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
