#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 12
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_title_key = 2,
  sym_title_key_with_space = 3,
  anon_sym_SPACE = 4,
  anon_sym_POUND = 5,
  aux_sym_scene_number_token1 = 6,
  aux_sym_character_token1 = 7,
  aux_sym_character_token2 = 8,
  aux_sym_character_token3 = 9,
  anon_sym_LPAREN = 10,
  aux_sym_parenthetical_token1 = 11,
  anon_sym_RPAREN = 12,
  anon_sym_CUTTO_COLON = 13,
  anon_sym_FADEOUT_COLON = 14,
  anon_sym_FADEIN_COLON = 15,
  anon_sym_FADETO_COLON = 16,
  anon_sym_DISSOLVETO_COLON = 17,
  anon_sym_MATCHCUTTO_COLON = 18,
  aux_sym_transition_token1 = 19,
  anon_sym_RBRACK_RBRACK = 20,
  sym_note_content = 21,
  aux_sym_boneyard_token1 = 22,
  aux_sym_centered_token1 = 23,
  anon_sym_LT = 24,
  sym_description = 25,
  sym_scene_start = 26,
  sym_section_start = 27,
  sym_note_start = 28,
  sym_forced_action_start = 29,
  sym_forced_character_start = 30,
  sym_forced_transition_start = 31,
  sym_lyric_start = 32,
  sym_centered_start = 33,
  sym_page_break_marker = 34,
  sym_synopsis_start = 35,
  sym_boneyard_start = 36,
  sym_title_continuation = 37,
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
  sym_line = 57,
  aux_sym_document_repeat1 = 58,
  aux_sym_title_page_repeat1 = 59,
  aux_sym_title_page_field_repeat1 = 60,
  aux_sym_dialogue_block_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_title_key] = "title_key",
  [sym_title_key_with_space] = "title_key_with_space",
  [anon_sym_SPACE] = " ",
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '^') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '(') ADVANCE(109);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '^') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(124);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(23);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '<') ADVANCE(125);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '^') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(122);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(10);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 11:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(111);
      END_STATE();
    case 12:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(121);
      END_STATE();
    case 13:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(13);
      if (lookahead == 'C') ADVANCE(86);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(80);
      if (lookahead == 'M') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(14);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'F') ADVANCE(88);
      if (lookahead == 'M') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'F') ADVANCE(88);
      if (lookahead == 'M') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_title_key);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_title_key_with_space);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_scene_number_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_character_token1);
      ADVANCE_MAP(
        ' ', 85,
        ')', 78,
        ':', 19,
        'C', 29,
        'O', 38,
        'T', 32,
        '\'', 106,
        '(', 106,
        '.', 106,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'D') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(38);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'H') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'N') ADVANCE(38);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(30);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'S') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'U') ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'V') ADVANCE(27);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(25);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'D') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'E') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'E') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'H') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'N') ADVANCE(44);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(54);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(43);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(47);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(48);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'S') ADVANCE(63);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'S') ADVANCE(57);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == 'U') ADVANCE(69);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == 'U') ADVANCE(71);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == 'V') ADVANCE(52);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(49);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(76);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_character_token2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(26);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'A') ADVANCE(39);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_character_token3);
      ADVANCE_MAP(
        ' ', 85,
        ')', 78,
        ':', 19,
        'I', 31,
        'O', 36,
        'T', 32,
        '\'', 106,
        '(', 106,
        '.', 106,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'C') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(62);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'O') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(60);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(61);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == 'U') ADVANCE(70);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'F') ADVANCE(88);
      if (lookahead == 'M') ADVANCE(89);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.') ADVANCE(106);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == 'C') ADVANCE(86);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(80);
      if (lookahead == 'M') ADVANCE(81);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == 'C') ADVANCE(97);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'F') ADVANCE(88);
      if (lookahead == 'M') ADVANCE(89);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_CUTTO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_FADEOUT_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_FADEIN_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_FADETO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DISSOLVETO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_MATCHCUTTO_COLON);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_note_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_note_content);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_centered_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_centered_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_description);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 13, .external_lex_state = 2},
  [2] = {.lex_state = 14, .external_lex_state = 2},
  [3] = {.lex_state = 14, .external_lex_state = 2},
  [4] = {.lex_state = 14, .external_lex_state = 2},
  [5] = {.lex_state = 14, .external_lex_state = 2},
  [6] = {.lex_state = 15, .external_lex_state = 2},
  [7] = {.lex_state = 15, .external_lex_state = 2},
  [8] = {.lex_state = 13, .external_lex_state = 1},
  [9] = {.lex_state = 13, .external_lex_state = 1},
  [10] = {.lex_state = 13, .external_lex_state = 1},
  [11] = {.lex_state = 13, .external_lex_state = 2},
  [12] = {.lex_state = 13, .external_lex_state = 2},
  [13] = {.lex_state = 13, .external_lex_state = 1},
  [14] = {.lex_state = 13, .external_lex_state = 1},
  [15] = {.lex_state = 15, .external_lex_state = 2},
  [16] = {.lex_state = 15, .external_lex_state = 2},
  [17] = {.lex_state = 14, .external_lex_state = 2},
  [18] = {.lex_state = 14, .external_lex_state = 2},
  [19] = {.lex_state = 14, .external_lex_state = 2},
  [20] = {.lex_state = 14, .external_lex_state = 2},
  [21] = {.lex_state = 14, .external_lex_state = 2},
  [22] = {.lex_state = 14, .external_lex_state = 2},
  [23] = {.lex_state = 14, .external_lex_state = 2},
  [24] = {.lex_state = 14, .external_lex_state = 2},
  [25] = {.lex_state = 14, .external_lex_state = 2},
  [26] = {.lex_state = 14, .external_lex_state = 2},
  [27] = {.lex_state = 14, .external_lex_state = 2},
  [28] = {.lex_state = 14, .external_lex_state = 2},
  [29] = {.lex_state = 14, .external_lex_state = 2},
  [30] = {.lex_state = 14, .external_lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 2},
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
    [sym_title_continuation] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(59),
    [sym_title_page] = STATE(5),
    [sym__element] = STATE(4),
    [sym_title_page_field] = STATE(12),
    [sym_scene_heading] = STATE(4),
    [sym_character] = STATE(31),
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
    [sym_line] = STATE(57),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_title_page_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_title_key] = ACTIONS(5),
    [sym_title_key_with_space] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_character_token3] = ACTIONS(11),
    [anon_sym_CUTTO_COLON] = ACTIONS(13),
    [anon_sym_FADEOUT_COLON] = ACTIONS(13),
    [anon_sym_FADEIN_COLON] = ACTIONS(13),
    [anon_sym_FADETO_COLON] = ACTIONS(13),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(13),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(13),
    [aux_sym_transition_token1] = ACTIONS(13),
    [sym_scene_start] = ACTIONS(15),
    [sym_section_start] = ACTIONS(17),
    [sym_note_start] = ACTIONS(19),
    [sym_forced_action_start] = ACTIONS(21),
    [sym_forced_character_start] = ACTIONS(23),
    [sym_forced_transition_start] = ACTIONS(25),
    [sym_lyric_start] = ACTIONS(27),
    [sym_centered_start] = ACTIONS(29),
    [sym_page_break_marker] = ACTIONS(31),
    [sym_synopsis_start] = ACTIONS(33),
    [sym_boneyard_start] = ACTIONS(35),
  },
  [2] = {
    [sym__element] = STATE(3),
    [sym_scene_heading] = STATE(3),
    [sym_character] = STATE(31),
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
    [sym_line] = STATE(57),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_character_token3] = ACTIONS(11),
    [anon_sym_CUTTO_COLON] = ACTIONS(13),
    [anon_sym_FADEOUT_COLON] = ACTIONS(13),
    [anon_sym_FADEIN_COLON] = ACTIONS(13),
    [anon_sym_FADETO_COLON] = ACTIONS(13),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(13),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(13),
    [aux_sym_transition_token1] = ACTIONS(13),
    [sym_scene_start] = ACTIONS(15),
    [sym_section_start] = ACTIONS(17),
    [sym_note_start] = ACTIONS(19),
    [sym_forced_action_start] = ACTIONS(21),
    [sym_forced_character_start] = ACTIONS(23),
    [sym_forced_transition_start] = ACTIONS(25),
    [sym_lyric_start] = ACTIONS(27),
    [sym_centered_start] = ACTIONS(29),
    [sym_page_break_marker] = ACTIONS(31),
    [sym_synopsis_start] = ACTIONS(33),
    [sym_boneyard_start] = ACTIONS(35),
  },
  [3] = {
    [sym__element] = STATE(3),
    [sym_scene_heading] = STATE(3),
    [sym_character] = STATE(31),
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
    [sym_line] = STATE(57),
    [aux_sym_document_repeat1] = STATE(3),
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
  [4] = {
    [sym__element] = STATE(3),
    [sym_scene_heading] = STATE(3),
    [sym_character] = STATE(31),
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
    [sym_line] = STATE(57),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(83),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_character_token3] = ACTIONS(11),
    [anon_sym_CUTTO_COLON] = ACTIONS(13),
    [anon_sym_FADEOUT_COLON] = ACTIONS(13),
    [anon_sym_FADEIN_COLON] = ACTIONS(13),
    [anon_sym_FADETO_COLON] = ACTIONS(13),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(13),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(13),
    [aux_sym_transition_token1] = ACTIONS(13),
    [sym_scene_start] = ACTIONS(15),
    [sym_section_start] = ACTIONS(17),
    [sym_note_start] = ACTIONS(19),
    [sym_forced_action_start] = ACTIONS(21),
    [sym_forced_character_start] = ACTIONS(23),
    [sym_forced_transition_start] = ACTIONS(25),
    [sym_lyric_start] = ACTIONS(27),
    [sym_centered_start] = ACTIONS(29),
    [sym_page_break_marker] = ACTIONS(31),
    [sym_synopsis_start] = ACTIONS(33),
    [sym_boneyard_start] = ACTIONS(35),
  },
  [5] = {
    [sym__element] = STATE(2),
    [sym_scene_heading] = STATE(2),
    [sym_character] = STATE(31),
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
    [sym_line] = STATE(57),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(83),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_character_token3] = ACTIONS(11),
    [anon_sym_CUTTO_COLON] = ACTIONS(13),
    [anon_sym_FADEOUT_COLON] = ACTIONS(13),
    [anon_sym_FADEIN_COLON] = ACTIONS(13),
    [anon_sym_FADETO_COLON] = ACTIONS(13),
    [anon_sym_DISSOLVETO_COLON] = ACTIONS(13),
    [anon_sym_MATCHCUTTO_COLON] = ACTIONS(13),
    [aux_sym_transition_token1] = ACTIONS(13),
    [sym_scene_start] = ACTIONS(15),
    [sym_section_start] = ACTIONS(17),
    [sym_note_start] = ACTIONS(19),
    [sym_forced_action_start] = ACTIONS(21),
    [sym_forced_character_start] = ACTIONS(23),
    [sym_forced_transition_start] = ACTIONS(25),
    [sym_lyric_start] = ACTIONS(27),
    [sym_centered_start] = ACTIONS(29),
    [sym_page_break_marker] = ACTIONS(31),
    [sym_synopsis_start] = ACTIONS(33),
    [sym_boneyard_start] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_line,
    STATE(7), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(87), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(85), 12,
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
    ACTIONS(95), 1,
      aux_sym_character_token3,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_line,
    STATE(7), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(93), 8,
      aux_sym_character_token1,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(91), 12,
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
    ACTIONS(105), 1,
      sym_title_continuation,
    STATE(10), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(103), 11,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(101), 12,
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
  [110] = 4,
    ACTIONS(105), 1,
      sym_title_continuation,
    STATE(10), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(109), 11,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
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
  [144] = 4,
    ACTIONS(115), 1,
      sym_title_continuation,
    STATE(10), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(113), 11,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(111), 12,
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
  [178] = 5,
    ACTIONS(120), 1,
      sym_title_key,
    ACTIONS(123), 1,
      sym_title_key_with_space,
    STATE(11), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
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
  [214] = 5,
    ACTIONS(5), 1,
      sym_title_key,
    ACTIONS(7), 1,
      sym_title_key_with_space,
    STATE(11), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
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
    ACTIONS(128), 12,
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
  [250] = 4,
    ACTIONS(105), 1,
      sym_title_continuation,
    STATE(9), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(103), 11,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(101), 12,
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
  [284] = 2,
    ACTIONS(113), 11,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(111), 13,
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
  [313] = 2,
    ACTIONS(134), 10,
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
    ACTIONS(132), 12,
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
  [340] = 2,
    ACTIONS(138), 10,
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
    ACTIONS(136), 12,
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
  [367] = 2,
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
    ACTIONS(140), 12,
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
  [393] = 2,
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
    ACTIONS(144), 12,
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
  [419] = 2,
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
    ACTIONS(148), 12,
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
  [445] = 2,
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
    ACTIONS(152), 12,
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
  [471] = 2,
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
    ACTIONS(156), 12,
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
  [497] = 2,
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
    ACTIONS(160), 12,
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
  [523] = 2,
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
    ACTIONS(164), 12,
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
  [549] = 2,
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
    ACTIONS(168), 12,
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
  [575] = 2,
    ACTIONS(174), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(172), 12,
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
  [601] = 2,
    ACTIONS(178), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(176), 12,
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
  [627] = 2,
    ACTIONS(182), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(180), 12,
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
    ACTIONS(186), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(184), 12,
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
  [679] = 2,
    ACTIONS(190), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(188), 12,
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
  [705] = 2,
    ACTIONS(194), 9,
      aux_sym_character_token1,
      aux_sym_character_token3,
      anon_sym_CUTTO_COLON,
      anon_sym_FADEOUT_COLON,
      anon_sym_FADEIN_COLON,
      anon_sym_FADETO_COLON,
      anon_sym_DISSOLVETO_COLON,
      anon_sym_MATCHCUTTO_COLON,
      aux_sym_transition_token1,
    ACTIONS(192), 12,
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
  [731] = 4,
    ACTIONS(11), 1,
      aux_sym_character_token3,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_line,
    STATE(6), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
  [746] = 3,
    ACTIONS(196), 1,
      anon_sym_LF,
    ACTIONS(198), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym_scene_number,
  [756] = 2,
    ACTIONS(200), 1,
      anon_sym_LF,
    ACTIONS(202), 1,
      aux_sym_character_token2,
  [763] = 2,
    ACTIONS(204), 1,
      anon_sym_LF,
    ACTIONS(206), 1,
      aux_sym_character_token2,
  [770] = 1,
    ACTIONS(208), 2,
      aux_sym_character_token3,
      anon_sym_LPAREN,
  [775] = 1,
    ACTIONS(210), 2,
      aux_sym_character_token3,
      anon_sym_LPAREN,
  [780] = 2,
    ACTIONS(105), 1,
      sym_title_continuation,
    STATE(8), 1,
      aux_sym_title_page_field_repeat1,
  [787] = 2,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(214), 1,
      anon_sym_SPACE,
  [794] = 1,
    ACTIONS(216), 2,
      aux_sym_character_token3,
      anon_sym_LPAREN,
  [799] = 1,
    ACTIONS(218), 1,
      anon_sym_LF,
  [803] = 1,
    ACTIONS(220), 1,
      anon_sym_SPACE,
  [807] = 1,
    ACTIONS(222), 1,
      aux_sym_parenthetical_token1,
  [811] = 1,
    ACTIONS(224), 1,
      anon_sym_LF,
  [815] = 1,
    ACTIONS(200), 1,
      anon_sym_LF,
  [819] = 1,
    ACTIONS(226), 1,
      anon_sym_LF,
  [823] = 1,
    ACTIONS(228), 1,
      anon_sym_LT,
  [827] = 1,
    ACTIONS(230), 1,
      anon_sym_LF,
  [831] = 1,
    ACTIONS(232), 1,
      anon_sym_LF,
  [835] = 1,
    ACTIONS(234), 1,
      anon_sym_LF,
  [839] = 1,
    ACTIONS(236), 1,
      anon_sym_LF,
  [843] = 1,
    ACTIONS(238), 1,
      anon_sym_LF,
  [847] = 1,
    ACTIONS(240), 1,
      anon_sym_RBRACK_RBRACK,
  [851] = 1,
    ACTIONS(242), 1,
      anon_sym_LF,
  [855] = 1,
    ACTIONS(244), 1,
      sym_description,
  [859] = 1,
    ACTIONS(246), 1,
      sym_description,
  [863] = 1,
    ACTIONS(248), 1,
      anon_sym_LF,
  [867] = 1,
    ACTIONS(250), 1,
      anon_sym_LF,
  [871] = 1,
    ACTIONS(252), 1,
      anon_sym_LF,
  [875] = 1,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
  [879] = 1,
    ACTIONS(256), 1,
      anon_sym_LF,
  [883] = 1,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
  [887] = 1,
    ACTIONS(260), 1,
      anon_sym_LF,
  [891] = 1,
    ACTIONS(262), 1,
      sym_description,
  [895] = 1,
    ACTIONS(264), 1,
      anon_sym_LF,
  [899] = 1,
    ACTIONS(266), 1,
      aux_sym_scene_number_token1,
  [903] = 1,
    ACTIONS(268), 1,
      anon_sym_LF,
  [907] = 1,
    ACTIONS(270), 1,
      aux_sym_boneyard_token1,
  [911] = 1,
    ACTIONS(272), 1,
      aux_sym_character_token3,
  [915] = 1,
    ACTIONS(274), 1,
      anon_sym_LF,
  [919] = 1,
    ACTIONS(276), 1,
      aux_sym_centered_token1,
  [923] = 1,
    ACTIONS(278), 1,
      aux_sym_character_token3,
  [927] = 1,
    ACTIONS(280), 1,
      aux_sym_character_token3,
  [931] = 1,
    ACTIONS(282), 1,
      aux_sym_character_token3,
  [935] = 1,
    ACTIONS(284), 1,
      anon_sym_LF,
  [939] = 1,
    ACTIONS(286), 1,
      anon_sym_POUND,
  [943] = 1,
    ACTIONS(288), 1,
      aux_sym_character_token3,
  [947] = 1,
    ACTIONS(290), 1,
      sym_note_content,
  [951] = 1,
    ACTIONS(292), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 37,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 110,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 178,
  [SMALL_STATE(12)] = 214,
  [SMALL_STATE(13)] = 250,
  [SMALL_STATE(14)] = 284,
  [SMALL_STATE(15)] = 313,
  [SMALL_STATE(16)] = 340,
  [SMALL_STATE(17)] = 367,
  [SMALL_STATE(18)] = 393,
  [SMALL_STATE(19)] = 419,
  [SMALL_STATE(20)] = 445,
  [SMALL_STATE(21)] = 471,
  [SMALL_STATE(22)] = 497,
  [SMALL_STATE(23)] = 523,
  [SMALL_STATE(24)] = 549,
  [SMALL_STATE(25)] = 575,
  [SMALL_STATE(26)] = 601,
  [SMALL_STATE(27)] = 627,
  [SMALL_STATE(28)] = 653,
  [SMALL_STATE(29)] = 679,
  [SMALL_STATE(30)] = 705,
  [SMALL_STATE(31)] = 731,
  [SMALL_STATE(32)] = 746,
  [SMALL_STATE(33)] = 756,
  [SMALL_STATE(34)] = 763,
  [SMALL_STATE(35)] = 770,
  [SMALL_STATE(36)] = 775,
  [SMALL_STATE(37)] = 780,
  [SMALL_STATE(38)] = 787,
  [SMALL_STATE(39)] = 794,
  [SMALL_STATE(40)] = 799,
  [SMALL_STATE(41)] = 803,
  [SMALL_STATE(42)] = 807,
  [SMALL_STATE(43)] = 811,
  [SMALL_STATE(44)] = 815,
  [SMALL_STATE(45)] = 819,
  [SMALL_STATE(46)] = 823,
  [SMALL_STATE(47)] = 827,
  [SMALL_STATE(48)] = 831,
  [SMALL_STATE(49)] = 835,
  [SMALL_STATE(50)] = 839,
  [SMALL_STATE(51)] = 843,
  [SMALL_STATE(52)] = 847,
  [SMALL_STATE(53)] = 851,
  [SMALL_STATE(54)] = 855,
  [SMALL_STATE(55)] = 859,
  [SMALL_STATE(56)] = 863,
  [SMALL_STATE(57)] = 867,
  [SMALL_STATE(58)] = 871,
  [SMALL_STATE(59)] = 875,
  [SMALL_STATE(60)] = 879,
  [SMALL_STATE(61)] = 883,
  [SMALL_STATE(62)] = 887,
  [SMALL_STATE(63)] = 891,
  [SMALL_STATE(64)] = 895,
  [SMALL_STATE(65)] = 899,
  [SMALL_STATE(66)] = 903,
  [SMALL_STATE(67)] = 907,
  [SMALL_STATE(68)] = 911,
  [SMALL_STATE(69)] = 915,
  [SMALL_STATE(70)] = 919,
  [SMALL_STATE(71)] = 923,
  [SMALL_STATE(72)] = 927,
  [SMALL_STATE(73)] = 931,
  [SMALL_STATE(74)] = 935,
  [SMALL_STATE(75)] = 939,
  [SMALL_STATE(76)] = 943,
  [SMALL_STATE(77)] = 947,
  [SMALL_STATE(78)] = 951,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_break, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_break, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synopsis, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synopsis, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_centered, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_centered, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 3, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [254] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_number, 3, 0, 0),
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
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
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
