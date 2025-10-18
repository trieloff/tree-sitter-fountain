#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_title_key = 2,
  sym_title_key_with_space = 3,
  anon_sym_SPACE = 4,
  anon_sym_DOT = 5,
  anon_sym_POUND = 6,
  aux_sym_scene_number_token1 = 7,
  aux_sym_character_token1 = 8,
  aux_sym_character_token2 = 9,
  aux_sym_character_token3 = 10,
  anon_sym_LF2 = 11,
  anon_sym_LPAREN = 12,
  aux_sym_parenthetical_token1 = 13,
  anon_sym_RPAREN = 14,
  aux_sym_transition_token1 = 15,
  anon_sym_RBRACK_RBRACK = 16,
  sym_note_content = 17,
  anon_sym_STAR_SLASH = 18,
  sym_boneyard_content = 19,
  sym_centered_text = 20,
  sym_centered_end = 21,
  sym_line = 22,
  sym_description = 23,
  sym_scene_start = 24,
  sym_section_start = 25,
  sym_note_start = 26,
  sym_forced_action_start = 27,
  sym_forced_character_start = 28,
  sym_forced_transition_start = 29,
  sym_lyric_start = 30,
  sym_centered_start = 31,
  sym_page_break_marker = 32,
  sym_synopsis_start = 33,
  sym_boneyard_start = 34,
  sym_title_continuation = 35,
  sym_blank_line = 36,
  sym_dialogue_line_start = 37,
  sym_document = 38,
  sym_title_page = 39,
  sym__element = 40,
  sym_title_page_field = 41,
  sym_scene_heading = 42,
  sym_scene_number = 43,
  sym_character = 44,
  sym_dialogue_block = 45,
  sym_dialogue = 46,
  sym_parenthetical = 47,
  sym_action = 48,
  sym_transition = 49,
  sym_section_heading = 50,
  sym_note = 51,
  sym_boneyard = 52,
  sym_page_break = 53,
  sym_synopsis = 54,
  sym_lyric = 55,
  sym_centered = 56,
  aux_sym_document_repeat1 = 57,
  aux_sym_title_page_repeat1 = 58,
  aux_sym_title_page_field_repeat1 = 59,
  aux_sym_dialogue_block_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_title_key] = "title_key",
  [sym_title_key_with_space] = "title_key_with_space",
  [anon_sym_SPACE] = " ",
  [anon_sym_DOT] = ".",
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
  [anon_sym_DOT] = anon_sym_DOT,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      ADVANCE_MAP(
        ' ', 15,
        '#', 42,
        '(', 49,
        ')', 52,
        '*', 21,
        '.', 41,
        '<', 62,
        ']', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(25);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == 'O') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(25);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(25);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(25);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '.') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '(') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '^') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(9);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '.') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(14);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        ' ', 15,
        '#', 42,
        '(', 49,
        ')', 52,
        '*', 21,
        '.', 41,
        '<', 62,
        ']', 23,
        '^', 47,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(19);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        ' ', 15,
        '#', 42,
        '(', 49,
        ')', 52,
        '*', 21,
        '.', 41,
        '<', 62,
        ']', 23,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == '^') ADVANCE(1);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(25);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(25);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(3);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(25);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(20);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(78);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == ']') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == '^') ADVANCE(1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(25);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 25:
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(25);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(26);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 27:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(51);
      END_STATE();
    case 28:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 29:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(59);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '.') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '\n') SKIP(32);
      if (lookahead == '.') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_title_key);
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_title_key_with_space);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(38);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(78);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(40);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(78);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_scene_number_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_character_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_character_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_character_token3);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LF2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_note_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_note_content);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_boneyard_content);
      if (lookahead == '*') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_boneyard_content);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_centered_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_centered_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_centered_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(76);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == 'O') ADVANCE(63);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(76);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(76);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(76);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(6);
      if (lookahead == '.') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '(') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '.') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead == '^') ADVANCE(67);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(76);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(76);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(76);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '^') ADVANCE(67);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(76);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(76);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_description);
      if (lookahead == '\t') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(38);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_description);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 31, .external_lex_state = 2},
  [2] = {.lex_state = 32, .external_lex_state = 2},
  [3] = {.lex_state = 32, .external_lex_state = 2},
  [4] = {.lex_state = 32, .external_lex_state = 2},
  [5] = {.lex_state = 32, .external_lex_state = 2},
  [6] = {.lex_state = 31, .external_lex_state = 3},
  [7] = {.lex_state = 31, .external_lex_state = 2},
  [8] = {.lex_state = 31, .external_lex_state = 3},
  [9] = {.lex_state = 31, .external_lex_state = 3},
  [10] = {.lex_state = 31, .external_lex_state = 2},
  [11] = {.lex_state = 31, .external_lex_state = 3},
  [12] = {.lex_state = 31, .external_lex_state = 3},
  [13] = {.lex_state = 32, .external_lex_state = 4},
  [14] = {.lex_state = 32, .external_lex_state = 4},
  [15] = {.lex_state = 32, .external_lex_state = 4},
  [16] = {.lex_state = 32, .external_lex_state = 4},
  [17] = {.lex_state = 32, .external_lex_state = 4},
  [18] = {.lex_state = 32, .external_lex_state = 2},
  [19] = {.lex_state = 32, .external_lex_state = 2},
  [20] = {.lex_state = 32, .external_lex_state = 2},
  [21] = {.lex_state = 32, .external_lex_state = 2},
  [22] = {.lex_state = 32, .external_lex_state = 2},
  [23] = {.lex_state = 32, .external_lex_state = 2},
  [24] = {.lex_state = 32, .external_lex_state = 2},
  [25] = {.lex_state = 32, .external_lex_state = 2},
  [26] = {.lex_state = 32, .external_lex_state = 2},
  [27] = {.lex_state = 32, .external_lex_state = 2},
  [28] = {.lex_state = 32, .external_lex_state = 2},
  [29] = {.lex_state = 32, .external_lex_state = 2},
  [30] = {.lex_state = 32, .external_lex_state = 2},
  [31] = {.lex_state = 32, .external_lex_state = 2},
  [32] = {.lex_state = 32, .external_lex_state = 2},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 0, .external_lex_state = 5},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 0, .external_lex_state = 6},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 0, .external_lex_state = 5},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0, .external_lex_state = 5},
  [70] = {.lex_state = 26},
  [71] = {.lex_state = 0, .external_lex_state = 5},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 58},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 10},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_title_key] = ACTIONS(1),
    [sym_title_key_with_space] = ACTIONS(1),
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
    [sym_document] = STATE(65),
    [sym_title_page] = STATE(5),
    [sym__element] = STATE(2),
    [sym_title_page_field] = STATE(10),
    [sym_scene_heading] = STATE(2),
    [sym_character] = STATE(38),
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
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_title_page_repeat1] = STATE(10),
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
    STATE(38), 1,
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
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_DOT,
    ACTIONS(46), 1,
      aux_sym_character_token1,
    ACTIONS(49), 1,
      aux_sym_transition_token1,
    ACTIONS(52), 1,
      sym_line,
    ACTIONS(55), 1,
      sym_scene_start,
    ACTIONS(58), 1,
      sym_section_start,
    ACTIONS(61), 1,
      sym_note_start,
    ACTIONS(64), 1,
      sym_forced_action_start,
    ACTIONS(67), 1,
      sym_forced_character_start,
    ACTIONS(70), 1,
      sym_forced_transition_start,
    ACTIONS(73), 1,
      sym_lyric_start,
    ACTIONS(76), 1,
      sym_centered_start,
    ACTIONS(79), 1,
      sym_page_break_marker,
    ACTIONS(82), 1,
      sym_synopsis_start,
    ACTIONS(85), 1,
      sym_boneyard_start,
    STATE(38), 1,
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
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
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
  [201] = 18,
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
    STATE(38), 1,
      sym_character,
    STATE(4), 13,
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
    STATE(8), 1,
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
  [297] = 5,
    ACTIONS(98), 1,
      sym_title_key,
    ACTIONS(101), 1,
      sym_title_key_with_space,
    STATE(7), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(104), 4,
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
  [328] = 4,
    ACTIONS(94), 1,
      sym_title_continuation,
    STATE(9), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(108), 6,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(106), 12,
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
  [357] = 4,
    ACTIONS(114), 1,
      sym_title_continuation,
    STATE(9), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(112), 6,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [386] = 5,
    ACTIONS(5), 1,
      sym_title_key,
    ACTIONS(7), 1,
      sym_title_key_with_space,
    STATE(7), 2,
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
  [417] = 4,
    ACTIONS(94), 1,
      sym_title_continuation,
    STATE(9), 1,
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
  [446] = 2,
    ACTIONS(112), 6,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(110), 13,
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
  [546] = 2,
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
  [568] = 2,
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
  [905] = 3,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      sym_line,
    STATE(15), 2,
      sym_dialogue,
      sym_parenthetical,
  [916] = 3,
    ACTIONS(206), 1,
      anon_sym_LF,
    ACTIONS(208), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_scene_number,
  [926] = 3,
    ACTIONS(208), 1,
      anon_sym_POUND,
    ACTIONS(210), 1,
      anon_sym_LF,
    STATE(67), 1,
      sym_scene_number,
  [936] = 2,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(214), 1,
      anon_sym_SPACE,
  [943] = 2,
    ACTIONS(216), 1,
      anon_sym_SPACE,
    ACTIONS(218), 1,
      sym_description,
  [950] = 2,
    ACTIONS(125), 1,
      sym_dialogue_line_start,
    STATE(13), 1,
      aux_sym_dialogue_block_repeat1,
  [957] = 2,
    ACTIONS(220), 1,
      anon_sym_LF,
    ACTIONS(222), 1,
      aux_sym_character_token3,
  [964] = 2,
    ACTIONS(94), 1,
      sym_title_continuation,
    STATE(11), 1,
      aux_sym_title_page_field_repeat1,
  [971] = 1,
    ACTIONS(224), 1,
      anon_sym_LF,
  [975] = 1,
    ACTIONS(226), 1,
      aux_sym_parenthetical_token1,
  [979] = 1,
    ACTIONS(228), 1,
      anon_sym_LF,
  [983] = 1,
    ACTIONS(230), 1,
      anon_sym_LF,
  [987] = 1,
    ACTIONS(232), 1,
      aux_sym_character_token2,
  [991] = 1,
    ACTIONS(234), 1,
      anon_sym_LF,
  [995] = 1,
    ACTIONS(236), 1,
      aux_sym_scene_number_token1,
  [999] = 1,
    ACTIONS(210), 1,
      anon_sym_LF,
  [1003] = 1,
    ACTIONS(238), 1,
      anon_sym_LF,
  [1007] = 1,
    ACTIONS(240), 1,
      anon_sym_LF,
  [1011] = 1,
    ACTIONS(242), 1,
      anon_sym_LF,
  [1015] = 1,
    ACTIONS(244), 1,
      sym_dialogue_line_start,
  [1019] = 1,
    ACTIONS(246), 1,
      sym_note_content,
  [1023] = 1,
    ACTIONS(248), 1,
      anon_sym_LF,
  [1027] = 1,
    ACTIONS(250), 1,
      anon_sym_LF,
  [1031] = 1,
    ACTIONS(252), 1,
      anon_sym_LF,
  [1035] = 1,
    ACTIONS(254), 1,
      anon_sym_RBRACK_RBRACK,
  [1039] = 1,
    ACTIONS(256), 1,
      sym_description,
  [1043] = 1,
    ACTIONS(258), 1,
      sym_centered_end,
  [1047] = 1,
    ACTIONS(260), 1,
      sym_description,
  [1051] = 1,
    ACTIONS(262), 1,
      anon_sym_LF,
  [1055] = 1,
    ACTIONS(264), 1,
      anon_sym_LF2,
  [1059] = 1,
    ACTIONS(266), 1,
      aux_sym_character_token2,
  [1063] = 1,
    ACTIONS(268), 1,
      anon_sym_STAR_SLASH,
  [1067] = 1,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
  [1071] = 1,
    ACTIONS(272), 1,
      anon_sym_LF,
  [1075] = 1,
    ACTIONS(274), 1,
      anon_sym_LF,
  [1079] = 1,
    ACTIONS(276), 1,
      anon_sym_POUND,
  [1083] = 1,
    ACTIONS(278), 1,
      sym_dialogue_line_start,
  [1087] = 1,
    ACTIONS(280), 1,
      sym_description,
  [1091] = 1,
    ACTIONS(282), 1,
      sym_dialogue_line_start,
  [1095] = 1,
    ACTIONS(284), 1,
      anon_sym_LF,
  [1099] = 1,
    ACTIONS(286), 1,
      sym_boneyard_content,
  [1103] = 1,
    ACTIONS(288), 1,
      aux_sym_character_token2,
  [1107] = 1,
    ACTIONS(290), 1,
      anon_sym_LF,
  [1111] = 1,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
  [1115] = 1,
    ACTIONS(294), 1,
      sym_centered_text,
  [1119] = 1,
    ACTIONS(296), 1,
      aux_sym_character_token2,
  [1123] = 1,
    ACTIONS(298), 1,
      anon_sym_LF,
  [1127] = 1,
    ACTIONS(300), 1,
      anon_sym_LF,
  [1131] = 1,
    ACTIONS(302), 1,
      aux_sym_character_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 201,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 297,
  [SMALL_STATE(8)] = 328,
  [SMALL_STATE(9)] = 357,
  [SMALL_STATE(10)] = 386,
  [SMALL_STATE(11)] = 417,
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
  [SMALL_STATE(34)] = 916,
  [SMALL_STATE(35)] = 926,
  [SMALL_STATE(36)] = 936,
  [SMALL_STATE(37)] = 943,
  [SMALL_STATE(38)] = 950,
  [SMALL_STATE(39)] = 957,
  [SMALL_STATE(40)] = 964,
  [SMALL_STATE(41)] = 971,
  [SMALL_STATE(42)] = 975,
  [SMALL_STATE(43)] = 979,
  [SMALL_STATE(44)] = 983,
  [SMALL_STATE(45)] = 987,
  [SMALL_STATE(46)] = 991,
  [SMALL_STATE(47)] = 995,
  [SMALL_STATE(48)] = 999,
  [SMALL_STATE(49)] = 1003,
  [SMALL_STATE(50)] = 1007,
  [SMALL_STATE(51)] = 1011,
  [SMALL_STATE(52)] = 1015,
  [SMALL_STATE(53)] = 1019,
  [SMALL_STATE(54)] = 1023,
  [SMALL_STATE(55)] = 1027,
  [SMALL_STATE(56)] = 1031,
  [SMALL_STATE(57)] = 1035,
  [SMALL_STATE(58)] = 1039,
  [SMALL_STATE(59)] = 1043,
  [SMALL_STATE(60)] = 1047,
  [SMALL_STATE(61)] = 1051,
  [SMALL_STATE(62)] = 1055,
  [SMALL_STATE(63)] = 1059,
  [SMALL_STATE(64)] = 1063,
  [SMALL_STATE(65)] = 1067,
  [SMALL_STATE(66)] = 1071,
  [SMALL_STATE(67)] = 1075,
  [SMALL_STATE(68)] = 1079,
  [SMALL_STATE(69)] = 1083,
  [SMALL_STATE(70)] = 1087,
  [SMALL_STATE(71)] = 1091,
  [SMALL_STATE(72)] = 1095,
  [SMALL_STATE(73)] = 1099,
  [SMALL_STATE(74)] = 1103,
  [SMALL_STATE(75)] = 1107,
  [SMALL_STATE(76)] = 1111,
  [SMALL_STATE(77)] = 1115,
  [SMALL_STATE(78)] = 1119,
  [SMALL_STATE(79)] = 1123,
  [SMALL_STATE(80)] = 1127,
  [SMALL_STATE(81)] = 1131,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_centered, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_centered, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 4, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 4, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synopsis, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synopsis, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_break, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_break, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [270] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_number, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
