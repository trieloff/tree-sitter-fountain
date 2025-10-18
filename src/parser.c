#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
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
  aux_sym_character_token4 = 10,
  anon_sym_LPAREN = 11,
  aux_sym_parenthetical_token1 = 12,
  anon_sym_RPAREN = 13,
  aux_sym_transition_token1 = 14,
  anon_sym_RBRACK_RBRACK = 15,
  sym_note_content = 16,
  aux_sym_boneyard_token1 = 17,
  aux_sym_centered_token1 = 18,
  anon_sym_LT = 19,
  sym_line = 20,
  sym_description = 21,
  sym_scene_start = 22,
  sym_section_start = 23,
  sym_note_start = 24,
  sym_forced_action_start = 25,
  sym_forced_character_start = 26,
  sym_forced_transition_start = 27,
  sym_lyric_start = 28,
  sym_centered_start = 29,
  sym_page_break_marker = 30,
  sym_synopsis_start = 31,
  sym_boneyard_start = 32,
  sym_title_continuation = 33,
  sym_document = 34,
  sym_title_page = 35,
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
  aux_sym_document_repeat1 = 53,
  aux_sym_title_page_repeat1 = 54,
  aux_sym_title_page_field_repeat1 = 55,
  aux_sym_dialogue_block_repeat1 = 56,
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
  [aux_sym_character_token4] = "character_token4",
  [anon_sym_LPAREN] = "(",
  [aux_sym_parenthetical_token1] = "parenthetical_token1",
  [anon_sym_RPAREN] = ")",
  [aux_sym_transition_token1] = "transition_token1",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [sym_note_content] = "note_content",
  [aux_sym_boneyard_token1] = "boneyard_token1",
  [aux_sym_centered_token1] = "centered_token1",
  [anon_sym_LT] = "<",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_scene_number_token1] = aux_sym_scene_number_token1,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [aux_sym_character_token2] = aux_sym_character_token2,
  [aux_sym_character_token3] = aux_sym_character_token3,
  [aux_sym_character_token4] = aux_sym_character_token4,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_parenthetical_token1] = aux_sym_parenthetical_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_transition_token1] = aux_sym_transition_token1,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [sym_note_content] = sym_note_content,
  [aux_sym_boneyard_token1] = aux_sym_boneyard_token1,
  [aux_sym_centered_token1] = aux_sym_centered_token1,
  [anon_sym_LT] = anon_sym_LT,
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
  [aux_sym_character_token4] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == ']') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '(') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '(') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '^') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(10);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        ' ', 11,
        '#', 29,
        '(', 40,
        ')', 43,
        '*', 14,
        '<', 51,
        ']', 15,
        '^', 39,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == ']') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(16);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(63);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 17:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(42);
      END_STATE();
    case 18:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 19:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') SKIP(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') SKIP(20);
      if (lookahead == '(') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') SKIP(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_title_key);
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_title_key_with_space);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_scene_number_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(61);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(61);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(61);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(61);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_character_token2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_character_token4);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_note_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_note_content);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_boneyard_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_centered_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_centered_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '(') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '(') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(61);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(61);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(61);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '^') ADVANCE(31);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(61);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(61);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_description);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19, .external_lex_state = 2},
  [2] = {.lex_state = 21, .external_lex_state = 2},
  [3] = {.lex_state = 21, .external_lex_state = 2},
  [4] = {.lex_state = 21, .external_lex_state = 2},
  [5] = {.lex_state = 21, .external_lex_state = 2},
  [6] = {.lex_state = 19, .external_lex_state = 2},
  [7] = {.lex_state = 19, .external_lex_state = 1},
  [8] = {.lex_state = 19, .external_lex_state = 1},
  [9] = {.lex_state = 20, .external_lex_state = 2},
  [10] = {.lex_state = 19, .external_lex_state = 1},
  [11] = {.lex_state = 19, .external_lex_state = 1},
  [12] = {.lex_state = 19, .external_lex_state = 2},
  [13] = {.lex_state = 20, .external_lex_state = 2},
  [14] = {.lex_state = 19, .external_lex_state = 1},
  [15] = {.lex_state = 20, .external_lex_state = 2},
  [16] = {.lex_state = 20, .external_lex_state = 2},
  [17] = {.lex_state = 21, .external_lex_state = 2},
  [18] = {.lex_state = 21, .external_lex_state = 2},
  [19] = {.lex_state = 21, .external_lex_state = 2},
  [20] = {.lex_state = 21, .external_lex_state = 2},
  [21] = {.lex_state = 21, .external_lex_state = 2},
  [22] = {.lex_state = 21, .external_lex_state = 2},
  [23] = {.lex_state = 21, .external_lex_state = 2},
  [24] = {.lex_state = 21, .external_lex_state = 2},
  [25] = {.lex_state = 21, .external_lex_state = 2},
  [26] = {.lex_state = 21, .external_lex_state = 2},
  [27] = {.lex_state = 21, .external_lex_state = 2},
  [28] = {.lex_state = 21, .external_lex_state = 2},
  [29] = {.lex_state = 21, .external_lex_state = 2},
  [30] = {.lex_state = 21, .external_lex_state = 2},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_scene_number_token1] = ACTIONS(1),
    [aux_sym_character_token4] = ACTIONS(1),
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
    [sym_document] = STATE(74),
    [sym_title_page] = STATE(5),
    [sym__element] = STATE(4),
    [sym_title_page_field] = STATE(6),
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
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_title_page_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_title_key] = ACTIONS(5),
    [sym_title_key_with_space] = ACTIONS(7),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(11),
    [sym_line] = ACTIONS(13),
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
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_character_token1] = ACTIONS(39),
    [aux_sym_transition_token1] = ACTIONS(42),
    [sym_line] = ACTIONS(45),
    [sym_scene_start] = ACTIONS(48),
    [sym_section_start] = ACTIONS(51),
    [sym_note_start] = ACTIONS(54),
    [sym_forced_action_start] = ACTIONS(57),
    [sym_forced_character_start] = ACTIONS(60),
    [sym_forced_transition_start] = ACTIONS(63),
    [sym_lyric_start] = ACTIONS(66),
    [sym_centered_start] = ACTIONS(69),
    [sym_page_break_marker] = ACTIONS(72),
    [sym_synopsis_start] = ACTIONS(75),
    [sym_boneyard_start] = ACTIONS(78),
  },
  [3] = {
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
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(81),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(11),
    [sym_line] = ACTIONS(13),
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
  [4] = {
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
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(83),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(11),
    [sym_line] = ACTIONS(13),
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
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(83),
    [aux_sym_character_token1] = ACTIONS(9),
    [aux_sym_transition_token1] = ACTIONS(11),
    [sym_line] = ACTIONS(13),
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
    ACTIONS(5), 1,
      sym_title_key,
    ACTIONS(7), 1,
      sym_title_key_with_space,
    STATE(12), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(87), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [30] = 4,
    ACTIONS(93), 1,
      sym_title_continuation,
    STATE(8), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(91), 5,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [58] = 4,
    ACTIONS(99), 1,
      sym_title_continuation,
    STATE(8), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(97), 5,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(95), 12,
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
  [86] = 5,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_line,
    ACTIONS(104), 2,
      aux_sym_character_token1,
      aux_sym_transition_token1,
    STATE(9), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(102), 12,
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
  [116] = 4,
    ACTIONS(93), 1,
      sym_title_continuation,
    STATE(7), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(114), 5,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(112), 12,
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
    ACTIONS(93), 1,
      sym_title_continuation,
    STATE(8), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(114), 5,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(112), 12,
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
  [172] = 5,
    ACTIONS(118), 1,
      sym_title_key,
    ACTIONS(121), 1,
      sym_title_key_with_space,
    STATE(12), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(124), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(116), 12,
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
  [202] = 4,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    STATE(9), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
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
  [230] = 2,
    ACTIONS(97), 5,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(95), 13,
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
  [253] = 2,
    ACTIONS(134), 4,
      aux_sym_character_token1,
      anon_sym_LPAREN,
      aux_sym_transition_token1,
      sym_line,
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
  [274] = 2,
    ACTIONS(138), 4,
      aux_sym_character_token1,
      anon_sym_LPAREN,
      aux_sym_transition_token1,
      sym_line,
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
  [295] = 2,
    ACTIONS(142), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [315] = 2,
    ACTIONS(146), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [335] = 2,
    ACTIONS(150), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [355] = 2,
    ACTIONS(154), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [375] = 2,
    ACTIONS(158), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [395] = 2,
    ACTIONS(162), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [415] = 2,
    ACTIONS(166), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [435] = 2,
    ACTIONS(170), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [455] = 2,
    ACTIONS(174), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [475] = 2,
    ACTIONS(178), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [495] = 2,
    ACTIONS(182), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [515] = 2,
    ACTIONS(186), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [535] = 2,
    ACTIONS(190), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [555] = 2,
    ACTIONS(194), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [575] = 3,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      sym_line,
    STATE(13), 3,
      sym_dialogue,
      sym_parenthetical,
      aux_sym_dialogue_block_repeat1,
  [587] = 3,
    ACTIONS(198), 1,
      anon_sym_LF,
    ACTIONS(200), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_scene_number,
  [597] = 2,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(204), 1,
      aux_sym_character_token4,
  [604] = 1,
    ACTIONS(206), 2,
      anon_sym_LPAREN,
      sym_line,
  [609] = 2,
    ACTIONS(93), 1,
      sym_title_continuation,
    STATE(11), 1,
      aux_sym_title_page_field_repeat1,
  [616] = 2,
    ACTIONS(208), 1,
      anon_sym_LF,
    ACTIONS(210), 1,
      anon_sym_SPACE,
  [623] = 1,
    ACTIONS(212), 2,
      anon_sym_LPAREN,
      sym_line,
  [628] = 1,
    ACTIONS(214), 2,
      anon_sym_LPAREN,
      sym_line,
  [633] = 1,
    ACTIONS(216), 1,
      aux_sym_character_token3,
  [637] = 1,
    ACTIONS(218), 1,
      aux_sym_centered_token1,
  [641] = 1,
    ACTIONS(220), 1,
      sym_description,
  [645] = 1,
    ACTIONS(222), 1,
      aux_sym_parenthetical_token1,
  [649] = 1,
    ACTIONS(224), 1,
      anon_sym_LF,
  [653] = 1,
    ACTIONS(226), 1,
      anon_sym_LF,
  [657] = 1,
    ACTIONS(228), 1,
      aux_sym_boneyard_token1,
  [661] = 1,
    ACTIONS(230), 1,
      aux_sym_character_token2,
  [665] = 1,
    ACTIONS(232), 1,
      anon_sym_LF,
  [669] = 1,
    ACTIONS(234), 1,
      anon_sym_LF,
  [673] = 1,
    ACTIONS(236), 1,
      anon_sym_LF,
  [677] = 1,
    ACTIONS(238), 1,
      anon_sym_LF,
  [681] = 1,
    ACTIONS(240), 1,
      anon_sym_LF,
  [685] = 1,
    ACTIONS(242), 1,
      anon_sym_LF,
  [689] = 1,
    ACTIONS(244), 1,
      anon_sym_LT,
  [693] = 1,
    ACTIONS(246), 1,
      anon_sym_LF,
  [697] = 1,
    ACTIONS(248), 1,
      anon_sym_LF,
  [701] = 1,
    ACTIONS(250), 1,
      anon_sym_LF,
  [705] = 1,
    ACTIONS(252), 1,
      anon_sym_LF,
  [709] = 1,
    ACTIONS(254), 1,
      anon_sym_SPACE,
  [713] = 1,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
  [717] = 1,
    ACTIONS(258), 1,
      aux_sym_character_token3,
  [721] = 1,
    ACTIONS(260), 1,
      aux_sym_character_token3,
  [725] = 1,
    ACTIONS(262), 1,
      anon_sym_LF,
  [729] = 1,
    ACTIONS(264), 1,
      aux_sym_scene_number_token1,
  [733] = 1,
    ACTIONS(266), 1,
      anon_sym_LF,
  [737] = 1,
    ACTIONS(268), 1,
      anon_sym_LF,
  [741] = 1,
    ACTIONS(270), 1,
      anon_sym_RBRACK_RBRACK,
  [745] = 1,
    ACTIONS(272), 1,
      sym_description,
  [749] = 1,
    ACTIONS(274), 1,
      sym_description,
  [753] = 1,
    ACTIONS(276), 1,
      aux_sym_character_token3,
  [757] = 1,
    ACTIONS(278), 1,
      aux_sym_character_token3,
  [761] = 1,
    ACTIONS(280), 1,
      sym_note_content,
  [765] = 1,
    ACTIONS(282), 1,
      anon_sym_LF,
  [769] = 1,
    ACTIONS(284), 1,
      anon_sym_POUND,
  [773] = 1,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
  [777] = 1,
    ACTIONS(288), 1,
      anon_sym_LF,
  [781] = 1,
    ACTIONS(290), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 144,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 202,
  [SMALL_STATE(14)] = 230,
  [SMALL_STATE(15)] = 253,
  [SMALL_STATE(16)] = 274,
  [SMALL_STATE(17)] = 295,
  [SMALL_STATE(18)] = 315,
  [SMALL_STATE(19)] = 335,
  [SMALL_STATE(20)] = 355,
  [SMALL_STATE(21)] = 375,
  [SMALL_STATE(22)] = 395,
  [SMALL_STATE(23)] = 415,
  [SMALL_STATE(24)] = 435,
  [SMALL_STATE(25)] = 455,
  [SMALL_STATE(26)] = 475,
  [SMALL_STATE(27)] = 495,
  [SMALL_STATE(28)] = 515,
  [SMALL_STATE(29)] = 535,
  [SMALL_STATE(30)] = 555,
  [SMALL_STATE(31)] = 575,
  [SMALL_STATE(32)] = 587,
  [SMALL_STATE(33)] = 597,
  [SMALL_STATE(34)] = 604,
  [SMALL_STATE(35)] = 609,
  [SMALL_STATE(36)] = 616,
  [SMALL_STATE(37)] = 623,
  [SMALL_STATE(38)] = 628,
  [SMALL_STATE(39)] = 633,
  [SMALL_STATE(40)] = 637,
  [SMALL_STATE(41)] = 641,
  [SMALL_STATE(42)] = 645,
  [SMALL_STATE(43)] = 649,
  [SMALL_STATE(44)] = 653,
  [SMALL_STATE(45)] = 657,
  [SMALL_STATE(46)] = 661,
  [SMALL_STATE(47)] = 665,
  [SMALL_STATE(48)] = 669,
  [SMALL_STATE(49)] = 673,
  [SMALL_STATE(50)] = 677,
  [SMALL_STATE(51)] = 681,
  [SMALL_STATE(52)] = 685,
  [SMALL_STATE(53)] = 689,
  [SMALL_STATE(54)] = 693,
  [SMALL_STATE(55)] = 697,
  [SMALL_STATE(56)] = 701,
  [SMALL_STATE(57)] = 705,
  [SMALL_STATE(58)] = 709,
  [SMALL_STATE(59)] = 713,
  [SMALL_STATE(60)] = 717,
  [SMALL_STATE(61)] = 721,
  [SMALL_STATE(62)] = 725,
  [SMALL_STATE(63)] = 729,
  [SMALL_STATE(64)] = 733,
  [SMALL_STATE(65)] = 737,
  [SMALL_STATE(66)] = 741,
  [SMALL_STATE(67)] = 745,
  [SMALL_STATE(68)] = 749,
  [SMALL_STATE(69)] = 753,
  [SMALL_STATE(70)] = 757,
  [SMALL_STATE(71)] = 761,
  [SMALL_STATE(72)] = 765,
  [SMALL_STATE(73)] = 769,
  [SMALL_STATE(74)] = 773,
  [SMALL_STATE(75)] = 777,
  [SMALL_STATE(76)] = 781,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_centered, 4, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_centered, 4, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 4, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synopsis, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synopsis, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 3, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_break, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_break, 2, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_character, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [286] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_number, 3, 0, 0),
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
