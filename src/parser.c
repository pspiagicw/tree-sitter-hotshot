#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_fn = 5,
  anon_sym_lambda = 6,
  anon_sym_while = 7,
  anon_sym_cond = 8,
  anon_sym_let = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_STAR = 12,
  anon_sym_SLASH = 13,
  anon_sym_EQ = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  anon_sym_mod = 17,
  sym_identifier = 18,
  sym_integer = 19,
  sym_string = 20,
  anon_sym_true = 21,
  anon_sym_false = 22,
  sym_comments = 23,
  sym_source_file = 24,
  sym_statement = 25,
  sym_expression = 26,
  sym__sparen = 27,
  sym__paren = 28,
  sym_table = 29,
  sym_fdec = 30,
  sym_lambda = 31,
  sym_while = 32,
  sym_cond = 33,
  sym_cargs = 34,
  sym_let = 35,
  sym_returnable = 36,
  sym_fcall = 37,
  sym_fname = 38,
  sym_operator = 39,
  sym_boolean = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_table_repeat1 = 42,
  aux_sym_fdec_repeat1 = 43,
  aux_sym_cond_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_fn] = "fn",
  [anon_sym_lambda] = "lambda",
  [anon_sym_while] = "while",
  [anon_sym_cond] = "cond",
  [anon_sym_let] = "let",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ] = "=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_mod] = "mod",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_comments] = "comments",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym__sparen] = "_sparen",
  [sym__paren] = "_paren",
  [sym_table] = "table",
  [sym_fdec] = "fdec",
  [sym_lambda] = "lambda",
  [sym_while] = "while",
  [sym_cond] = "cond",
  [sym_cargs] = "cargs",
  [sym_let] = "let",
  [sym_returnable] = "returnable",
  [sym_fcall] = "fcall",
  [sym_fname] = "fname",
  [sym_operator] = "operator",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_fdec_repeat1] = "fdec_repeat1",
  [aux_sym_cond_repeat1] = "cond_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_lambda] = anon_sym_lambda,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_cond] = anon_sym_cond,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_mod] = anon_sym_mod,
  [sym_identifier] = sym_identifier,
  [sym_integer] = sym_integer,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_comments] = sym_comments,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym__sparen] = sym__sparen,
  [sym__paren] = sym__paren,
  [sym_table] = sym_table,
  [sym_fdec] = sym_fdec,
  [sym_lambda] = sym_lambda,
  [sym_while] = sym_while,
  [sym_cond] = sym_cond,
  [sym_cargs] = sym_cargs,
  [sym_let] = sym_let,
  [sym_returnable] = sym_returnable,
  [sym_fcall] = sym_fcall,
  [sym_fname] = sym_fname,
  [sym_operator] = sym_operator,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_fdec_repeat1] = aux_sym_fdec_repeat1,
  [aux_sym_cond_repeat1] = aux_sym_cond_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lambda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_comments] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__sparen] = {
    .visible = false,
    .named = true,
  },
  [sym__paren] = {
    .visible = false,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_fdec] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_cargs] = {
    .visible = true,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym_returnable] = {
    .visible = true,
    .named = true,
  },
  [sym_fcall] = {
    .visible = true,
    .named = true,
  },
  [sym_fname] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fdec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cond_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_argument, 3},
    {field_name, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(10);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(10);
      if (lookahead == ';') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(18);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(57);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(9);
      if (lookahead == ')') ADVANCE(10);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comments);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_cond] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_comments] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym_statement] = STATE(4),
    [sym_expression] = STATE(24),
    [sym__sparen] = STATE(24),
    [sym_table] = STATE(20),
    [sym_boolean] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [sym_comments] = ACTIONS(3),
  },
  [2] = {
    [sym__paren] = STATE(43),
    [sym_fdec] = STATE(43),
    [sym_lambda] = STATE(43),
    [sym_while] = STATE(43),
    [sym_cond] = STATE(43),
    [sym_let] = STATE(43),
    [sym_fcall] = STATE(43),
    [sym_fname] = STATE(9),
    [sym_operator] = STATE(28),
    [anon_sym_fn] = ACTIONS(17),
    [anon_sym_lambda] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_cond] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_mod] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
    [sym_comments] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(19), 1,
      anon_sym_lambda,
    ACTIONS(23), 1,
      anon_sym_cond,
    ACTIONS(29), 1,
      anon_sym_mod,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(9), 1,
      sym_fname,
    STATE(28), 1,
      sym_operator,
    STATE(47), 3,
      sym_lambda,
      sym_cond,
      sym_fcall,
    ACTIONS(27), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
  [36] = 10,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(20), 2,
      sym_table,
      sym_boolean,
    STATE(24), 2,
      sym_expression,
      sym__sparen,
  [72] = 10,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(40), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(26), 1,
      sym_expression,
    ACTIONS(38), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(46), 2,
      sym_integer,
      sym_string,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_returnable,
      aux_sym_table_repeat1,
    STATE(20), 2,
      sym_table,
      sym_boolean,
  [108] = 10,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(63), 2,
      sym_integer,
      sym_string,
    ACTIONS(66), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(20), 2,
      sym_table,
      sym_boolean,
    STATE(24), 2,
      sym_expression,
      sym__sparen,
  [144] = 10,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_returnable,
      aux_sym_table_repeat1,
    STATE(20), 2,
      sym_table,
      sym_boolean,
  [179] = 10,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 2,
      sym_returnable,
      aux_sym_table_repeat1,
    STATE(20), 2,
      sym_table,
      sym_boolean,
  [214] = 10,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 2,
      sym_returnable,
      aux_sym_table_repeat1,
    STATE(20), 2,
      sym_table,
      sym_boolean,
  [249] = 10,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 2,
      sym_returnable,
      aux_sym_table_repeat1,
    STATE(20), 2,
      sym_table,
      sym_boolean,
  [284] = 9,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(52), 1,
      sym_statement,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_table,
      sym_boolean,
    STATE(24), 2,
      sym_expression,
      sym__sparen,
  [316] = 9,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(51), 1,
      sym_statement,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_table,
      sym_boolean,
    STATE(24), 2,
      sym_expression,
      sym__sparen,
  [348] = 9,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(49), 1,
      sym_statement,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_table,
      sym_boolean,
    STATE(24), 2,
      sym_expression,
      sym__sparen,
  [380] = 9,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(48), 1,
      sym_statement,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_table,
      sym_boolean,
    STATE(24), 2,
      sym_expression,
      sym__sparen,
  [412] = 9,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(39), 1,
      sym_statement,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_table,
      sym_boolean,
    STATE(24), 2,
      sym_expression,
      sym__sparen,
  [444] = 9,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(45), 1,
      sym_statement,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_table,
      sym_boolean,
    STATE(24), 2,
      sym_expression,
      sym__sparen,
  [476] = 9,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_returnable,
    STATE(26), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_table,
      sym_boolean,
  [507] = 9,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_expression,
    STATE(42), 1,
      sym_returnable,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_table,
      sym_boolean,
  [538] = 9,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_returnable,
    STATE(26), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_integer,
      sym_string,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 2,
      sym_table,
      sym_boolean,
  [569] = 3,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(81), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer,
      sym_string,
  [587] = 3,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(85), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer,
      sym_string,
  [605] = 3,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(89), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer,
      sym_string,
  [623] = 3,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(93), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer,
      sym_string,
  [641] = 3,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(97), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_integer,
      sym_string,
  [658] = 3,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(101), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(99), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer,
      sym_string,
  [675] = 3,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(105), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(103), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_integer,
      sym_string,
  [692] = 3,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(109), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_integer,
      sym_string,
  [709] = 3,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(113), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(111), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_integer,
      sym_string,
  [725] = 3,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(117), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(115), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_integer,
      sym_string,
  [741] = 4,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(31), 2,
      sym_cargs,
      aux_sym_cond_repeat1,
  [755] = 4,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(32), 2,
      sym_cargs,
      aux_sym_cond_repeat1,
  [769] = 4,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(32), 2,
      sym_cargs,
      aux_sym_cond_repeat1,
  [783] = 4,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(33), 1,
      aux_sym_fdec_repeat1,
  [796] = 4,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(37), 1,
      aux_sym_fdec_repeat1,
  [809] = 4,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(36), 1,
      aux_sym_fdec_repeat1,
  [822] = 4,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(33), 1,
      aux_sym_fdec_repeat1,
  [835] = 4,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_fdec_repeat1,
  [848] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(149), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [856] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
  [863] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
  [870] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [877] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
  [884] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
  [891] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(161), 1,
      sym_identifier,
  [898] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
  [905] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
  [912] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
  [919] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
  [926] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
  [933] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(173), 1,
      sym_identifier,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
  [947] = 2,
    ACTIONS(3), 1,
      sym_comments,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 179,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 249,
  [SMALL_STATE(11)] = 284,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 348,
  [SMALL_STATE(14)] = 380,
  [SMALL_STATE(15)] = 412,
  [SMALL_STATE(16)] = 444,
  [SMALL_STATE(17)] = 476,
  [SMALL_STATE(18)] = 507,
  [SMALL_STATE(19)] = 538,
  [SMALL_STATE(20)] = 569,
  [SMALL_STATE(21)] = 587,
  [SMALL_STATE(22)] = 605,
  [SMALL_STATE(23)] = 623,
  [SMALL_STATE(24)] = 641,
  [SMALL_STATE(25)] = 658,
  [SMALL_STATE(26)] = 675,
  [SMALL_STATE(27)] = 692,
  [SMALL_STATE(28)] = 709,
  [SMALL_STATE(29)] = 725,
  [SMALL_STATE(30)] = 741,
  [SMALL_STATE(31)] = 755,
  [SMALL_STATE(32)] = 769,
  [SMALL_STATE(33)] = 783,
  [SMALL_STATE(34)] = 796,
  [SMALL_STATE(35)] = 809,
  [SMALL_STATE(36)] = 822,
  [SMALL_STATE(37)] = 835,
  [SMALL_STATE(38)] = 848,
  [SMALL_STATE(39)] = 856,
  [SMALL_STATE(40)] = 863,
  [SMALL_STATE(41)] = 870,
  [SMALL_STATE(42)] = 877,
  [SMALL_STATE(43)] = 884,
  [SMALL_STATE(44)] = 891,
  [SMALL_STATE(45)] = 898,
  [SMALL_STATE(46)] = 905,
  [SMALL_STATE(47)] = 912,
  [SMALL_STATE(48)] = 919,
  [SMALL_STATE(49)] = 926,
  [SMALL_STATE(50)] = 933,
  [SMALL_STATE(51)] = 940,
  [SMALL_STATE(52)] = 947,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(8),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(20),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(20),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(21),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fcall, 2, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fcall, 1, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnable, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_returnable, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_returnable, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_returnable, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sparen, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sparen, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fname, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fname, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cond_repeat1, 2), SHIFT_REPEAT(19),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cond_repeat1, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fdec_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fdec_repeat1, 2), SHIFT_REPEAT(33),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cargs, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 3, .production_id = 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fdec, 5, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fdec, 6, .production_id = 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_hotshot() {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
