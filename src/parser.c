#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 84
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
  anon_sym_POUND = 5,
  aux_sym_scene_number_token1 = 6,
  aux_sym_character_token1 = 7,
  aux_sym_character_token2 = 8,
  aux_sym_character_token3 = 9,
  aux_sym_character_token4 = 10,
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
  [anon_sym_POUND] = "#",
  [aux_sym_scene_number_token1] = "scene_number_token1",
  [aux_sym_character_token1] = "character_token1",
  [aux_sym_character_token2] = "character_token2",
  [aux_sym_character_token3] = "character_token3",
  [aux_sym_character_token4] = "character_token4",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_scene_number_token1] = aux_sym_scene_number_token1,
  [aux_sym_character_token1] = aux_sym_character_token1,
  [aux_sym_character_token2] = aux_sym_character_token2,
  [aux_sym_character_token3] = aux_sym_character_token3,
  [aux_sym_character_token4] = aux_sym_character_token4,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == ']') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '(') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '^') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '#') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(10);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        ' ', 11,
        '#', 30,
        '(', 42,
        ')', 45,
        '*', 14,
        '<', 55,
        ']', 15,
        '^', 40,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == ']') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n') SKIP(13);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(16);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(67);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 17:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 18:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(52);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') SKIP(20);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') SKIP(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(28);
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
      if (lookahead == '\t') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(27);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(66);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(29);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(66);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_scene_number_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(64);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(64);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(64);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_character_token1);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(64);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_character_token2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_character_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_character_token4);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LF2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_note_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_note_content);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_boneyard_content);
      if (lookahead == '*') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_boneyard_content);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_centered_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_centered_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_centered_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '(') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '\n') SKIP(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(64);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(64);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(64);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == '^') ADVANCE(32);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(64);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_line);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(64);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_description);
      if (lookahead == '\t') ADVANCE(66);
      if (lookahead == ' ') ADVANCE(27);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_description);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(67);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 20, .external_lex_state = 2},
  [2] = {.lex_state = 21, .external_lex_state = 2},
  [3] = {.lex_state = 21, .external_lex_state = 2},
  [4] = {.lex_state = 21, .external_lex_state = 2},
  [5] = {.lex_state = 21, .external_lex_state = 2},
  [6] = {.lex_state = 20, .external_lex_state = 3},
  [7] = {.lex_state = 20, .external_lex_state = 3},
  [8] = {.lex_state = 20, .external_lex_state = 3},
  [9] = {.lex_state = 20, .external_lex_state = 3},
  [10] = {.lex_state = 20, .external_lex_state = 2},
  [11] = {.lex_state = 20, .external_lex_state = 2},
  [12] = {.lex_state = 21, .external_lex_state = 4},
  [13] = {.lex_state = 20, .external_lex_state = 3},
  [14] = {.lex_state = 21, .external_lex_state = 4},
  [15] = {.lex_state = 21, .external_lex_state = 4},
  [16] = {.lex_state = 21, .external_lex_state = 4},
  [17] = {.lex_state = 21, .external_lex_state = 4},
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
  [31] = {.lex_state = 21, .external_lex_state = 2},
  [32] = {.lex_state = 21, .external_lex_state = 2},
  [33] = {.lex_state = 21, .external_lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0, .external_lex_state = 5},
  [38] = {.lex_state = 0, .external_lex_state = 6},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 0, .external_lex_state = 6},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0, .external_lex_state = 6},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0, .external_lex_state = 6},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 51},
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
    [sym_document] = STATE(72),
    [sym_title_page] = STATE(5),
    [sym__element] = STATE(2),
    [sym_title_page_field] = STATE(11),
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
    [aux_sym_title_page_repeat1] = STATE(11),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(9), 1,
      aux_sym_character_token1,
    ACTIONS(11), 1,
      aux_sym_transition_token1,
    ACTIONS(13), 1,
      sym_line,
    ACTIONS(15), 1,
      sym_scene_start,
    ACTIONS(17), 1,
      sym_section_start,
    ACTIONS(19), 1,
      sym_note_start,
    ACTIONS(21), 1,
      sym_forced_action_start,
    ACTIONS(23), 1,
      sym_forced_character_start,
    ACTIONS(25), 1,
      sym_forced_transition_start,
    ACTIONS(27), 1,
      sym_lyric_start,
    ACTIONS(29), 1,
      sym_centered_start,
    ACTIONS(31), 1,
      sym_page_break_marker,
    ACTIONS(33), 1,
      sym_synopsis_start,
    ACTIONS(35), 1,
      sym_boneyard_start,
    ACTIONS(37), 1,
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
  [64] = 17,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      aux_sym_character_token1,
    ACTIONS(44), 1,
      aux_sym_transition_token1,
    ACTIONS(47), 1,
      sym_line,
    ACTIONS(50), 1,
      sym_scene_start,
    ACTIONS(53), 1,
      sym_section_start,
    ACTIONS(56), 1,
      sym_note_start,
    ACTIONS(59), 1,
      sym_forced_action_start,
    ACTIONS(62), 1,
      sym_forced_character_start,
    ACTIONS(65), 1,
      sym_forced_transition_start,
    ACTIONS(68), 1,
      sym_lyric_start,
    ACTIONS(71), 1,
      sym_centered_start,
    ACTIONS(74), 1,
      sym_page_break_marker,
    ACTIONS(77), 1,
      sym_synopsis_start,
    ACTIONS(80), 1,
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
  [128] = 17,
    ACTIONS(9), 1,
      aux_sym_character_token1,
    ACTIONS(11), 1,
      aux_sym_transition_token1,
    ACTIONS(13), 1,
      sym_line,
    ACTIONS(15), 1,
      sym_scene_start,
    ACTIONS(17), 1,
      sym_section_start,
    ACTIONS(19), 1,
      sym_note_start,
    ACTIONS(21), 1,
      sym_forced_action_start,
    ACTIONS(23), 1,
      sym_forced_character_start,
    ACTIONS(25), 1,
      sym_forced_transition_start,
    ACTIONS(27), 1,
      sym_lyric_start,
    ACTIONS(29), 1,
      sym_centered_start,
    ACTIONS(31), 1,
      sym_page_break_marker,
    ACTIONS(33), 1,
      sym_synopsis_start,
    ACTIONS(35), 1,
      sym_boneyard_start,
    ACTIONS(83), 1,
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
  [192] = 17,
    ACTIONS(9), 1,
      aux_sym_character_token1,
    ACTIONS(11), 1,
      aux_sym_transition_token1,
    ACTIONS(13), 1,
      sym_line,
    ACTIONS(15), 1,
      sym_scene_start,
    ACTIONS(17), 1,
      sym_section_start,
    ACTIONS(19), 1,
      sym_note_start,
    ACTIONS(21), 1,
      sym_forced_action_start,
    ACTIONS(23), 1,
      sym_forced_character_start,
    ACTIONS(25), 1,
      sym_forced_transition_start,
    ACTIONS(27), 1,
      sym_lyric_start,
    ACTIONS(29), 1,
      sym_centered_start,
    ACTIONS(31), 1,
      sym_page_break_marker,
    ACTIONS(33), 1,
      sym_synopsis_start,
    ACTIONS(35), 1,
      sym_boneyard_start,
    ACTIONS(37), 1,
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
  [256] = 4,
    ACTIONS(89), 1,
      sym_title_continuation,
    STATE(7), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(87), 5,
      sym_title_key,
      sym_title_key_with_space,
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
  [284] = 4,
    ACTIONS(95), 1,
      sym_title_continuation,
    STATE(7), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(93), 5,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [312] = 4,
    ACTIONS(89), 1,
      sym_title_continuation,
    STATE(6), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(100), 5,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(98), 12,
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
  [340] = 4,
    ACTIONS(89), 1,
      sym_title_continuation,
    STATE(7), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(100), 5,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(98), 12,
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
  [368] = 5,
    ACTIONS(104), 1,
      sym_title_key,
    ACTIONS(107), 1,
      sym_title_key_with_space,
    STATE(10), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(110), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [398] = 5,
    ACTIONS(5), 1,
      sym_title_key,
    ACTIONS(7), 1,
      sym_title_key_with_space,
    STATE(10), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(114), 3,
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
  [428] = 5,
    ACTIONS(120), 1,
      sym_blank_line,
    ACTIONS(122), 1,
      sym_dialogue_line_start,
    STATE(14), 1,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(118), 3,
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
  [457] = 2,
    ACTIONS(93), 5,
      sym_title_key,
      sym_title_key_with_space,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(91), 13,
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
  [480] = 4,
    ACTIONS(128), 1,
      sym_dialogue_line_start,
    STATE(14), 1,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(126), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(124), 13,
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
      sym_blank_line,
      ts_builtin_sym_end,
  [507] = 2,
    ACTIONS(133), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(131), 14,
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
      sym_blank_line,
      sym_dialogue_line_start,
      ts_builtin_sym_end,
  [529] = 2,
    ACTIONS(126), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(124), 14,
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
      sym_blank_line,
      sym_dialogue_line_start,
      ts_builtin_sym_end,
  [551] = 2,
    ACTIONS(137), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(135), 14,
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
      sym_blank_line,
      sym_dialogue_line_start,
      ts_builtin_sym_end,
  [573] = 2,
    ACTIONS(141), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(139), 12,
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
  [593] = 2,
    ACTIONS(145), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(143), 12,
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
  [613] = 2,
    ACTIONS(149), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
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
  [633] = 2,
    ACTIONS(153), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(151), 12,
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
    ACTIONS(157), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(155), 12,
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
  [673] = 2,
    ACTIONS(161), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(159), 12,
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
  [693] = 2,
    ACTIONS(165), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(163), 12,
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
  [713] = 2,
    ACTIONS(169), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(167), 12,
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
  [733] = 2,
    ACTIONS(173), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(171), 12,
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
  [753] = 2,
    ACTIONS(177), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(175), 12,
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
  [773] = 2,
    ACTIONS(181), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(179), 12,
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
  [793] = 2,
    ACTIONS(185), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(183), 12,
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
  [813] = 2,
    ACTIONS(189), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(187), 12,
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
  [833] = 2,
    ACTIONS(193), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(191), 12,
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
  [853] = 2,
    ACTIONS(197), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(195), 12,
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
  [873] = 2,
    ACTIONS(201), 3,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_line,
    ACTIONS(199), 12,
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
  [893] = 3,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      sym_line,
    STATE(16), 2,
      sym_dialogue,
      sym_parenthetical,
  [904] = 3,
    ACTIONS(207), 1,
      anon_sym_LF,
    ACTIONS(209), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_scene_number,
  [914] = 3,
    ACTIONS(209), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      anon_sym_LF,
    STATE(69), 1,
      sym_scene_number,
  [924] = 2,
    ACTIONS(89), 1,
      sym_title_continuation,
    STATE(9), 1,
      aux_sym_title_page_field_repeat1,
  [931] = 2,
    ACTIONS(122), 1,
      sym_dialogue_line_start,
    STATE(12), 1,
      aux_sym_dialogue_block_repeat1,
  [938] = 2,
    ACTIONS(213), 1,
      anon_sym_LF,
    ACTIONS(215), 1,
      aux_sym_character_token4,
  [945] = 2,
    ACTIONS(217), 1,
      anon_sym_LF,
    ACTIONS(219), 1,
      anon_sym_SPACE,
  [952] = 2,
    ACTIONS(221), 1,
      anon_sym_SPACE,
    ACTIONS(223), 1,
      sym_description,
  [959] = 1,
    ACTIONS(225), 1,
      anon_sym_LF,
  [963] = 1,
    ACTIONS(227), 1,
      aux_sym_parenthetical_token1,
  [967] = 1,
    ACTIONS(229), 1,
      sym_dialogue_line_start,
  [971] = 1,
    ACTIONS(231), 1,
      sym_centered_text,
  [975] = 1,
    ACTIONS(233), 1,
      aux_sym_character_token3,
  [979] = 1,
    ACTIONS(235), 1,
      aux_sym_character_token3,
  [983] = 1,
    ACTIONS(237), 1,
      aux_sym_scene_number_token1,
  [987] = 1,
    ACTIONS(211), 1,
      anon_sym_LF,
  [991] = 1,
    ACTIONS(239), 1,
      anon_sym_LF,
  [995] = 1,
    ACTIONS(241), 1,
      anon_sym_LF,
  [999] = 1,
    ACTIONS(243), 1,
      aux_sym_character_token3,
  [1003] = 1,
    ACTIONS(245), 1,
      sym_dialogue_line_start,
  [1007] = 1,
    ACTIONS(247), 1,
      anon_sym_LF,
  [1011] = 1,
    ACTIONS(249), 1,
      anon_sym_STAR_SLASH,
  [1015] = 1,
    ACTIONS(251), 1,
      anon_sym_LF,
  [1019] = 1,
    ACTIONS(253), 1,
      anon_sym_LF,
  [1023] = 1,
    ACTIONS(255), 1,
      sym_centered_end,
  [1027] = 1,
    ACTIONS(257), 1,
      anon_sym_LF,
  [1031] = 1,
    ACTIONS(259), 1,
      anon_sym_LF,
  [1035] = 1,
    ACTIONS(261), 1,
      aux_sym_character_token3,
  [1039] = 1,
    ACTIONS(263), 1,
      aux_sym_character_token3,
  [1043] = 1,
    ACTIONS(265), 1,
      anon_sym_LF,
  [1047] = 1,
    ACTIONS(267), 1,
      anon_sym_LF2,
  [1051] = 1,
    ACTIONS(269), 1,
      anon_sym_LF,
  [1055] = 1,
    ACTIONS(271), 1,
      anon_sym_LF,
  [1059] = 1,
    ACTIONS(273), 1,
      anon_sym_RBRACK_RBRACK,
  [1063] = 1,
    ACTIONS(275), 1,
      sym_description,
  [1067] = 1,
    ACTIONS(277), 1,
      anon_sym_LF,
  [1071] = 1,
    ACTIONS(279), 1,
      anon_sym_POUND,
  [1075] = 1,
    ACTIONS(281), 1,
      sym_description,
  [1079] = 1,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
  [1083] = 1,
    ACTIONS(285), 1,
      sym_dialogue_line_start,
  [1087] = 1,
    ACTIONS(287), 1,
      anon_sym_LF,
  [1091] = 1,
    ACTIONS(289), 1,
      anon_sym_LF,
  [1095] = 1,
    ACTIONS(291), 1,
      sym_note_content,
  [1099] = 1,
    ACTIONS(293), 1,
      aux_sym_character_token2,
  [1103] = 1,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
  [1107] = 1,
    ACTIONS(297), 1,
      sym_description,
  [1111] = 1,
    ACTIONS(299), 1,
      anon_sym_LF,
  [1115] = 1,
    ACTIONS(301), 1,
      anon_sym_LF,
  [1119] = 1,
    ACTIONS(303), 1,
      anon_sym_LF,
  [1123] = 1,
    ACTIONS(305), 1,
      sym_boneyard_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 284,
  [SMALL_STATE(8)] = 312,
  [SMALL_STATE(9)] = 340,
  [SMALL_STATE(10)] = 368,
  [SMALL_STATE(11)] = 398,
  [SMALL_STATE(12)] = 428,
  [SMALL_STATE(13)] = 457,
  [SMALL_STATE(14)] = 480,
  [SMALL_STATE(15)] = 507,
  [SMALL_STATE(16)] = 529,
  [SMALL_STATE(17)] = 551,
  [SMALL_STATE(18)] = 573,
  [SMALL_STATE(19)] = 593,
  [SMALL_STATE(20)] = 613,
  [SMALL_STATE(21)] = 633,
  [SMALL_STATE(22)] = 653,
  [SMALL_STATE(23)] = 673,
  [SMALL_STATE(24)] = 693,
  [SMALL_STATE(25)] = 713,
  [SMALL_STATE(26)] = 733,
  [SMALL_STATE(27)] = 753,
  [SMALL_STATE(28)] = 773,
  [SMALL_STATE(29)] = 793,
  [SMALL_STATE(30)] = 813,
  [SMALL_STATE(31)] = 833,
  [SMALL_STATE(32)] = 853,
  [SMALL_STATE(33)] = 873,
  [SMALL_STATE(34)] = 893,
  [SMALL_STATE(35)] = 904,
  [SMALL_STATE(36)] = 914,
  [SMALL_STATE(37)] = 924,
  [SMALL_STATE(38)] = 931,
  [SMALL_STATE(39)] = 938,
  [SMALL_STATE(40)] = 945,
  [SMALL_STATE(41)] = 952,
  [SMALL_STATE(42)] = 959,
  [SMALL_STATE(43)] = 963,
  [SMALL_STATE(44)] = 967,
  [SMALL_STATE(45)] = 971,
  [SMALL_STATE(46)] = 975,
  [SMALL_STATE(47)] = 979,
  [SMALL_STATE(48)] = 983,
  [SMALL_STATE(49)] = 987,
  [SMALL_STATE(50)] = 991,
  [SMALL_STATE(51)] = 995,
  [SMALL_STATE(52)] = 999,
  [SMALL_STATE(53)] = 1003,
  [SMALL_STATE(54)] = 1007,
  [SMALL_STATE(55)] = 1011,
  [SMALL_STATE(56)] = 1015,
  [SMALL_STATE(57)] = 1019,
  [SMALL_STATE(58)] = 1023,
  [SMALL_STATE(59)] = 1027,
  [SMALL_STATE(60)] = 1031,
  [SMALL_STATE(61)] = 1035,
  [SMALL_STATE(62)] = 1039,
  [SMALL_STATE(63)] = 1043,
  [SMALL_STATE(64)] = 1047,
  [SMALL_STATE(65)] = 1051,
  [SMALL_STATE(66)] = 1055,
  [SMALL_STATE(67)] = 1059,
  [SMALL_STATE(68)] = 1063,
  [SMALL_STATE(69)] = 1067,
  [SMALL_STATE(70)] = 1071,
  [SMALL_STATE(71)] = 1075,
  [SMALL_STATE(72)] = 1079,
  [SMALL_STATE(73)] = 1083,
  [SMALL_STATE(74)] = 1087,
  [SMALL_STATE(75)] = 1091,
  [SMALL_STATE(76)] = 1095,
  [SMALL_STATE(77)] = 1099,
  [SMALL_STATE(78)] = 1103,
  [SMALL_STATE(79)] = 1107,
  [SMALL_STATE(80)] = 1111,
  [SMALL_STATE(81)] = 1115,
  [SMALL_STATE(82)] = 1119,
  [SMALL_STATE(83)] = 1123,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 4, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_centered, 4, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_centered, 4, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synopsis, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synopsis, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_break, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_break, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 3, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [283] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_number, 3, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
    [ts_external_token_blank_line] = true,
    [ts_external_token_dialogue_line_start] = true,
  },
  [5] = {
    [ts_external_token_title_continuation] = true,
  },
  [6] = {
    [ts_external_token_dialogue_line_start] = true,
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
