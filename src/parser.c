#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
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
  aux_sym_parenthetical_token1 = 15,
  anon_sym_LPAREN = 16,
  aux_sym_parenthetical_token2 = 17,
  anon_sym_RPAREN = 18,
  aux_sym_transition_token1 = 19,
  anon_sym_RBRACK_RBRACK = 20,
  sym_note_content = 21,
  anon_sym_STAR_SLASH = 22,
  sym_boneyard_content = 23,
  sym_centered_text = 24,
  sym_centered_end = 25,
  sym_escaped_char = 26,
  anon_sym_STAR_STAR_STAR = 27,
  aux_sym_bold_italic_token1 = 28,
  anon_sym_STAR_STAR = 29,
  anon_sym_STAR = 30,
  anon_sym__ = 31,
  aux_sym_underline_token1 = 32,
  sym_uppercase_text = 33,
  sym_paren_text = 34,
  sym_text = 35,
  sym_description = 36,
  sym_scene_start = 37,
  sym_section_start = 38,
  sym_note_start = 39,
  sym_forced_action_start = 40,
  sym_forced_character_start = 41,
  sym_forced_transition_start = 42,
  sym_lyric_start = 43,
  sym_centered_start = 44,
  sym_page_break_marker = 45,
  sym_synopsis_start = 46,
  sym_boneyard_start = 47,
  sym_title_continuation = 48,
  sym_blank_line = 49,
  sym_dialogue_line_start = 50,
  sym_document = 51,
  sym_title_page = 52,
  sym__element = 53,
  sym_section_block = 54,
  sym_scene_block = 55,
  sym__scene_content = 56,
  sym_title_page_field = 57,
  sym_scene_heading = 58,
  sym_scene_number = 59,
  sym_character = 60,
  sym_dialogue_block = 61,
  sym_dialogue = 62,
  sym_parenthetical = 63,
  sym_action = 64,
  sym_transition = 65,
  sym_section_heading = 66,
  sym_note = 67,
  sym_boneyard = 68,
  sym_page_break = 69,
  sym_synopsis = 70,
  sym_lyric = 71,
  sym_centered = 72,
  sym__action_inline_content = 73,
  sym__inline_content = 74,
  sym_bold_italic = 75,
  sym_bold = 76,
  sym_italic = 77,
  sym_underline = 78,
  aux_sym_document_repeat1 = 79,
  aux_sym_title_page_repeat1 = 80,
  aux_sym_section_block_repeat1 = 81,
  aux_sym_scene_block_repeat1 = 82,
  aux_sym_title_page_field_repeat1 = 83,
  aux_sym_dialogue_block_repeat1 = 84,
  aux_sym_dialogue_repeat1 = 85,
  aux_sym_action_repeat1 = 86,
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
  [aux_sym_parenthetical_token1] = "parenthetical_token1",
  [anon_sym_LPAREN] = "(",
  [aux_sym_parenthetical_token2] = "parenthetical_token2",
  [anon_sym_RPAREN] = ")",
  [aux_sym_transition_token1] = "transition_token1",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [sym_note_content] = "note_content",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_boneyard_content] = "boneyard_content",
  [sym_centered_text] = "centered_text",
  [sym_centered_end] = "centered_end",
  [sym_escaped_char] = "escaped_char",
  [anon_sym_STAR_STAR_STAR] = "***",
  [aux_sym_bold_italic_token1] = "bold_italic_token1",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym__] = "_",
  [aux_sym_underline_token1] = "underline_token1",
  [sym_uppercase_text] = "uppercase_text",
  [sym_paren_text] = "paren_text",
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
  [sym__action_inline_content] = "_action_inline_content",
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
  [aux_sym_action_repeat1] = "action_repeat1",
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
  [aux_sym_parenthetical_token1] = aux_sym_parenthetical_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_parenthetical_token2] = aux_sym_parenthetical_token2,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_transition_token1] = aux_sym_transition_token1,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [sym_note_content] = sym_note_content,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_boneyard_content] = sym_boneyard_content,
  [sym_centered_text] = sym_centered_text,
  [sym_centered_end] = sym_centered_end,
  [sym_escaped_char] = sym_escaped_char,
  [anon_sym_STAR_STAR_STAR] = anon_sym_STAR_STAR_STAR,
  [aux_sym_bold_italic_token1] = aux_sym_bold_italic_token1,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym__] = anon_sym__,
  [aux_sym_underline_token1] = aux_sym_underline_token1,
  [sym_uppercase_text] = sym_uppercase_text,
  [sym_paren_text] = sym_paren_text,
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
  [sym__action_inline_content] = sym__action_inline_content,
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
  [aux_sym_action_repeat1] = aux_sym_action_repeat1,
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
  [aux_sym_parenthetical_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_parenthetical_token2] = {
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
  [sym_escaped_char] = {
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
  [sym_paren_text] = {
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
  [sym__action_inline_content] = {
    .visible = false,
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
  [aux_sym_action_repeat1] = {
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
  [53] = 52,
  [54] = 51,
  [55] = 49,
  [56] = 50,
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
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 85,
  [128] = 84,
  [129] = 83,
  [130] = 82,
  [131] = 109,
  [132] = 108,
  [133] = 107,
  [134] = 104,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      ADVANCE_MAP(
        ' ', 20,
        '#', 66,
        '(', 75,
        ')', 78,
        '*', 96,
        '-', 58,
        '.', 59,
        '<', 88,
        '\\', 41,
        ']', 35,
        '_', 97,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == 'O') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '_') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(116);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '_') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(116);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '_') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(116);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '-') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '^') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(11);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '-') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '_') ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(92);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(87);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '-') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == ' ') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(19);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        ' ', 20,
        '#', 66,
        '(', 75,
        ')', 78,
        '*', 96,
        '-', 58,
        '.', 59,
        '<', 88,
        '\\', 41,
        ']', 35,
        '^', 71,
        '_', 97,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        ' ', 20,
        '#', 66,
        '(', 75,
        ')', 78,
        '*', 96,
        '-', 58,
        '.', 59,
        '<', 88,
        '\\', 41,
        ']', 35,
        '_', 97,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '^') ADVANCE(1);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '^') ADVANCE(1);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '/') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == ']') ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == '^') ADVANCE(1);
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2);
      END_STATE();
    case 37:
      if (lookahead == ' ' ||
          lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(38);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 39:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(82);
      END_STATE();
    case 40:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(77);
      END_STATE();
    case 41:
      if (('(' <= lookahead && lookahead <= '*') ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '_') ADVANCE(89);
      END_STATE();
    case 42:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 43:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(85);
      END_STATE();
    case 45:
      if (eof) ADVANCE(47);
      if (lookahead == '\n') SKIP(45);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '_') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(116);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '\n') SKIP(46);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '_') ADVANCE(97);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead)) ADVANCE(116);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == ' ') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(61);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_title_key);
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_title_key_with_space);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == ' ') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_scene_location);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == ' ') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_scene_location);
      if (lookahead == '\n') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_scene_location);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '-') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_scene_time);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_scene_time);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_scene_number_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_character_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_character_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_character_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_character_token3);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LF2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_parenthetical_token1);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(109);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_parenthetical_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_parenthetical_token2);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_transition_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_note_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_note_content);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_boneyard_content);
      if (lookahead == '*') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_boneyard_content);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_centered_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '<') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_centered_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_centered_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_escaped_char);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_bold_italic_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '*') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_bold_italic_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '*') ADVANCE(90);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(94);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_underline_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '_') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_underline_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '_') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_uppercase_text);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_uppercase_text);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == 'O') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_uppercase_text);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '\'' ||
          lookahead == '(') ADVANCE(37);
      if (lookahead == ')' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_uppercase_text);
      if (lookahead == ' ') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_paren_text);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == ' ') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2);
      if (lookahead != 0 &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(2);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(74);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '^') ADVANCE(106);
      if (lookahead == ' ' ||
          lookahead == '\'') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ' ' ||
          lookahead == '\'') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == ')' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ':') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(34);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '(' || '*' < lookahead) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '_') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_description);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if ((0x0b <= lookahead && lookahead <= '\r')) ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 45, .external_lex_state = 2},
  [2] = {.lex_state = 46, .external_lex_state = 2},
  [3] = {.lex_state = 46, .external_lex_state = 2},
  [4] = {.lex_state = 46, .external_lex_state = 2},
  [5] = {.lex_state = 46, .external_lex_state = 2},
  [6] = {.lex_state = 46, .external_lex_state = 2},
  [7] = {.lex_state = 46, .external_lex_state = 2},
  [8] = {.lex_state = 46, .external_lex_state = 2},
  [9] = {.lex_state = 46, .external_lex_state = 2},
  [10] = {.lex_state = 46, .external_lex_state = 2},
  [11] = {.lex_state = 46, .external_lex_state = 2},
  [12] = {.lex_state = 45, .external_lex_state = 3},
  [13] = {.lex_state = 45, .external_lex_state = 3},
  [14] = {.lex_state = 45, .external_lex_state = 2},
  [15] = {.lex_state = 45, .external_lex_state = 2},
  [16] = {.lex_state = 45, .external_lex_state = 3},
  [17] = {.lex_state = 45, .external_lex_state = 3},
  [18] = {.lex_state = 45, .external_lex_state = 3},
  [19] = {.lex_state = 46, .external_lex_state = 4},
  [20] = {.lex_state = 46, .external_lex_state = 4},
  [21] = {.lex_state = 46, .external_lex_state = 4},
  [22] = {.lex_state = 46, .external_lex_state = 4},
  [23] = {.lex_state = 46, .external_lex_state = 4},
  [24] = {.lex_state = 46, .external_lex_state = 4},
  [25] = {.lex_state = 46, .external_lex_state = 4},
  [26] = {.lex_state = 46, .external_lex_state = 2},
  [27] = {.lex_state = 46, .external_lex_state = 2},
  [28] = {.lex_state = 46, .external_lex_state = 2},
  [29] = {.lex_state = 46, .external_lex_state = 2},
  [30] = {.lex_state = 46, .external_lex_state = 2},
  [31] = {.lex_state = 46, .external_lex_state = 2},
  [32] = {.lex_state = 46, .external_lex_state = 2},
  [33] = {.lex_state = 46, .external_lex_state = 2},
  [34] = {.lex_state = 46, .external_lex_state = 2},
  [35] = {.lex_state = 46, .external_lex_state = 2},
  [36] = {.lex_state = 46, .external_lex_state = 2},
  [37] = {.lex_state = 46, .external_lex_state = 2},
  [38] = {.lex_state = 46, .external_lex_state = 2},
  [39] = {.lex_state = 46, .external_lex_state = 2},
  [40] = {.lex_state = 46, .external_lex_state = 2},
  [41] = {.lex_state = 46, .external_lex_state = 2},
  [42] = {.lex_state = 46, .external_lex_state = 2},
  [43] = {.lex_state = 46, .external_lex_state = 2},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 18},
  [67] = {.lex_state = 0, .external_lex_state = 5},
  [68] = {.lex_state = 19},
  [69] = {.lex_state = 0, .external_lex_state = 6},
  [70] = {.lex_state = 31},
  [71] = {.lex_state = 0, .external_lex_state = 5},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 39},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 31},
  [84] = {.lex_state = 32},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 40},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 32},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0, .external_lex_state = 5},
  [100] = {.lex_state = 38},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 40},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 14},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0, .external_lex_state = 5},
  [114] = {.lex_state = 38},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 84},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 15},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 15},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 32},
  [129] = {.lex_state = 31},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 13},
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
    [sym_escaped_char] = ACTIONS(1),
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
    [sym_document] = STATE(103),
    [sym_title_page] = STATE(5),
    [sym__element] = STATE(3),
    [sym_section_block] = STATE(3),
    [sym_scene_block] = STATE(3),
    [sym_title_page_field] = STATE(15),
    [sym_scene_heading] = STATE(10),
    [sym_character] = STATE(67),
    [sym_dialogue_block] = STATE(3),
    [sym_action] = STATE(3),
    [sym_transition] = STATE(3),
    [sym_section_heading] = STATE(7),
    [sym_note] = STATE(3),
    [sym_boneyard] = STATE(3),
    [sym_page_break] = STATE(3),
    [sym_synopsis] = STATE(3),
    [sym_lyric] = STATE(3),
    [sym_centered] = STATE(3),
    [sym__action_inline_content] = STATE(45),
    [sym_bold_italic] = STATE(45),
    [sym_bold] = STATE(45),
    [sym_italic] = STATE(45),
    [sym_underline] = STATE(45),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_title_page_repeat1] = STATE(15),
    [aux_sym_action_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_title_key] = ACTIONS(5),
    [sym_title_key_with_space] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [aux_sym_character_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [sym_escaped_char] = ACTIONS(15),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(17),
    [anon_sym_STAR_STAR] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym__] = ACTIONS(23),
    [sym_uppercase_text] = ACTIONS(15),
    [sym_paren_text] = ACTIONS(15),
    [sym_text] = ACTIONS(15),
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
    [sym_scene_heading] = STATE(10),
    [sym_character] = STATE(67),
    [sym_dialogue_block] = STATE(2),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section_heading] = STATE(7),
    [sym_note] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym_page_break] = STATE(2),
    [sym_synopsis] = STATE(2),
    [sym_lyric] = STATE(2),
    [sym_centered] = STATE(2),
    [sym__action_inline_content] = STATE(45),
    [sym_bold_italic] = STATE(45),
    [sym_bold] = STATE(45),
    [sym_italic] = STATE(45),
    [sym_underline] = STATE(45),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_action_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_DOT] = ACTIONS(49),
    [aux_sym_character_token1] = ACTIONS(52),
    [aux_sym_transition_token1] = ACTIONS(55),
    [sym_escaped_char] = ACTIONS(58),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(61),
    [anon_sym_STAR_STAR] = ACTIONS(64),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym__] = ACTIONS(70),
    [sym_uppercase_text] = ACTIONS(58),
    [sym_paren_text] = ACTIONS(58),
    [sym_text] = ACTIONS(58),
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
    [sym__element] = STATE(2),
    [sym_section_block] = STATE(2),
    [sym_scene_block] = STATE(2),
    [sym_scene_heading] = STATE(10),
    [sym_character] = STATE(67),
    [sym_dialogue_block] = STATE(2),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section_heading] = STATE(7),
    [sym_note] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym_page_break] = STATE(2),
    [sym_synopsis] = STATE(2),
    [sym_lyric] = STATE(2),
    [sym_centered] = STATE(2),
    [sym__action_inline_content] = STATE(45),
    [sym_bold_italic] = STATE(45),
    [sym_bold] = STATE(45),
    [sym_italic] = STATE(45),
    [sym_underline] = STATE(45),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_action_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_DOT] = ACTIONS(9),
    [aux_sym_character_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [sym_escaped_char] = ACTIONS(15),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(17),
    [anon_sym_STAR_STAR] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym__] = ACTIONS(23),
    [sym_uppercase_text] = ACTIONS(15),
    [sym_paren_text] = ACTIONS(15),
    [sym_text] = ACTIONS(15),
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
    [sym_scene_heading] = STATE(10),
    [sym_character] = STATE(67),
    [sym_dialogue_block] = STATE(2),
    [sym_action] = STATE(2),
    [sym_transition] = STATE(2),
    [sym_section_heading] = STATE(7),
    [sym_note] = STATE(2),
    [sym_boneyard] = STATE(2),
    [sym_page_break] = STATE(2),
    [sym_synopsis] = STATE(2),
    [sym_lyric] = STATE(2),
    [sym_centered] = STATE(2),
    [sym__action_inline_content] = STATE(45),
    [sym_bold_italic] = STATE(45),
    [sym_bold] = STATE(45),
    [sym_italic] = STATE(45),
    [sym_underline] = STATE(45),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_action_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(9),
    [aux_sym_character_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [sym_escaped_char] = ACTIONS(15),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(17),
    [anon_sym_STAR_STAR] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym__] = ACTIONS(23),
    [sym_uppercase_text] = ACTIONS(15),
    [sym_paren_text] = ACTIONS(15),
    [sym_text] = ACTIONS(15),
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
    [sym_section_block] = STATE(4),
    [sym_scene_block] = STATE(4),
    [sym_scene_heading] = STATE(10),
    [sym_character] = STATE(67),
    [sym_dialogue_block] = STATE(4),
    [sym_action] = STATE(4),
    [sym_transition] = STATE(4),
    [sym_section_heading] = STATE(7),
    [sym_note] = STATE(4),
    [sym_boneyard] = STATE(4),
    [sym_page_break] = STATE(4),
    [sym_synopsis] = STATE(4),
    [sym_lyric] = STATE(4),
    [sym_centered] = STATE(4),
    [sym__action_inline_content] = STATE(45),
    [sym_bold_italic] = STATE(45),
    [sym_bold] = STATE(45),
    [sym_italic] = STATE(45),
    [sym_underline] = STATE(45),
    [aux_sym_document_repeat1] = STATE(4),
    [aux_sym_action_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_DOT] = ACTIONS(9),
    [aux_sym_character_token1] = ACTIONS(11),
    [aux_sym_transition_token1] = ACTIONS(13),
    [sym_escaped_char] = ACTIONS(15),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(17),
    [anon_sym_STAR_STAR] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym__] = ACTIONS(23),
    [sym_uppercase_text] = ACTIONS(15),
    [sym_paren_text] = ACTIONS(15),
    [sym_text] = ACTIONS(15),
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
    ACTIONS(17), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(19), 1,
      anon_sym_STAR_STAR,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
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
    STATE(10), 1,
      sym_scene_heading,
    STATE(67), 1,
      sym_character,
    ACTIONS(110), 2,
      sym_section_start,
      ts_builtin_sym_end,
    ACTIONS(15), 4,
      sym_escaped_char,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    STATE(45), 6,
      sym__action_inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_action_repeat1,
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
  [89] = 23,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(11), 1,
      aux_sym_character_token1,
    ACTIONS(13), 1,
      aux_sym_transition_token1,
    ACTIONS(17), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(19), 1,
      anon_sym_STAR_STAR,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
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
    STATE(10), 1,
      sym_scene_heading,
    STATE(67), 1,
      sym_character,
    ACTIONS(112), 2,
      sym_section_start,
      ts_builtin_sym_end,
    ACTIONS(15), 4,
      sym_escaped_char,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    STATE(45), 6,
      sym__action_inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_action_repeat1,
    STATE(6), 11,
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
  [178] = 23,
    ACTIONS(116), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      aux_sym_character_token1,
    ACTIONS(122), 1,
      aux_sym_transition_token1,
    ACTIONS(128), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(131), 1,
      anon_sym_STAR_STAR,
    ACTIONS(134), 1,
      anon_sym_STAR,
    ACTIONS(137), 1,
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
    STATE(10), 1,
      sym_scene_heading,
    STATE(67), 1,
      sym_character,
    ACTIONS(114), 2,
      sym_section_start,
      ts_builtin_sym_end,
    ACTIONS(125), 4,
      sym_escaped_char,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    STATE(45), 6,
      sym__action_inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_action_repeat1,
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
  [267] = 20,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(174), 1,
      aux_sym_character_token1,
    ACTIONS(177), 1,
      aux_sym_transition_token1,
    ACTIONS(183), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(186), 1,
      anon_sym_STAR_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(192), 1,
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
    STATE(67), 1,
      sym_character,
    ACTIONS(170), 4,
      sym_scene_start,
      sym_section_start,
      sym_page_break_marker,
      ts_builtin_sym_end,
    ACTIONS(180), 4,
      sym_escaped_char,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    STATE(45), 6,
      sym__action_inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_action_repeat1,
    STATE(11), 10,
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
  [348] = 20,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(223), 1,
      aux_sym_character_token1,
    ACTIONS(226), 1,
      aux_sym_transition_token1,
    ACTIONS(232), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(235), 1,
      anon_sym_STAR_STAR,
    ACTIONS(238), 1,
      anon_sym_STAR,
    ACTIONS(241), 1,
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
    STATE(67), 1,
      sym_character,
    ACTIONS(219), 4,
      sym_scene_start,
      sym_section_start,
      sym_page_break_marker,
      ts_builtin_sym_end,
    ACTIONS(229), 4,
      sym_escaped_char,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    STATE(45), 6,
      sym__action_inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_action_repeat1,
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
  [429] = 20,
    ACTIONS(270), 1,
      anon_sym_DOT,
    ACTIONS(272), 1,
      aux_sym_character_token1,
    ACTIONS(275), 1,
      aux_sym_transition_token1,
    ACTIONS(281), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(284), 1,
      anon_sym_STAR_STAR,
    ACTIONS(287), 1,
      anon_sym_STAR,
    ACTIONS(290), 1,
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
    STATE(67), 1,
      sym_character,
    ACTIONS(268), 4,
      sym_scene_start,
      sym_section_start,
      sym_page_break_marker,
      ts_builtin_sym_end,
    ACTIONS(278), 4,
      sym_escaped_char,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    STATE(45), 6,
      sym__action_inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_action_repeat1,
    STATE(11), 10,
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
  [510] = 4,
    ACTIONS(321), 1,
      sym_title_continuation,
    STATE(12), 1,
      aux_sym_title_page_field_repeat1,
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
    ACTIONS(319), 13,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
  [546] = 4,
    ACTIONS(328), 1,
      sym_title_continuation,
    STATE(17), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(324), 12,
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
    ACTIONS(326), 13,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
  [582] = 5,
    ACTIONS(332), 1,
      sym_title_key,
    ACTIONS(335), 1,
      sym_title_key_with_space,
    STATE(14), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(338), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    ACTIONS(330), 12,
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
  [620] = 5,
    ACTIONS(5), 1,
      sym_title_key,
    ACTIONS(7), 1,
      sym_title_key_with_space,
    STATE(14), 2,
      sym_title_page_field,
      aux_sym_title_page_repeat1,
    ACTIONS(342), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    ACTIONS(340), 12,
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
  [658] = 4,
    ACTIONS(328), 1,
      sym_title_continuation,
    STATE(12), 1,
      aux_sym_title_page_field_repeat1,
    ACTIONS(324), 12,
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
    ACTIONS(326), 13,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
  [694] = 4,
    ACTIONS(328), 1,
      sym_title_continuation,
    STATE(12), 1,
      aux_sym_title_page_field_repeat1,
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
    ACTIONS(346), 13,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
  [730] = 2,
    ACTIONS(317), 13,
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
    ACTIONS(319), 13,
      sym_title_key,
      sym_title_key_with_space,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
  [761] = 4,
    ACTIONS(352), 1,
      sym_dialogue_line_start,
    STATE(20), 1,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(350), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [795] = 4,
    ACTIONS(358), 1,
      sym_dialogue_line_start,
    STATE(20), 1,
      aux_sym_dialogue_block_repeat1,
    ACTIONS(356), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [829] = 2,
    ACTIONS(363), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [858] = 2,
    ACTIONS(367), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [887] = 2,
    ACTIONS(356), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [916] = 2,
    ACTIONS(371), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    ACTIONS(369), 13,
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
  [945] = 2,
    ACTIONS(375), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    ACTIONS(373), 13,
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
  [974] = 2,
    ACTIONS(379), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1002] = 2,
    ACTIONS(383), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1030] = 2,
    ACTIONS(387), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1058] = 2,
    ACTIONS(391), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1086] = 2,
    ACTIONS(395), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1114] = 2,
    ACTIONS(399), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1142] = 2,
    ACTIONS(403), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1170] = 2,
    ACTIONS(407), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1198] = 2,
    ACTIONS(411), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1226] = 2,
    ACTIONS(415), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1254] = 2,
    ACTIONS(419), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1282] = 2,
    ACTIONS(423), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1310] = 2,
    ACTIONS(427), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1338] = 2,
    ACTIONS(431), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1366] = 2,
    ACTIONS(435), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1394] = 2,
    ACTIONS(439), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
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
  [1422] = 2,
    ACTIONS(443), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    ACTIONS(441), 12,
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
  [1450] = 2,
    ACTIONS(447), 11,
      anon_sym_DOT,
      aux_sym_character_token1,
      aux_sym_transition_token1,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    ACTIONS(445), 12,
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
  [1478] = 9,
    ACTIONS(449), 1,
      aux_sym_parenthetical_token1,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    ACTIONS(455), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_STAR_STAR,
    ACTIONS(459), 1,
      anon_sym_STAR,
    ACTIONS(461), 1,
      anon_sym__,
    STATE(23), 2,
      sym_dialogue,
      sym_parenthetical,
    ACTIONS(453), 3,
      sym_escaped_char,
      sym_uppercase_text,
      sym_text,
    STATE(48), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
  [1514] = 7,
    ACTIONS(17), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(19), 1,
      anon_sym_STAR_STAR,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(463), 1,
      anon_sym_LF,
    ACTIONS(465), 4,
      sym_escaped_char,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    STATE(46), 6,
      sym__action_inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_action_repeat1,
  [1544] = 7,
    ACTIONS(467), 1,
      anon_sym_LF,
    ACTIONS(472), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(475), 1,
      anon_sym_STAR_STAR,
    ACTIONS(478), 1,
      anon_sym_STAR,
    ACTIONS(481), 1,
      anon_sym__,
    ACTIONS(469), 4,
      sym_escaped_char,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
    STATE(46), 6,
      sym__action_inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_action_repeat1,
  [1574] = 7,
    ACTIONS(484), 1,
      anon_sym_LF2,
    ACTIONS(489), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(492), 1,
      anon_sym_STAR_STAR,
    ACTIONS(495), 1,
      anon_sym_STAR,
    ACTIONS(498), 1,
      anon_sym__,
    ACTIONS(486), 3,
      sym_escaped_char,
      sym_uppercase_text,
      sym_text,
    STATE(47), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
  [1603] = 7,
    ACTIONS(455), 1,
      anon_sym_STAR_STAR_STAR,
    ACTIONS(457), 1,
      anon_sym_STAR_STAR,
    ACTIONS(459), 1,
      anon_sym_STAR,
    ACTIONS(461), 1,
      anon_sym__,
    ACTIONS(501), 1,
      anon_sym_LF2,
    ACTIONS(503), 3,
      sym_escaped_char,
      sym_uppercase_text,
      sym_text,
    STATE(47), 6,
      sym__inline_content,
      sym_bold_italic,
      sym_bold,
      sym_italic,
      sym_underline,
      aux_sym_dialogue_repeat1,
  [1632] = 1,
    ACTIONS(505), 9,
      anon_sym_LF,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
  [1644] = 1,
    ACTIONS(507), 9,
      anon_sym_LF,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
  [1656] = 1,
    ACTIONS(509), 9,
      anon_sym_LF,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
  [1668] = 1,
    ACTIONS(511), 9,
      anon_sym_LF,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_paren_text,
      sym_text,
  [1680] = 2,
    ACTIONS(513), 1,
      anon_sym_LF2,
    ACTIONS(511), 7,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1693] = 2,
    ACTIONS(515), 1,
      anon_sym_LF2,
    ACTIONS(509), 7,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1706] = 2,
    ACTIONS(517), 1,
      anon_sym_LF2,
    ACTIONS(505), 7,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1719] = 2,
    ACTIONS(519), 1,
      anon_sym_LF2,
    ACTIONS(507), 7,
      sym_escaped_char,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym__,
      sym_uppercase_text,
      sym_text,
  [1732] = 6,
    ACTIONS(521), 1,
      anon_sym_LF,
    ACTIONS(523), 1,
      anon_sym_SPACE,
    ACTIONS(525), 1,
      anon_sym_DASH,
    ACTIONS(527), 1,
      sym_scene_location,
    ACTIONS(529), 1,
      anon_sym_POUND,
    STATE(101), 1,
      sym_scene_number,
  [1751] = 5,
    ACTIONS(529), 1,
      anon_sym_POUND,
    ACTIONS(531), 1,
      anon_sym_LF,
    ACTIONS(533), 1,
      anon_sym_DASH,
    ACTIONS(535), 1,
      sym_scene_location,
    STATE(79), 1,
      sym_scene_number,
  [1767] = 4,
    ACTIONS(529), 1,
      anon_sym_POUND,
    ACTIONS(537), 1,
      anon_sym_LF,
    ACTIONS(539), 1,
      anon_sym_DASH,
    STATE(95), 1,
      sym_scene_number,
  [1780] = 4,
    ACTIONS(529), 1,
      anon_sym_POUND,
    ACTIONS(533), 1,
      anon_sym_DASH,
    ACTIONS(541), 1,
      anon_sym_LF,
    STATE(79), 1,
      sym_scene_number,
  [1793] = 3,
    ACTIONS(529), 1,
      anon_sym_POUND,
    ACTIONS(543), 1,
      anon_sym_LF,
    STATE(115), 1,
      sym_scene_number,
  [1803] = 3,
    ACTIONS(529), 1,
      anon_sym_POUND,
    ACTIONS(545), 1,
      anon_sym_LF,
    STATE(110), 1,
      sym_scene_number,
  [1813] = 3,
    ACTIONS(529), 1,
      anon_sym_POUND,
    ACTIONS(537), 1,
      anon_sym_LF,
    STATE(95), 1,
      sym_scene_number,
  [1823] = 2,
    ACTIONS(547), 1,
      anon_sym_LF,
    ACTIONS(549), 1,
      aux_sym_parenthetical_token1,
  [1830] = 2,
    ACTIONS(551), 1,
      anon_sym_LF,
    ACTIONS(553), 1,
      aux_sym_character_token3,
  [1837] = 2,
    ACTIONS(555), 1,
      anon_sym_LF,
    ACTIONS(557), 1,
      aux_sym_parenthetical_token1,
  [1844] = 2,
    ACTIONS(352), 1,
      sym_dialogue_line_start,
    STATE(19), 1,
      aux_sym_dialogue_block_repeat1,
  [1851] = 2,
    ACTIONS(559), 1,
      anon_sym_LF,
    ACTIONS(561), 1,
      anon_sym_SPACE,
  [1858] = 2,
    ACTIONS(328), 1,
      sym_title_continuation,
    STATE(16), 1,
      aux_sym_title_page_field_repeat1,
  [1865] = 1,
    ACTIONS(563), 1,
      aux_sym_scene_number_token1,
  [1869] = 1,
    ACTIONS(565), 1,
      sym_dialogue_line_start,
  [1873] = 1,
    ACTIONS(567), 1,
      anon_sym_LF,
  [1877] = 1,
    ACTIONS(569), 1,
      anon_sym_POUND,
  [1881] = 1,
    ACTIONS(571), 1,
      anon_sym_LF,
  [1885] = 1,
    ACTIONS(573), 1,
      anon_sym_LF,
  [1889] = 1,
    ACTIONS(575), 1,
      anon_sym_LF,
  [1893] = 1,
    ACTIONS(577), 1,
      anon_sym_LF,
  [1897] = 1,
    ACTIONS(579), 1,
      anon_sym_LF,
  [1901] = 1,
    ACTIONS(537), 1,
      anon_sym_LF,
  [1905] = 1,
    ACTIONS(581), 1,
      sym_note_content,
  [1909] = 1,
    ACTIONS(583), 1,
      sym_scene_time,
  [1913] = 1,
    ACTIONS(585), 1,
      anon_sym__,
  [1917] = 1,
    ACTIONS(587), 1,
      anon_sym_STAR,
  [1921] = 1,
    ACTIONS(589), 1,
      anon_sym_STAR_STAR,
  [1925] = 1,
    ACTIONS(591), 1,
      anon_sym_STAR_STAR_STAR,
  [1929] = 1,
    ACTIONS(593), 1,
      anon_sym_LPAREN,
  [1933] = 1,
    ACTIONS(595), 1,
      aux_sym_parenthetical_token2,
  [1937] = 1,
    ACTIONS(597), 1,
      anon_sym_LF,
  [1941] = 1,
    ACTIONS(599), 1,
      anon_sym_STAR_SLASH,
  [1945] = 1,
    ACTIONS(601), 1,
      anon_sym_LF,
  [1949] = 1,
    ACTIONS(603), 1,
      sym_centered_end,
  [1953] = 1,
    ACTIONS(605), 1,
      anon_sym_LF,
  [1957] = 1,
    ACTIONS(607), 1,
      anon_sym_LF,
  [1961] = 1,
    ACTIONS(609), 1,
      sym_scene_time,
  [1965] = 1,
    ACTIONS(545), 1,
      anon_sym_LF,
  [1969] = 1,
    ACTIONS(611), 1,
      anon_sym_LF,
  [1973] = 1,
    ACTIONS(613), 1,
      anon_sym_LF,
  [1977] = 1,
    ACTIONS(615), 1,
      anon_sym_RBRACK_RBRACK,
  [1981] = 1,
    ACTIONS(617), 1,
      sym_dialogue_line_start,
  [1985] = 1,
    ACTIONS(619), 1,
      sym_description,
  [1989] = 1,
    ACTIONS(541), 1,
      anon_sym_LF,
  [1993] = 1,
    ACTIONS(621), 1,
      sym_scene_time,
  [1997] = 1,
    ACTIONS(623), 1,
      ts_builtin_sym_end,
  [2001] = 1,
    ACTIONS(625), 1,
      aux_sym_underline_token1,
  [2005] = 1,
    ACTIONS(627), 1,
      aux_sym_parenthetical_token2,
  [2009] = 1,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
  [2013] = 1,
    ACTIONS(631), 1,
      aux_sym_bold_italic_token1,
  [2017] = 1,
    ACTIONS(633), 1,
      aux_sym_bold_italic_token1,
  [2021] = 1,
    ACTIONS(635), 1,
      aux_sym_bold_italic_token1,
  [2025] = 1,
    ACTIONS(543), 1,
      anon_sym_LF,
  [2029] = 1,
    ACTIONS(637), 1,
      anon_sym_LF,
  [2033] = 1,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
  [2037] = 1,
    ACTIONS(641), 1,
      sym_dialogue_line_start,
  [2041] = 1,
    ACTIONS(643), 1,
      sym_description,
  [2045] = 1,
    ACTIONS(645), 1,
      anon_sym_LF,
  [2049] = 1,
    ACTIONS(647), 1,
      anon_sym_LF,
  [2053] = 1,
    ACTIONS(649), 1,
      sym_boneyard_content,
  [2057] = 1,
    ACTIONS(651), 1,
      anon_sym_LF,
  [2061] = 1,
    ACTIONS(653), 1,
      aux_sym_character_token2,
  [2065] = 1,
    ACTIONS(655), 1,
      anon_sym_LF,
  [2069] = 1,
    ACTIONS(657), 1,
      anon_sym_LF,
  [2073] = 1,
    ACTIONS(659), 1,
      sym_centered_text,
  [2077] = 1,
    ACTIONS(661), 1,
      aux_sym_character_token2,
  [2081] = 1,
    ACTIONS(663), 1,
      aux_sym_character_token2,
  [2085] = 1,
    ACTIONS(665), 1,
      aux_sym_character_token2,
  [2089] = 1,
    ACTIONS(667), 1,
      aux_sym_character_token2,
  [2093] = 1,
    ACTIONS(669), 1,
      anon_sym_STAR_STAR_STAR,
  [2097] = 1,
    ACTIONS(671), 1,
      anon_sym_STAR_STAR,
  [2101] = 1,
    ACTIONS(673), 1,
      anon_sym_STAR,
  [2105] = 1,
    ACTIONS(675), 1,
      anon_sym__,
  [2109] = 1,
    ACTIONS(677), 1,
      aux_sym_bold_italic_token1,
  [2113] = 1,
    ACTIONS(679), 1,
      aux_sym_bold_italic_token1,
  [2117] = 1,
    ACTIONS(681), 1,
      aux_sym_bold_italic_token1,
  [2121] = 1,
    ACTIONS(683), 1,
      aux_sym_underline_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 178,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 348,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 510,
  [SMALL_STATE(13)] = 546,
  [SMALL_STATE(14)] = 582,
  [SMALL_STATE(15)] = 620,
  [SMALL_STATE(16)] = 658,
  [SMALL_STATE(17)] = 694,
  [SMALL_STATE(18)] = 730,
  [SMALL_STATE(19)] = 761,
  [SMALL_STATE(20)] = 795,
  [SMALL_STATE(21)] = 829,
  [SMALL_STATE(22)] = 858,
  [SMALL_STATE(23)] = 887,
  [SMALL_STATE(24)] = 916,
  [SMALL_STATE(25)] = 945,
  [SMALL_STATE(26)] = 974,
  [SMALL_STATE(27)] = 1002,
  [SMALL_STATE(28)] = 1030,
  [SMALL_STATE(29)] = 1058,
  [SMALL_STATE(30)] = 1086,
  [SMALL_STATE(31)] = 1114,
  [SMALL_STATE(32)] = 1142,
  [SMALL_STATE(33)] = 1170,
  [SMALL_STATE(34)] = 1198,
  [SMALL_STATE(35)] = 1226,
  [SMALL_STATE(36)] = 1254,
  [SMALL_STATE(37)] = 1282,
  [SMALL_STATE(38)] = 1310,
  [SMALL_STATE(39)] = 1338,
  [SMALL_STATE(40)] = 1366,
  [SMALL_STATE(41)] = 1394,
  [SMALL_STATE(42)] = 1422,
  [SMALL_STATE(43)] = 1450,
  [SMALL_STATE(44)] = 1478,
  [SMALL_STATE(45)] = 1514,
  [SMALL_STATE(46)] = 1544,
  [SMALL_STATE(47)] = 1574,
  [SMALL_STATE(48)] = 1603,
  [SMALL_STATE(49)] = 1632,
  [SMALL_STATE(50)] = 1644,
  [SMALL_STATE(51)] = 1656,
  [SMALL_STATE(52)] = 1668,
  [SMALL_STATE(53)] = 1680,
  [SMALL_STATE(54)] = 1693,
  [SMALL_STATE(55)] = 1706,
  [SMALL_STATE(56)] = 1719,
  [SMALL_STATE(57)] = 1732,
  [SMALL_STATE(58)] = 1751,
  [SMALL_STATE(59)] = 1767,
  [SMALL_STATE(60)] = 1780,
  [SMALL_STATE(61)] = 1793,
  [SMALL_STATE(62)] = 1803,
  [SMALL_STATE(63)] = 1813,
  [SMALL_STATE(64)] = 1823,
  [SMALL_STATE(65)] = 1830,
  [SMALL_STATE(66)] = 1837,
  [SMALL_STATE(67)] = 1844,
  [SMALL_STATE(68)] = 1851,
  [SMALL_STATE(69)] = 1858,
  [SMALL_STATE(70)] = 1865,
  [SMALL_STATE(71)] = 1869,
  [SMALL_STATE(72)] = 1873,
  [SMALL_STATE(73)] = 1877,
  [SMALL_STATE(74)] = 1881,
  [SMALL_STATE(75)] = 1885,
  [SMALL_STATE(76)] = 1889,
  [SMALL_STATE(77)] = 1893,
  [SMALL_STATE(78)] = 1897,
  [SMALL_STATE(79)] = 1901,
  [SMALL_STATE(80)] = 1905,
  [SMALL_STATE(81)] = 1909,
  [SMALL_STATE(82)] = 1913,
  [SMALL_STATE(83)] = 1917,
  [SMALL_STATE(84)] = 1921,
  [SMALL_STATE(85)] = 1925,
  [SMALL_STATE(86)] = 1929,
  [SMALL_STATE(87)] = 1933,
  [SMALL_STATE(88)] = 1937,
  [SMALL_STATE(89)] = 1941,
  [SMALL_STATE(90)] = 1945,
  [SMALL_STATE(91)] = 1949,
  [SMALL_STATE(92)] = 1953,
  [SMALL_STATE(93)] = 1957,
  [SMALL_STATE(94)] = 1961,
  [SMALL_STATE(95)] = 1965,
  [SMALL_STATE(96)] = 1969,
  [SMALL_STATE(97)] = 1973,
  [SMALL_STATE(98)] = 1977,
  [SMALL_STATE(99)] = 1981,
  [SMALL_STATE(100)] = 1985,
  [SMALL_STATE(101)] = 1989,
  [SMALL_STATE(102)] = 1993,
  [SMALL_STATE(103)] = 1997,
  [SMALL_STATE(104)] = 2001,
  [SMALL_STATE(105)] = 2005,
  [SMALL_STATE(106)] = 2009,
  [SMALL_STATE(107)] = 2013,
  [SMALL_STATE(108)] = 2017,
  [SMALL_STATE(109)] = 2021,
  [SMALL_STATE(110)] = 2025,
  [SMALL_STATE(111)] = 2029,
  [SMALL_STATE(112)] = 2033,
  [SMALL_STATE(113)] = 2037,
  [SMALL_STATE(114)] = 2041,
  [SMALL_STATE(115)] = 2045,
  [SMALL_STATE(116)] = 2049,
  [SMALL_STATE(117)] = 2053,
  [SMALL_STATE(118)] = 2057,
  [SMALL_STATE(119)] = 2061,
  [SMALL_STATE(120)] = 2065,
  [SMALL_STATE(121)] = 2069,
  [SMALL_STATE(122)] = 2073,
  [SMALL_STATE(123)] = 2077,
  [SMALL_STATE(124)] = 2081,
  [SMALL_STATE(125)] = 2085,
  [SMALL_STATE(126)] = 2089,
  [SMALL_STATE(127)] = 2093,
  [SMALL_STATE(128)] = 2097,
  [SMALL_STATE(129)] = 2101,
  [SMALL_STATE(130)] = 2105,
  [SMALL_STATE(131)] = 2109,
  [SMALL_STATE(132)] = 2113,
  [SMALL_STATE(133)] = 2117,
  [SMALL_STATE(134)] = 2121,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_block, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_block, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_block_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(113),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(111),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(45),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(109),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(108),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(107),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(104),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(80),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(126),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(125),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(124),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(123),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(122),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(119),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 2, 0, 0), SHIFT(117),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(113),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(111),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(45),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(109),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(108),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(107),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(104),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(80),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(126),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(125),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(124),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(123),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(122),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(119),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scene_block, 1, 0, 0), SHIFT(117),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scene_block_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_page_field_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 3, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_page_repeat1, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_page_field, 4, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue_block, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dialogue_block_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dialogue, 2, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dialogue, 2, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 6, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 6, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 4, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical, 5, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical, 5, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_centered, 4, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_centered, 4, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 6, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 6, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_synopsis, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_synopsis, 3, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 2, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boneyard, 4, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boneyard, 4, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 4, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 4, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_heading, 4, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_heading, 4, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 4, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 7, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 7, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scene_heading, 5, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transition, 2, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transition, 2, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_page_break, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_page_break, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_action_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dialogue_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_italic, 3, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_underline, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold, 3, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bold_italic, 3, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold_italic, 3, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bold, 3, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_italic, 3, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_underline, 3, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 3, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scene_number, 3, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 4, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [623] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_character, 1, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
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
