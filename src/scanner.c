#include "tree_sitter/parser.h"
#include <string.h>
#include <wctype.h>

enum TokenType {
  TITLE_PAGE_KEY,
  SCENE_START,
  SECTION_START,
  NOTE_START,
  FORCED_ACTION_START,
  FORCED_CHARACTER_START,
  FORCED_TRANSITION_START,
  LYRIC_START,
  CENTERED_START,
  PAGE_BREAK_MARKER,
  SYNOPSIS_START,
  BONEYARD_START,
};

void *tree_sitter_fountain_external_scanner_create() {
  return NULL;
}

static bool match_keyword(TSLexer *lexer, const char *keyword) {
  for (size_t i = 0; keyword[i] != '\0'; i++) {
    if (lexer->lookahead != keyword[i]) return false;
    lexer->advance(lexer, false);
  }
  return true;
}

bool tree_sitter_fountain_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  // Try title page keywords
  if (valid_symbols[TITLE_PAGE_KEY]) {
    if (match_keyword(lexer, "Title:") ||
        match_keyword(lexer, "Credit:") ||
        match_keyword(lexer, "Author:") ||
        match_keyword(lexer, "Source:") ||
        match_keyword(lexer, "Draft date:") ||
        match_keyword(lexer, "Contact:")) {
      lexer->result_symbol = TITLE_PAGE_KEY;
      lexer->mark_end(lexer);
      return true;
    }
  }

  // Try section start (# markers)
  if (valid_symbols[SECTION_START] && lexer->lookahead == '#') {
    while (lexer->lookahead == '#') {
      lexer->advance(lexer, false);
    }
    lexer->result_symbol = SECTION_START;
    lexer->mark_end(lexer);
    return true;
  }

  // Try scene start (INT., EXT., etc.)
  if (valid_symbols[SCENE_START]) {
    if (match_keyword(lexer, "INT.") ||
        match_keyword(lexer, "EXT.") ||
        match_keyword(lexer, "INT./EXT.") ||
        match_keyword(lexer, "EST.")) {
      lexer->result_symbol = SCENE_START;
      lexer->mark_end(lexer);
      return true;
    }
  }

  // Try note start ([[)
  if (valid_symbols[NOTE_START] && match_keyword(lexer, "[[")) {
    lexer->result_symbol = NOTE_START;
    lexer->mark_end(lexer);
    return true;
  }

  // Try forced action (!)
  if (valid_symbols[FORCED_ACTION_START] && lexer->lookahead == '!') {
    lexer->advance(lexer, false);
    lexer->result_symbol = FORCED_ACTION_START;
    lexer->mark_end(lexer);
    return true;
  }

  // Try forced character (@)
  if (valid_symbols[FORCED_CHARACTER_START] && lexer->lookahead == '@') {
    lexer->advance(lexer, false);
    lexer->result_symbol = FORCED_CHARACTER_START;
    lexer->mark_end(lexer);
    return true;
  }

  // Try forced transition or centered (>)
  if (lexer->lookahead == '>') {
    lexer->advance(lexer, false);
    // Check if it's centered text (has text then <)
    if (valid_symbols[CENTERED_START]) {
      lexer->result_symbol = CENTERED_START;
      lexer->mark_end(lexer);
      return true;
    }
    // Otherwise it's a forced transition
    if (valid_symbols[FORCED_TRANSITION_START]) {
      lexer->result_symbol = FORCED_TRANSITION_START;
      lexer->mark_end(lexer);
      return true;
    }
  }

  // Try lyric (~)
  if (valid_symbols[LYRIC_START] && lexer->lookahead == '~') {
    lexer->advance(lexer, false);
    lexer->result_symbol = LYRIC_START;
    lexer->mark_end(lexer);
    return true;
  }

  // Try synopsis (=)
  if (valid_symbols[SYNOPSIS_START] && lexer->lookahead == '=') {
    // Check if it's a page break (===)
    int equals_count = 0;
    while (lexer->lookahead == '=') {
      equals_count++;
      lexer->advance(lexer, false);
    }

    if (equals_count >= 3 && (lexer->lookahead == '\n' || lexer->lookahead == '\0')) {
      if (valid_symbols[PAGE_BREAK_MARKER]) {
        lexer->result_symbol = PAGE_BREAK_MARKER;
        lexer->mark_end(lexer);
        return true;
      }
    } else if (equals_count == 1) {
      lexer->result_symbol = SYNOPSIS_START;
      lexer->mark_end(lexer);
      return true;
    }
  }

  // Try boneyard (/*)
  if (valid_symbols[BONEYARD_START] && match_keyword(lexer, "/*")) {
    lexer->result_symbol = BONEYARD_START;
    lexer->mark_end(lexer);
    return true;
  }

  return false;
}

void tree_sitter_fountain_external_scanner_destroy(void *payload) {
  /* NOOP */
}

unsigned tree_sitter_fountain_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}

void tree_sitter_fountain_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  /* NOOP */
}
