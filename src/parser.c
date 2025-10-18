#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_SPACE = 1,
  anon_sym_LF = 2,
  sym_title_key = 3,
  anon_sym_POUND = 4,
  aux_sym_scene_number_token1 = 5,
  aux_sym_character_token1 = 6,
  aux_sym_character_token2 = 7,
  aux_sym_character_token3 = 8,
  anon_sym_LPAREN = 9,
  aux_sym_parenthetical_token1 = 10,
  anon_sym_RPAREN = 11,
  anon_sym_CUTTO_COLON = 12,
  anon_sym_FADEOUT_COLON = 13,
  anon_sym_FADEIN_COLON = 14,
  anon_sym_FADETO_COLON = 15,
  anon_sym_DISSOLVETO_COLON = 16,
  anon_sym_MATCHCUTTO_COLON = 17,
  aux_sym_transition_token1 = 18,
  anon_sym_RBRACK_RBRACK = 19,
  sym_note_content = 20,
  aux_sym_boneyard_token1 = 21,
  aux_sym_centered_token1 = 22,
  anon_sym_LT = 23,
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
  sym_document = 35,
  sym_title_page = 36,
  sym__element = 37,
  sym_title_page_field = 38,
  sym_scene_heading = 39,
  sym_scene_number = 40,
  sym_character = 41,
  sym_dialogue_block = 42,
  sym_dialogue = 43,
  sym_parenthetical = 44,
  sym_action = 45,
  sym_transition = 46,
  sym_section_heading = 47,
  sym_note = 48,
  sym_boneyard = 49,
  sym_page_break = 50,
  sym_synopsis = 51,
  sym_lyric = 52,
  sym_centered = 53,
  sym_line = 54,
  sym_description = 55,
  aux_sym_document_repeat1 = 56,
  aux_sym_title_page_repeat1 = 57,
  aux_sym_dialogue_block_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SPACE] = " ",
  [anon_sym_LF] = "\n",
  [sym_title_key] = "key",
  [anon_sym_POUND] = "#",
  [aux_sym_scene_number_token1] = "scene_number_token1",
  [aux_sym_character_token1] = "character_token1",
  [aux_sym_character_token2] = "character_token2",
  [aux_sym_character_token3] = "character_token3",
  [anon_sym_LPAREN] = "(",
  [aux_sym_parenthetical_token1] = "parenthetical_token1",
  [anon_sym_RPAREN] = ")",
  [anon_sym_CUTTO_COLON] = "CUT TO:",
  [anon_sym_FADEOUT_COLON] = "FADE OUT:",
  [anon_sym_FADEIN_COLON] = "FADE IN:",
  [anon_sym_FADETO_COLON] = "FADE TO:",
  [anon_sym_DISSOLVETO_COLON] = "DISSOLVE TO:",
  [anon_sym_MATCHCUTTO_COLON] = "MATCH CUT TO:",
  [aux_sym_transition_token1] = "transition_token1",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [sym_note_content] = "note_content",
  [aux_sym_boneyard_token1] = "boneyard_token1",
  [aux_sym_centered_token1] = "centered_token1",
  [anon_sym_LT] = "<",
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
  [sym_line] = "line",
  [sym_description] = "description",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_title_page_repeat1] = "title_page_repeat1",
  [aux_sym_dialogue_block_repeat1] = "dialogue_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_LF] = anon_sym_LF,
  [sym_title_key] = sym_title_key,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_scene_number_token1] = aux_sym_scene_number_token1,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [aux_sym_character_token2] = aux_sym_character_token2,
  [aux_sym_character_token3] = aux_sym_character_token3,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_parenthetical_token1] = aux_sym_parenthetical_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_CUTTO_COLON] = anon_sym_CUTTO_COLON,
  [anon_sym_FADEOUT_COLON] = anon_sym_FADEOUT_COLON,
  [anon_sym_FADEIN_COLON] = anon_sym_FADEIN_COLON,
  [anon_sym_FADETO_COLON] = anon_sym_FADETO_COLON,
  [anon_sym_DISSOLVETO_COLON] = anon_sym_DISSOLVETO_COLON,
  [anon_sym_MATCHCUTTO_COLON] = anon_sym_MATCHCUTTO_COLON,
  [aux_sym_transition_token1] = aux_sym_transition_token1,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [sym_note_content] = sym_note_content,
  [aux_sym_boneyard_token1] = aux_sym_boneyard_token1,
  [aux_sym_centered_token1] = aux_sym_centered_token1,
  [anon_sym_LT] = anon_sym_LT,
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
  [sym_line] = sym_line,
  [sym_description] = sym_description,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_title_page_repeat1] = aux_sym_title_page_repeat1,
  [aux_sym_dialogue_block_repeat1] = aux_sym_dialogue_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_title_key] = {
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
  [anon_sym_CUTTO_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FADEOUT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FADEIN_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FADETO_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DISSOLVETO_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MATCHCUTTO_COLON] = {
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
  [aux_sym_boneyard_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_centered_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
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
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
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
  [aux_sym_dialogue_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
  [1] =
    {field_key, 0},
    {field_value, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '<') ADVANCE(123);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '^') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '(') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '^') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(122);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '<') ADVANCE(123);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '^') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(120);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(117);
      END_STATE();
    case 10:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(109);
      END_STATE();
    case 11:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(119);
      END_STATE();
    case 12:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') SKIP(12);
      if (lookahead == 'C') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'M') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') SKIP(13);
      if (lookahead == 'C') ADVANCE(95);
      if (lookahead == 'D') ADVANCE(89);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'M') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') SKIP(14);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(95);
      if (lookahead == 'D') ADVANCE(89);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'M') ADVANCE(87);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_title_key);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_scene_number_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_character_token1);
      ADVANCE_MAP(
        ' ', 83,
        ')', 76,
        ':', 20,
        'C', 27,
        'O', 36,
        'T', 30,
        '\'', 104,
        '(', 104,
        '.', 104,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'H') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'L') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'N') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'O') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'S') ADVANCE(31);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'U') ADVANCE(36);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == 'V') ADVANCE(25);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'D') ADVANCE(49);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'E') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'H') ADVANCE(71);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'S') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == 'U') ADVANCE(67);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == 'U') ADVANCE(69);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == 'V') ADVANCE(50);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_character_token2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'A') ADVANCE(24);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'I') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_character_token3);
      ADVANCE_MAP(
        ' ', 83,
        ')', 76,
        ':', 20,
        'I', 29,
        'O', 34,
        'T', 30,
        '\'', 104,
        '(', 104,
        '.', 104,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'T') ADVANCE(30);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'U') ADVANCE(36);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'A') ADVANCE(66);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(63);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'I') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(57);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(68);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == 'C') ADVANCE(95);
      if (lookahead == 'D') ADVANCE(89);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'M') ADVANCE(87);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(104);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == 'C') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'M') ADVANCE(79);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == 'C') ADVANCE(95);
      if (lookahead == 'D') ADVANCE(89);
      if (lookahead == 'F') ADVANCE(86);
      if (lookahead == 'M') ADVANCE(87);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_CUTTO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_FADEOUT_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_FADEIN_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_FADETO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DISSOLVETO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_MATCHCUTTO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_note_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_note_content);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_centered_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_centered_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 12, .external_lex_state = 1},
  [2] = {.lex_state = 13, .external_lex_state = 1},
  [3] = {.lex_state = 13, .external_lex_state = 1},
  [4] = {.lex_state = 13, .external_lex_state = 1},
  [5] = {.lex_state = 13, .external_lex_state = 1},
  [6] = {.lex_state = 14, .external_lex_state = 1},
  [7] = {.lex_state = 14, .external_lex_state = 1},
  [8] = {.lex_state = 12, .external_lex_state = 1},
  [9] = {.lex_state = 12, .external_lex_state = 1},
  [10] = {.lex_state = 14, .external_lex_state = 1},
  [11] = {.lex_state = 12, .external_lex_state = 1},
  [12] = {.lex_state = 12, .external_lex_state = 1},
  [13] = {.lex_state = 14, .external_lex_state = 1},
  [14] = {.lex_state = 13, .external_lex_state = 1},
  [15] = {.lex_state = 13, .external_lex_state = 1},
  [16] = {.lex_state = 13, .external_lex_state = 1},
  [17] = {.lex_state = 13, .external_lex_state = 1},
  [18] = {.lex_state = 13, .external_lex_state = 1},
  [19] = {.lex_state = 13, .external_lex_state = 1},
  [20] = {.lex_state = 13, .external_lex_state = 1},
  [21] = {.lex_state = 13, .external_lex_state = 1},
  [22] = {.lex_state = 13, .external_lex_state = 1},
  [23] = {.lex_state = 13, .external_lex_state = 1},
  [24] = {.lex_state = 13, .external_lex_state = 1},
  [25] = {.lex_state = 13, .external_lex_state = 1},
  [26] = {.lex_state = 13, .external_lex_state = 1},
  [27] = {.lex_state = 13, .external_lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_scene_number_token1] = ACTIONS(1),
    [aux_sym_character_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(1),
    [aux_sym_boneyard_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
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
  },
  [1] = {
    [sym_document] = STATE(47),
    [sym_title_page] = STATE(4),
    [sym__element] = STATE(3),
    [sym_title_page_field] = STATE(9),
    [sym_scene_heading] = STATE(3),
    [sym_character] = STATE(28),
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
    [sym_line] = STATE(46),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_title_page_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_title_key] = ACTIONS(5),
    [aux_sym_character_token1] = ACTIONS(7),
    [aux_sym_character_token3] = ACTIONS(9),
    [anon_sym_CUTTO_COLON] = ACTIONS(11),
    [anon_sym_FADEOUT_COLON] = ACTIONS(11),
    [anon_sym_FADEIN_COLON] = ACTIONS(11),
    [anon_sym_FADETO_COLON] = ACTIONS(11),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(11),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(11),
    [sym_scene_start] = ACTIONS(13),
    [sym_section_start] = ACTIONS(15),
    [sym_note_start] = ACTIONS(17),
    [sym_forced_action_start] = ACTIONS(19),
    [sym_forced_character_start] = ACTIONS(21),
    [sym_forced_transition_start] = ACTIONS(23),
    [sym_lyric_start] = ACTIONS(25),
    [sym_centered_start] = ACTIONS(27),
    [sym_page_break_marker] = ACTIONS(29),
    [sym_synopsis_start] = ACTIONS(31),
    [sym_boneyard_start] = ACTIONS(33),
  },
  [2] = {
    [sym__element] = STATE(5),
    [sym_scene_heading] = STATE(5),
    [sym_character] = STATE(28),
    [sym_dialogue_block] = STATE(5),
    [sym_action] = STATE(5),
    [sym_transition] = STATE(5),
    [sym_section_heading] = STATE(5),
    [sym_note] = STATE(5),
    [sym_boneyard] = STATE(5),
    [sym_page_break] = STATE(5),
    [sym_synopsis] = STATE(5),
    [sym_lyric] = STATE(5),
    [sym_centered] = STATE(5),
    [sym_line] = STATE(46),
    [aux_sym_document_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_character_token1] = ACTIONS(7),
    [aux_sym_character_token3] = ACTIONS(9),
    [anon_sym_CUTTO_COLON] = ACTIONS(11),
    [anon_sym_FADEOUT_COLON] = ACTIONS(11),
    [anon_sym_FADEIN_COLON] = ACTIONS(11),
    [anon_sym_FADETO_COLON] = ACTIONS(11),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(11),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(11),
    [sym_scene_start] = ACTIONS(13),
    [sym_section_start] = ACTIONS(15),
    [sym_note_start] = ACTIONS(17),
    [sym_forced_action_start] = ACTIONS(19),
    [sym_forced_character_start] = ACTIONS(21),
    [sym_forced_transition_start] = ACTIONS(23),
    [sym_lyric_start] = ACTIONS(25),
    [sym_centered_start] = ACTIONS(27),
    [sym_page_break_marker] = ACTIONS(29),
    [sym_synopsis_start] = ACTIONS(31),
    [sym_boneyard_start] = ACTIONS(33),
  },
  [3] = {
    [sym__element] = STATE(5),
    [sym_scene_heading] = STATE(5),
    [sym_character] = STATE(28),
    [sym_dialogue_block] = STATE(5),
    [sym_action] = STATE(5),
    [sym_transition] = STATE(5),
    [sym_section_heading] = STATE(5),
    [sym_note] = STATE(5),
    [sym_boneyard] = STATE(5),
    [sym_page_break] = STATE(5),
    [sym_synopsis] = STATE(5),
    [sym_lyric] = STATE(5),
    [sym_centered] = STATE(5),
    [sym_line] = STATE(46),
    [aux_sym_document_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_character_token1] = ACTIONS(7),
    [aux_sym_character_token3] = ACTIONS(9),
    [anon_sym_CUTTO_COLON] = ACTIONS(11),
    [anon_sym_FADEOUT_COLON] = ACTIONS(11),
    [anon_sym_FADEIN_COLON] = ACTIONS(11),
    [anon_sym_FADETO_COLON] = ACTIONS(11),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(11),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(11),
    [sym_scene_start] = ACTIONS(13),
    [sym_section_start] = ACTIONS(15),
    [sym_note_start] = ACTIONS(17),
    [sym_forced_action_start] = ACTIONS(19),
    [sym_forced_character_start] = ACTIONS(21),
    [sym_forced_transition_start] = ACTIONS(23),
    [sym_lyric_start] = ACTIONS(25),
    [sym_centered_start] = ACTIONS(27),
    [sym_page_break_marker] = ACTIONS(29),
    [sym_synopsis_start] = ACTIONS(31),
    [sym_boneyard_start] = ACTIONS(33),
  },
  [4] = {
    [sym__element] = STATE(2),
    [sym_scene_heading] = STATE(2),
    [sym_character] = STATE(28),
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
    [sym_line] = STATE(46),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_character_token1] = ACTIONS(7),
    [aux_sym_character_token3] = ACTIONS(9),
    [anon_sym_CUTTO_COLON] = ACTIONS(11),
    [anon_sym_FADEOUT_COLON] = ACTIONS(11),
    [anon_sym_FADEIN_COLON] = ACTIONS(11),
    [anon_sym_FADETO_COLON] = ACTIONS(11),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(11),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(11),
    [sym_scene_start] = ACTIONS(13),
    [sym_section_start] = ACTIONS(15),
    [sym_note_start] = ACTIONS(17),
    [sym_forced_action_start] = ACTIONS(19),
    [sym_forced_character_start] = ACTIONS(21),
    [sym_forced_transition_start] = ACTIONS(23),
    [sym_lyric_start] = ACTIONS(25),
    [sym_centered_start] = ACTIONS(27),
    [sym_page_break_marker] = ACTIONS(29),
    [sym_synopsis_start] = ACTIONS(31),
    [sym_boneyard_start] = ACTIONS(33),
  },
  [5] = {
    [sym__element] = STATE(5),
    [sym_scene_heading] = STATE(5),
    [sym_character] = STATE(28),
    [sym_dialogue_block] = STATE(5),
    [sym_action] = STATE(5),
    [sym_transition] = STATE(5),
    [sym_section_heading] = STATE(5),
    [sym_note] = STATE(5),
    [sym_boneyard] = STATE(5),
    [sym_page_break] = STATE(5),
    [sym_synopsis] = STATE(5),
    [sym_lyric] = STATE(5),
    [sym_centered] = STATE(5),
    [sym_line] = STATE(46),
    [aux_sym_document_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_character_token1] = ACTIONS(41),
    [aux_sym_character_token3] = ACTIONS(44),
    [anon_sym_CUTTO_COLON] = ACTIONS(47),
    [anon_sym_FADEOUT_COLON] = ACTIONS(47),
    [anon_sym_FADEIN_COLON] = ACTIONS(47),
    [anon_sym_FADETO_COLON] = ACTIONS(47),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(47),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(47),
    [aux_sym_transition_token1] = ACTIONS(47),
    [sym_scene_start] = ACTIONS(50),
    [sym_section_start] = ACTIONS(53),
    [sym_note_start] = ACTIONS(56),
    [sym_forced_action_start] = ACTIONS(59),
    [sym_forced_character_start] = ACTIONS(62),
    [sym_forced_transition_start] = ACTIONS(65),
    [sym_lyric_start] = ACTIONS(68),
    [sym_centered_start] = ACTIONS(71),
    [sym_page_break_marker] = ACTIONS(74),
    [sym_synopsis_start] = ACTIONS(77),
    [sym_boneyard_start] = ACTIONS(80),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_line,
    STATE(7), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(85), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(83), 12,
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
  [37] = 6,
    ACTIONS(93), 1,
      aux_sym_character_token3,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_line,
    STATE(7), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(91), 8,
      aux_sym_character_token1,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(89), 12,
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
  [76] = 4,
    ACTIONS(101), 1,
      sym_title_key,
    STATE(8), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(104), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(99), 12,
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
  [109] = 4,
    ACTIONS(5), 1,
      sym_title_key,
    STATE(8), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(108), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [142] = 2,
    ACTIONS(112), 10,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_LPAREN,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [169] = 2,
    ACTIONS(116), 10,
      sym_title_key,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(114), 12,
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
  [196] = 2,
    ACTIONS(120), 10,
      sym_title_key,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(118), 12,
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
  [223] = 2,
    ACTIONS(124), 10,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_LPAREN,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(122), 12,
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
  [250] = 2,
    ACTIONS(128), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [276] = 2,
    ACTIONS(132), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [302] = 2,
    ACTIONS(136), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [328] = 2,
    ACTIONS(140), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(138), 12,
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
  [354] = 2,
    ACTIONS(144), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [380] = 2,
    ACTIONS(148), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [406] = 2,
    ACTIONS(152), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [432] = 2,
    ACTIONS(156), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [458] = 2,
    ACTIONS(160), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [484] = 2,
    ACTIONS(164), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [510] = 2,
    ACTIONS(168), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [536] = 2,
    ACTIONS(172), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [562] = 2,
    ACTIONS(176), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [588] = 2,
    ACTIONS(180), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [614] = 4,
    ACTIONS(9), 1,
      aux_sym_character_token3,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_line,
    STATE(6), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
  [629] = 3,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(184), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_scene_number,
  [639] = 2,
    ACTIONS(186), 1,
      anon_sym_SPACE,
    ACTIONS(188), 1,
      anon_sym_LF,
  [646] = 2,
    ACTIONS(190), 1,
      anon_sym_LF,
    ACTIONS(192), 1,
      aux_sym_character_token2,
  [653] = 1,
    ACTIONS(194), 2,
      aux_sym_character_token3,
      anon_sym_LPAREN,
  [658] = 2,
    ACTIONS(196), 1,
      anon_sym_SPACE,
    ACTIONS(198), 1,
      anon_sym_LF,
  [665] = 2,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(202), 1,
      aux_sym_character_token2,
  [672] = 1,
    ACTIONS(204), 2,
      aux_sym_character_token3,
      anon_sym_LPAREN,
  [677] = 2,
    ACTIONS(206), 1,
      aux_sym_character_token3,
    STATE(42), 1,
      sym_description,
  [684] = 1,
    ACTIONS(208), 2,
      aux_sym_character_token3,
      anon_sym_LPAREN,
  [689] = 2,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      anon_sym_POUND,
  [696] = 2,
    ACTIONS(206), 1,
      aux_sym_character_token3,
    STATE(29), 1,
      sym_description,
  [703] = 2,
    ACTIONS(206), 1,
      aux_sym_character_token3,
    STATE(49), 1,
      sym_description,
  [710] = 1,
    ACTIONS(214), 1,
      anon_sym_LF,
  [714] = 1,
    ACTIONS(216), 1,
      anon_sym_LF,
  [718] = 1,
    ACTIONS(218), 1,
      anon_sym_SPACE,
  [722] = 1,
    ACTIONS(220), 1,
      aux_sym_parenthetical_token1,
  [726] = 1,
    ACTIONS(222), 1,
      anon_sym_LF,
  [730] = 1,
    ACTIONS(224), 1,
      anon_sym_LF,
  [734] = 1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
  [738] = 1,
    ACTIONS(228), 1,
      anon_sym_LF,
  [742] = 1,
    ACTIONS(230), 1,
      anon_sym_LF,
  [746] = 1,
    ACTIONS(232), 1,
      anon_sym_LF,
  [750] = 1,
    ACTIONS(234), 1,
      anon_sym_RBRACK_RBRACK,
  [754] = 1,
    ACTIONS(236), 1,
      anon_sym_LF,
  [758] = 1,
    ACTIONS(238), 1,
      anon_sym_LF,
  [762] = 1,
    ACTIONS(240), 1,
      anon_sym_LF,
  [766] = 1,
    ACTIONS(242), 1,
      anon_sym_LT,
  [770] = 1,
    ACTIONS(244), 1,
      anon_sym_LF,
  [774] = 1,
    ACTIONS(246), 1,
      aux_sym_boneyard_token1,
  [778] = 1,
    ACTIONS(190), 1,
      anon_sym_LF,
  [782] = 1,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
  [786] = 1,
    ACTIONS(250), 1,
      aux_sym_character_token3,
  [790] = 1,
    ACTIONS(252), 1,
      anon_sym_LF,
  [794] = 1,
    ACTIONS(254), 1,
      aux_sym_centered_token1,
  [798] = 1,
    ACTIONS(256), 1,
      aux_sym_scene_number_token1,
  [802] = 1,
    ACTIONS(258), 1,
      anon_sym_LF,
  [806] = 1,
    ACTIONS(260), 1,
      aux_sym_character_token3,
  [810] = 1,
    ACTIONS(262), 1,
      aux_sym_character_token3,
  [814] = 1,
    ACTIONS(264), 1,
      anon_sym_LF,
  [818] = 1,
    ACTIONS(266), 1,
      aux_sym_character_token3,
  [822] = 1,
    ACTIONS(268), 1,
      aux_sym_character_token3,
  [826] = 1,
    ACTIONS(270), 1,
      anon_sym_LF,
  [830] = 1,
    ACTIONS(272), 1,
      anon_sym_POUND,
  [834] = 1,
    ACTIONS(274), 1,
      sym_note_content,
  [838] = 1,
    ACTIONS(276), 1,
      anon_sym_LF,
  [842] = 1,
    ACTIONS(278), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 37,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 109,
  [SMALL_STATE(10)] = 142,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 223,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 276,
  [SMALL_STATE(16)] = 302,
  [SMALL_STATE(17)] = 328,
  [SMALL_STATE(18)] = 354,
  [SMALL_STATE(19)] = 380,
  [SMALL_STATE(20)] = 406,
  [SMALL_STATE(21)] = 432,
  [SMALL_STATE(22)] = 458,
  [SMALL_STATE(23)] = 484,
  [SMALL_STATE(24)] = 510,
  [SMALL_STATE(25)] = 536,
  [SMALL_STATE(26)] = 562,
  [SMALL_STATE(27)] = 588,
  [SMALL_STATE(28)] = 614,
  [SMALL_STATE(29)] = 629,
  [SMALL_STATE(30)] = 639,
  [SMALL_STATE(31)] = 646,
  [SMALL_STATE(32)] = 653,
  [SMALL_STATE(33)] = 658,
  [SMALL_STATE(34)] = 665,
  [SMALL_STATE(35)] = 672,
  [SMALL_STATE(36)] = 677,
  [SMALL_STATE(37)] = 684,
  [SMALL_STATE(38)] = 689,
  [SMALL_STATE(39)] = 696,
  [SMALL_STATE(40)] = 703,
  [SMALL_STATE(41)] = 710,
  [SMALL_STATE(42)] = 714,
  [SMALL_STATE(43)] = 718,
  [SMALL_STATE(44)] = 722,
  [SMALL_STATE(45)] = 726,
  [SMALL_STATE(46)] = 730,
  [SMALL_STATE(47)] = 734,
  [SMALL_STATE(48)] = 738,
  [SMALL_STATE(49)] = 742,
  [SMALL_STATE(50)] = 746,
  [SMALL_STATE(51)] = 750,
  [SMALL_STATE(52)] = 754,
  [SMALL_STATE(53)] = 758,
  [SMALL_STATE(54)] = 762,
  [SMALL_STATE(55)] = 766,
  [SMALL_STATE(56)] = 770,
  [SMALL_STATE(57)] = 774,
  [SMALL_STATE(58)] = 778,
  [SMALL_STATE(59)] = 782,
  [SMALL_STATE(60)] = 786,
  [SMALL_STATE(61)] = 790,
  [SMALL_STATE(62)] = 794,
  [SMALL_STATE(63)] = 798,
  [SMALL_STATE(64)] = 802,
  [SMALL_STATE(65)] = 806,
  [SMALL_STATE(66)] = 810,
  [SMALL_STATE(67)] = 814,
  [SMALL_STATE(68)] = 818,
  [SMALL_STATE(69)] = 822,
  [SMALL_STATE(70)] = 826,
  [SMALL_STATE(71)] = 830,
  [SMALL_STATE(72)] = 834,
  [SMALL_STATE(73)] = 838,
  [SMALL_STATE(74)] = 842,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 2, 0, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 2, 0, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 4, 0, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 4, 0, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synopsis, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synopsis, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_break, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_break, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_centered, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_centered, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [226] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_number, 3, 0, 0),
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
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
