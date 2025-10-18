#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SPACE = 1,
  anon_sym_LF = 2,
  anon_sym_POUND = 3,
  aux_sym_scene_number_token1 = 4,
  aux_sym_character_token1 = 5,
  aux_sym_character_token2 = 6,
  aux_sym_character_token3 = 7,
  anon_sym_LPAREN = 8,
  aux_sym_parenthetical_token1 = 9,
  anon_sym_RPAREN = 10,
  anon_sym_CUTTO_COLON = 11,
  anon_sym_FADEOUT_COLON = 12,
  anon_sym_FADEIN_COLON = 13,
  anon_sym_FADETO_COLON = 14,
  anon_sym_DISSOLVETO_COLON = 15,
  anon_sym_MATCHCUTTO_COLON = 16,
  aux_sym_transition_token1 = 17,
  anon_sym_RBRACK_RBRACK = 18,
  sym_note_content = 19,
  aux_sym_boneyard_token1 = 20,
  aux_sym_centered_token1 = 21,
  anon_sym_LT = 22,
  sym_title_page_key = 23,
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
  sym__element = 36,
  sym_title_page_field = 37,
  sym_scene_heading = 38,
  sym_scene_number = 39,
  sym_character = 40,
  sym_dialogue_block = 41,
  sym_dialogue = 42,
  sym_parenthetical = 43,
  sym_action = 44,
  sym_transition = 45,
  sym_section_heading = 46,
  sym_note = 47,
  sym_boneyard = 48,
  sym_page_break = 49,
  sym_synopsis = 50,
  sym_lyric = 51,
  sym_centered = 52,
  sym_line = 53,
  sym_description = 54,
  aux_sym_document_repeat1 = 55,
  aux_sym_dialogue_block_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SPACE] = " ",
  [anon_sym_LF] = "\n",
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
  [sym_title_page_key] = "title_page_key",
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
  [aux_sym_dialogue_block_repeat1] = "dialogue_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_LF] = anon_sym_LF,
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
  [sym_title_page_key] = sym_title_page_key,
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
  [sym_title_page_key] = {
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
  [sym_document] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '^') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '(') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '^') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '^') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(86);
      END_STATE();
    case 10:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(78);
      END_STATE();
    case 11:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(88);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') SKIP(12);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_scene_number_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'O') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'C') ADVANCE(32);
      if (lookahead == 'O') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'H') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'L') ADVANCE(45);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'N') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == 'U') ADVANCE(48);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == 'U') ADVANCE(50);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == 'V') ADVANCE(31);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(25);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(21);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_character_token2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'A') ADVANCE(29);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'A') ADVANCE(47);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'I') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == 'U') ADVANCE(49);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(59);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == 'C') ADVANCE(67);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == 'F') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(59);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_CUTTO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_FADEOUT_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_FADEIN_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_FADETO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DISSOLVETO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_MATCHCUTTO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_note_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_note_content);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_centered_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_centered_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 12, .external_lex_state = 1},
  [2] = {.lex_state = 12, .external_lex_state = 1},
  [3] = {.lex_state = 12, .external_lex_state = 1},
  [4] = {.lex_state = 13, .external_lex_state = 1},
  [5] = {.lex_state = 13, .external_lex_state = 1},
  [6] = {.lex_state = 13, .external_lex_state = 1},
  [7] = {.lex_state = 13, .external_lex_state = 1},
  [8] = {.lex_state = 12, .external_lex_state = 1},
  [9] = {.lex_state = 12, .external_lex_state = 1},
  [10] = {.lex_state = 12, .external_lex_state = 1},
  [11] = {.lex_state = 12, .external_lex_state = 1},
  [12] = {.lex_state = 12, .external_lex_state = 1},
  [13] = {.lex_state = 12, .external_lex_state = 1},
  [14] = {.lex_state = 12, .external_lex_state = 1},
  [15] = {.lex_state = 12, .external_lex_state = 1},
  [16] = {.lex_state = 12, .external_lex_state = 1},
  [17] = {.lex_state = 12, .external_lex_state = 1},
  [18] = {.lex_state = 12, .external_lex_state = 1},
  [19] = {.lex_state = 12, .external_lex_state = 1},
  [20] = {.lex_state = 12, .external_lex_state = 1},
  [21] = {.lex_state = 12, .external_lex_state = 1},
  [22] = {.lex_state = 12, .external_lex_state = 1},
  [23] = {.lex_state = 12, .external_lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 2},
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
    [sym_title_page_key] = ACTIONS(1),
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
    [sym_document] = STATE(43),
    [sym__element] = STATE(2),
    [sym_title_page_field] = STATE(2),
    [sym_scene_heading] = STATE(2),
    [sym_character] = STATE(24),
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
    [sym_line] = STATE(42),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_character_token1] = ACTIONS(5),
    [aux_sym_character_token3] = ACTIONS(7),
    [anon_sym_CUTTO_COLON] = ACTIONS(9),
    [anon_sym_FADEOUT_COLON] = ACTIONS(9),
    [anon_sym_FADEIN_COLON] = ACTIONS(9),
    [anon_sym_FADETO_COLON] = ACTIONS(9),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(9),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(9),
    [sym_title_page_key] = ACTIONS(11),
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
    [sym__element] = STATE(3),
    [sym_title_page_field] = STATE(3),
    [sym_scene_heading] = STATE(3),
    [sym_character] = STATE(24),
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
    [sym_line] = STATE(42),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_character_token1] = ACTIONS(5),
    [aux_sym_character_token3] = ACTIONS(7),
    [anon_sym_CUTTO_COLON] = ACTIONS(9),
    [anon_sym_FADEOUT_COLON] = ACTIONS(9),
    [anon_sym_FADEIN_COLON] = ACTIONS(9),
    [anon_sym_FADETO_COLON] = ACTIONS(9),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(9),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(9),
    [sym_title_page_key] = ACTIONS(11),
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
    [sym__element] = STATE(3),
    [sym_title_page_field] = STATE(3),
    [sym_scene_heading] = STATE(3),
    [sym_character] = STATE(24),
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
    [sym_line] = STATE(42),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_character_token1] = ACTIONS(39),
    [aux_sym_character_token3] = ACTIONS(42),
    [anon_sym_CUTTO_COLON] = ACTIONS(45),
    [anon_sym_FADEOUT_COLON] = ACTIONS(45),
    [anon_sym_FADEIN_COLON] = ACTIONS(45),
    [anon_sym_FADETO_COLON] = ACTIONS(45),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(45),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(45),
    [aux_sym_transition_token1] = ACTIONS(45),
    [sym_title_page_key] = ACTIONS(48),
    [sym_scene_start] = ACTIONS(51),
    [sym_section_start] = ACTIONS(54),
    [sym_note_start] = ACTIONS(57),
    [sym_forced_action_start] = ACTIONS(60),
    [sym_forced_character_start] = ACTIONS(63),
    [sym_forced_transition_start] = ACTIONS(66),
    [sym_lyric_start] = ACTIONS(69),
    [sym_centered_start] = ACTIONS(72),
    [sym_page_break_marker] = ACTIONS(75),
    [sym_synopsis_start] = ACTIONS(78),
    [sym_boneyard_start] = ACTIONS(81),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_line,
    STATE(5), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(86), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(84), 13,
      sym_title_page_key,
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
  [38] = 6,
    ACTIONS(94), 1,
      aux_sym_character_token3,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_line,
    STATE(5), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(92), 8,
      aux_sym_character_token1,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(90), 13,
      sym_title_page_key,
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
  [78] = 2,
    ACTIONS(102), 10,
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
    ACTIONS(100), 13,
      sym_title_page_key,
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
  [106] = 2,
    ACTIONS(106), 10,
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
    ACTIONS(104), 13,
      sym_title_page_key,
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
  [134] = 2,
    ACTIONS(110), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(108), 13,
      sym_title_page_key,
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
  [161] = 2,
    ACTIONS(114), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(112), 13,
      sym_title_page_key,
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
  [188] = 2,
    ACTIONS(118), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(116), 13,
      sym_title_page_key,
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
  [215] = 2,
    ACTIONS(122), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(120), 13,
      sym_title_page_key,
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
  [242] = 2,
    ACTIONS(126), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(124), 13,
      sym_title_page_key,
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
  [269] = 2,
    ACTIONS(130), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(128), 13,
      sym_title_page_key,
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
  [296] = 2,
    ACTIONS(134), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(132), 13,
      sym_title_page_key,
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
  [323] = 2,
    ACTIONS(138), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(136), 13,
      sym_title_page_key,
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
  [350] = 2,
    ACTIONS(142), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(140), 13,
      sym_title_page_key,
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
  [377] = 2,
    ACTIONS(146), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(144), 13,
      sym_title_page_key,
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
  [404] = 2,
    ACTIONS(150), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(148), 13,
      sym_title_page_key,
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
  [431] = 2,
    ACTIONS(154), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(152), 13,
      sym_title_page_key,
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
    ACTIONS(158), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(156), 13,
      sym_title_page_key,
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
  [485] = 2,
    ACTIONS(162), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(160), 13,
      sym_title_page_key,
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
    ACTIONS(166), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(164), 13,
      sym_title_page_key,
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
  [539] = 2,
    ACTIONS(170), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(168), 13,
      sym_title_page_key,
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
    ACTIONS(7), 1,
      aux_sym_character_token3,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_line,
    STATE(4), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
  [581] = 3,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(174), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_scene_number,
  [591] = 1,
    ACTIONS(176), 2,
      aux_sym_character_token3,
      anon_sym_LPAREN,
  [596] = 2,
    ACTIONS(178), 1,
      anon_sym_SPACE,
    ACTIONS(180), 1,
      anon_sym_LF,
  [603] = 2,
    ACTIONS(182), 1,
      aux_sym_character_token3,
    STATE(46), 1,
      sym_description,
  [610] = 2,
    ACTIONS(184), 1,
      anon_sym_SPACE,
    ACTIONS(186), 1,
      anon_sym_LF,
  [617] = 1,
    ACTIONS(188), 2,
      aux_sym_character_token3,
      anon_sym_LPAREN,
  [622] = 2,
    ACTIONS(190), 1,
      anon_sym_LF,
    ACTIONS(192), 1,
      aux_sym_character_token2,
  [629] = 2,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(196), 1,
      aux_sym_character_token2,
  [636] = 1,
    ACTIONS(198), 2,
      aux_sym_character_token3,
      anon_sym_LPAREN,
  [641] = 2,
    ACTIONS(182), 1,
      aux_sym_character_token3,
    STATE(25), 1,
      sym_description,
  [648] = 2,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(202), 1,
      anon_sym_POUND,
  [655] = 2,
    ACTIONS(182), 1,
      aux_sym_character_token3,
    STATE(44), 1,
      sym_description,
  [662] = 1,
    ACTIONS(204), 1,
      aux_sym_parenthetical_token1,
  [666] = 1,
    ACTIONS(206), 1,
      aux_sym_character_token3,
  [670] = 1,
    ACTIONS(208), 1,
      anon_sym_LF,
  [674] = 1,
    ACTIONS(190), 1,
      anon_sym_LF,
  [678] = 1,
    ACTIONS(210), 1,
      anon_sym_LF,
  [682] = 1,
    ACTIONS(212), 1,
      anon_sym_LF,
  [686] = 1,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
  [690] = 1,
    ACTIONS(216), 1,
      anon_sym_LF,
  [694] = 1,
    ACTIONS(218), 1,
      anon_sym_LF,
  [698] = 1,
    ACTIONS(220), 1,
      anon_sym_LF,
  [702] = 1,
    ACTIONS(222), 1,
      anon_sym_LF,
  [706] = 1,
    ACTIONS(224), 1,
      anon_sym_LF,
  [710] = 1,
    ACTIONS(226), 1,
      anon_sym_RBRACK_RBRACK,
  [714] = 1,
    ACTIONS(228), 1,
      anon_sym_LF,
  [718] = 1,
    ACTIONS(230), 1,
      anon_sym_LF,
  [722] = 1,
    ACTIONS(232), 1,
      aux_sym_boneyard_token1,
  [726] = 1,
    ACTIONS(234), 1,
      anon_sym_LF,
  [730] = 1,
    ACTIONS(236), 1,
      anon_sym_LT,
  [734] = 1,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
  [738] = 1,
    ACTIONS(240), 1,
      anon_sym_LF,
  [742] = 1,
    ACTIONS(242), 1,
      aux_sym_centered_token1,
  [746] = 1,
    ACTIONS(244), 1,
      aux_sym_character_token3,
  [750] = 1,
    ACTIONS(246), 1,
      aux_sym_character_token3,
  [754] = 1,
    ACTIONS(248), 1,
      aux_sym_scene_number_token1,
  [758] = 1,
    ACTIONS(250), 1,
      anon_sym_LF,
  [762] = 1,
    ACTIONS(252), 1,
      aux_sym_character_token3,
  [766] = 1,
    ACTIONS(254), 1,
      aux_sym_character_token3,
  [770] = 1,
    ACTIONS(256), 1,
      anon_sym_LF,
  [774] = 1,
    ACTIONS(258), 1,
      sym_note_content,
  [778] = 1,
    ACTIONS(260), 1,
      anon_sym_LF,
  [782] = 1,
    ACTIONS(262), 1,
      anon_sym_POUND,
  [786] = 1,
    ACTIONS(264), 1,
      anon_sym_LF,
  [790] = 1,
    ACTIONS(266), 1,
      anon_sym_SPACE,
  [794] = 1,
    ACTIONS(268), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 106,
  [SMALL_STATE(8)] = 134,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 188,
  [SMALL_STATE(11)] = 215,
  [SMALL_STATE(12)] = 242,
  [SMALL_STATE(13)] = 269,
  [SMALL_STATE(14)] = 296,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 350,
  [SMALL_STATE(17)] = 377,
  [SMALL_STATE(18)] = 404,
  [SMALL_STATE(19)] = 431,
  [SMALL_STATE(20)] = 458,
  [SMALL_STATE(21)] = 485,
  [SMALL_STATE(22)] = 512,
  [SMALL_STATE(23)] = 539,
  [SMALL_STATE(24)] = 566,
  [SMALL_STATE(25)] = 581,
  [SMALL_STATE(26)] = 591,
  [SMALL_STATE(27)] = 596,
  [SMALL_STATE(28)] = 603,
  [SMALL_STATE(29)] = 610,
  [SMALL_STATE(30)] = 617,
  [SMALL_STATE(31)] = 622,
  [SMALL_STATE(32)] = 629,
  [SMALL_STATE(33)] = 636,
  [SMALL_STATE(34)] = 641,
  [SMALL_STATE(35)] = 648,
  [SMALL_STATE(36)] = 655,
  [SMALL_STATE(37)] = 662,
  [SMALL_STATE(38)] = 666,
  [SMALL_STATE(39)] = 670,
  [SMALL_STATE(40)] = 674,
  [SMALL_STATE(41)] = 678,
  [SMALL_STATE(42)] = 682,
  [SMALL_STATE(43)] = 686,
  [SMALL_STATE(44)] = 690,
  [SMALL_STATE(45)] = 694,
  [SMALL_STATE(46)] = 698,
  [SMALL_STATE(47)] = 702,
  [SMALL_STATE(48)] = 706,
  [SMALL_STATE(49)] = 710,
  [SMALL_STATE(50)] = 714,
  [SMALL_STATE(51)] = 718,
  [SMALL_STATE(52)] = 722,
  [SMALL_STATE(53)] = 726,
  [SMALL_STATE(54)] = 730,
  [SMALL_STATE(55)] = 734,
  [SMALL_STATE(56)] = 738,
  [SMALL_STATE(57)] = 742,
  [SMALL_STATE(58)] = 746,
  [SMALL_STATE(59)] = 750,
  [SMALL_STATE(60)] = 754,
  [SMALL_STATE(61)] = 758,
  [SMALL_STATE(62)] = 762,
  [SMALL_STATE(63)] = 766,
  [SMALL_STATE(64)] = 770,
  [SMALL_STATE(65)] = 774,
  [SMALL_STATE(66)] = 778,
  [SMALL_STATE(67)] = 782,
  [SMALL_STATE(68)] = 786,
  [SMALL_STATE(69)] = 790,
  [SMALL_STATE(70)] = 794,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synopsis, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synopsis, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_break, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_break, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 4, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_centered, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_centered, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 4, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [214] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_number, 3, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_title_page_key = 0,
  ts_external_token_scene_start = 1,
  ts_external_token_section_start = 2,
  ts_external_token_note_start = 3,
  ts_external_token_forced_action_start = 4,
  ts_external_token_forced_character_start = 5,
  ts_external_token_forced_transition_start = 6,
  ts_external_token_lyric_start = 7,
  ts_external_token_centered_start = 8,
  ts_external_token_page_break_marker = 9,
  ts_external_token_synopsis_start = 10,
  ts_external_token_boneyard_start = 11,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_title_page_key] = sym_title_page_key,
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
    [ts_external_token_title_page_key] = true,
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
