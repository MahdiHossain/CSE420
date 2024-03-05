/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     FOR = 260,
     DO = 261,
     INT = 262,
     FLOAT = 263,
     VOID = 264,
     ID = 265,
     SWITCH = 266,
     DEFAULT = 267,
     GOTO = 268,
     WHILE = 269,
     BREAK = 270,
     CHAR = 271,
     DOUBLE = 272,
     RETURN = 273,
     CASE = 274,
     CONTINUE = 275,
     PRINTF = 276,
     CONST_INT = 277,
     CONST_FLOAT = 278,
     INCOP = 279,
     PRINTLN = 280,
     DECOP = 281,
     MULOP = 282,
     ADDOP = 283,
     RELOP = 284,
     ASSIGNOP = 285,
     LOGICOP = 286,
     NOT = 287,
     LPAREN = 288,
     RPAREN = 289,
     LCURL = 290,
     RCURL = 291,
     LTHIRD = 292,
     RTHIRD = 293,
     COMMA = 294,
     COLON = 295,
     SEMICOLON = 296
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define DO 261
#define INT 262
#define FLOAT 263
#define VOID 264
#define ID 265
#define SWITCH 266
#define DEFAULT 267
#define GOTO 268
#define WHILE 269
#define BREAK 270
#define CHAR 271
#define DOUBLE 272
#define RETURN 273
#define CASE 274
#define CONTINUE 275
#define PRINTF 276
#define CONST_INT 277
#define CONST_FLOAT 278
#define INCOP 279
#define PRINTLN 280
#define DECOP 281
#define MULOP 282
#define ADDOP 283
#define RELOP 284
#define ASSIGNOP 285
#define LOGICOP 286
#define NOT 287
#define LPAREN 288
#define RPAREN 289
#define LCURL 290
#define RCURL 291
#define LTHIRD 292
#define RTHIRD 293
#define COMMA 294
#define COLON 295
#define SEMICOLON 296




/* Copy the first part of user declarations.  */
#line 1 "syntax_analyzer.y"


#include"symbol_info.h"

#define YYSTYPE symbol_info*

int yyparse(void);
int yylex(void);

extern FILE *yyin;


ofstream outlog;

int lines;
void yyerror(char *s);




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 208 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   184

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  115

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    21,    27,
      32,    36,    39,    41,    45,    48,    52,    54,    56,    58,
      62,    69,    71,    76,    78,    81,    83,    85,    87,    95,
     101,   109,   115,   121,   125,   127,   130,   132,   137,   139,
     143,   145,   149,   151,   155,   157,   161,   163,   167,   170,
     173,   175,   177,   182,   186,   188,   190,   193,   196,   198,
     199,   203
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    44,    -1,    44,    45,    -1,    45,    -1,
      49,    -1,    46,    -1,    50,    10,    33,    47,    34,    48,
      -1,    50,    10,    33,    34,    48,    -1,    47,    39,    50,
      10,    -1,    47,    39,    50,    -1,    50,    10,    -1,    50,
      -1,    35,    52,    36,    -1,    35,    36,    -1,    50,    51,
      41,    -1,     7,    -1,     8,    -1,     9,    -1,    51,    39,
      10,    -1,    51,    39,    10,    37,    22,    38,    -1,    10,
      -1,    10,    37,    22,    38,    -1,    53,    -1,    52,    53,
      -1,    49,    -1,    54,    -1,    48,    -1,     5,    33,    54,
      54,    56,    34,    53,    -1,     3,    33,    56,    34,    53,
      -1,     3,    33,    56,    34,    53,     4,    53,    -1,    14,
      33,    56,    34,    53,    -1,    25,    33,    10,    34,    41,
      -1,    18,    56,    41,    -1,    41,    -1,    56,    41,    -1,
      10,    -1,    10,    37,    56,    38,    -1,    57,    -1,    55,
      30,    57,    -1,    58,    -1,    58,    31,    58,    -1,    59,
      -1,    59,    29,    59,    -1,    60,    -1,    59,    28,    60,
      -1,    61,    -1,    60,    27,    61,    -1,    28,    61,    -1,
      32,    61,    -1,    62,    -1,    55,    -1,    10,    33,    63,
      34,    -1,    33,    56,    34,    -1,    22,    -1,    23,    -1,
      55,    24,    -1,    55,    26,    -1,    64,    -1,    -1,    64,
      39,    57,    -1,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    29,    29,    38,    45,    54,    61,    71,    78,    88,
      95,   103,   111,   121,   129,   139,   149,   156,   163,   173,
     181,   190,   199,   210,   218,   229,   238,   247,   256,   265,
     274,   283,   292,   301,   312,   321,   332,   340,   349,   357,
     367,   375,   385,   393,   403,   411,   421,   429,   439,   447,
     455,   465,   473,   481,   489,   497,   505,   513,   524,   533,
     539,   547
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "FOR", "DO", "INT",
  "FLOAT", "VOID", "ID", "SWITCH", "DEFAULT", "GOTO", "WHILE", "BREAK",
  "CHAR", "DOUBLE", "RETURN", "CASE", "CONTINUE", "PRINTF", "CONST_INT",
  "CONST_FLOAT", "INCOP", "PRINTLN", "DECOP", "MULOP", "ADDOP", "RELOP",
  "ASSIGNOP", "LOGICOP", "NOT", "LPAREN", "RPAREN", "LCURL", "RCURL",
  "LTHIRD", "RTHIRD", "COMMA", "COLON", "SEMICOLON", "$accept", "start",
  "program", "unit", "func_definition", "parameter_list",
  "compound_statement", "var_declaration", "type_specifier",
  "declaration_list", "statements", "statement", "expression_statement",
  "variable", "expression", "logic_expression", "rel_expression",
  "simple_expression", "term", "unary_expression", "factor",
  "argument_list", "arguments", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    46,    47,
      47,    47,    47,    48,    48,    49,    50,    50,    50,    51,
      51,    51,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      61,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      64,    64
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     5,     4,
       3,     2,     1,     3,     2,     3,     1,     1,     1,     3,
       6,     1,     4,     1,     2,     1,     1,     1,     7,     5,
       7,     5,     5,     3,     1,     2,     1,     4,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     2,     2,
       1,     1,     4,     3,     1,     1,     2,     2,     1,     0,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    16,    17,    18,     0,     2,     4,     6,     5,     0,
       1,     3,    21,     0,     0,     0,     0,    15,     0,     0,
      12,     0,    19,     0,     8,     0,     0,    11,    22,     0,
       0,     0,    36,     0,     0,    54,    55,     0,     0,     0,
       0,    14,    34,    27,    25,     0,     0,    23,    26,    51,
       0,    38,    40,    42,    44,    46,    50,     7,    10,     0,
       0,     0,    59,     0,     0,     0,     0,    51,    48,    49,
       0,    21,    13,    24,    56,    57,     0,    35,     0,     0,
       0,     0,     9,    20,     0,     0,    61,     0,    58,     0,
       0,    33,     0,    53,    39,    41,    45,    43,    47,     0,
       0,    52,     0,    37,     0,     0,    29,     0,    60,    31,
      32,     0,     0,    30,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    19,    43,    44,    45,    13,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    87,    88
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -62
static const yytype_int16 yypact[] =
{
      54,   -62,   -62,   -62,    13,    54,   -62,   -62,   -62,     6,
     -62,   -62,     2,    -7,     3,     0,    32,   -62,    23,   -15,
      49,    31,    28,    67,   -62,    23,    54,   -62,   -62,    51,
      47,    53,     7,    55,   151,   -62,   -62,    58,   151,   151,
     151,   -62,   -62,   -62,   -62,    72,   102,   -62,   -62,    27,
      42,   -62,    56,    50,    57,   -62,   -62,   -62,    83,    59,
     151,    -5,   151,   151,   151,    60,    84,    30,   -62,   -62,
      62,    61,   -62,   -62,   -62,   -62,   151,   -62,   151,   151,
     151,   151,   -62,   -62,    70,    -5,   -62,    79,    75,    68,
      81,   -62,    85,   -62,   -62,   -62,    57,    89,   -62,   137,
     151,   -62,   151,   -62,   137,    77,   117,    88,   -62,   -62,
     -62,   137,   137,   -62,   -62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -62,   -62,   -62,   118,   -62,   -62,    -4,    20,    38,   -62,
     -62,   -44,   -52,   -31,   -34,   -61,    48,    52,    69,   -35,
     -62,   -62,   -62
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      65,    86,    73,    68,    69,    32,    70,    67,    67,    85,
       1,     2,     3,    10,    24,    94,    12,    35,    36,    25,
       8,    57,    21,    38,    26,     8,    84,    39,    40,    89,
      90,    67,    16,   100,    17,    14,    42,    18,     9,    15,
      62,   108,    22,     9,    63,    67,    98,    67,    67,    67,
      67,    74,    20,    75,    74,   106,    75,    76,    23,    27,
     109,     1,     2,     3,    58,    29,   107,   113,   114,    28,
      30,    67,    31,    59,     1,     2,     3,    32,    79,    80,
      60,    33,    71,    77,    81,    34,    61,    78,    64,    35,
      36,    66,    37,    82,    92,    38,    93,    83,    15,    39,
      40,    91,    23,    41,    99,    30,   103,    31,    42,     1,
       2,     3,    32,   101,   102,   104,    33,    79,   110,   105,
      34,   111,   112,    11,    35,    36,    95,    37,     0,     0,
      38,     0,    97,     0,    39,    40,     0,    23,    72,     0,
      30,     0,    31,    42,     1,     2,     3,    32,    96,     0,
       0,    33,     0,     0,     0,    34,     0,     0,     0,    35,
      36,    32,    37,     0,     0,    38,     0,     0,     0,    39,
      40,     0,    23,    35,    36,     0,     0,     0,    42,    38,
       0,     0,     0,    39,    40
};

static const yytype_int8 yycheck[] =
{
      34,    62,    46,    38,    39,    10,    40,    38,    39,    61,
       7,     8,     9,     0,    18,    76,    10,    22,    23,    34,
       0,    25,    22,    28,    39,     5,    60,    32,    33,    63,
      64,    62,    39,    85,    41,    33,    41,    34,     0,    37,
      33,   102,    10,     5,    37,    76,    81,    78,    79,    80,
      81,    24,    14,    26,    24,    99,    26,    30,    35,    10,
     104,     7,     8,     9,    26,    37,   100,   111,   112,    38,
       3,   102,     5,    22,     7,     8,     9,    10,    28,    29,
      33,    14,    10,    41,    27,    18,    33,    31,    33,    22,
      23,    33,    25,    10,    10,    28,    34,    38,    37,    32,
      33,    41,    35,    36,    34,     3,    38,     5,    41,     7,
       8,     9,    10,    34,    39,    34,    14,    28,    41,    34,
      18,     4,    34,     5,    22,    23,    78,    25,    -1,    -1,
      28,    -1,    80,    -1,    32,    33,    -1,    35,    36,    -1,
       3,    -1,     5,    41,     7,     8,     9,    10,    79,    -1,
      -1,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    22,
      23,    10,    25,    -1,    -1,    28,    -1,    -1,    -1,    32,
      33,    -1,    35,    22,    23,    -1,    -1,    -1,    41,    28,
      -1,    -1,    -1,    32,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,     9,    43,    44,    45,    46,    49,    50,
       0,    45,    10,    51,    33,    37,    39,    41,    34,    47,
      50,    22,    10,    35,    48,    34,    39,    10,    38,    37,
       3,     5,    10,    14,    18,    22,    23,    25,    28,    32,
      33,    36,    41,    48,    49,    50,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    48,    50,    22,
      33,    33,    33,    37,    33,    56,    33,    55,    61,    61,
      56,    10,    36,    53,    24,    26,    30,    41,    31,    28,
      29,    27,    10,    38,    56,    54,    57,    63,    64,    56,
      56,    41,    10,    34,    57,    58,    60,    59,    61,    34,
      54,    34,    39,    38,    34,    34,    53,    56,    57,    53,
      41,     4,    34,    53,    53
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 30 "syntax_analyzer.y"
    {
		outlog<<"At line no: "<<lines<<" start : program "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()+"\n"<<endl<<endl;
		
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname()+"\n","start");
	}
    break;

  case 3:
#line 39 "syntax_analyzer.y"
    {
		outlog<<"At line no: "<<lines<<" program : program unit "<<endl<<endl;
		outlog<<(yyvsp[(1) - (2)])->getname()+"\n"+(yyvsp[(2) - (2)])->getname()<<endl<<endl;
		
		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+"\n"+(yyvsp[(2) - (2)])->getname(),"program");
	}
    break;

  case 4:
#line 46 "syntax_analyzer.y"
    {
		outlog<<"At line no: "<<lines<<" program : unit "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()+"\n"<<endl<<endl;
		
		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname()+"\n","program");
	}
    break;

  case 5:
#line 55 "syntax_analyzer.y"
    {	
		outlog<<"At line no: "<<lines<<" unit : var_declaration  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()+"\n"<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname()+"\n","unit");
	}
    break;

  case 6:
#line 62 "syntax_analyzer.y"
    {
		
		outlog<<"At line no: "<<lines<<" unit : func_definition  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()+"\n"<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname()+"\n","unit");
	}
    break;

  case 7:
#line 72 "syntax_analyzer.y"
    {	
		outlog<<"At line no: "<<lines<<" func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement "<<endl<<endl;
		outlog<<(yyvsp[(1) - (6)])->getname()<<" "<<(yyvsp[(2) - (6)])->getname()<<"(\n"<<(yyvsp[(4) - (6)])->getname()<<")\n"<<(yyvsp[(6) - (6)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (6)])->getname()+" "+(yyvsp[(2) - (6)])->getname()+"(\n"+(yyvsp[(4) - (6)])->getname()+")\n"+(yyvsp[(6) - (6)])->getname(),"func_def");
	}
    break;

  case 8:
#line 79 "syntax_analyzer.y"
    {
		
		outlog<<"At line no: "<<lines<<" func_definition : type_specifier ID LPAREN RPAREN compound_statement "<<endl<<endl;
		outlog<<(yyvsp[(1) - (5)])->getname()<<" "<<(yyvsp[(2) - (5)])->getname()<<"()\n"<<(yyvsp[(5) - (5)])->getname()<<endl<<endl;
		
		(yyval) = new symbol_info((yyvsp[(1) - (5)])->getname()+" "+(yyvsp[(2) - (5)])->getname()+"()\n"+(yyvsp[(5) - (5)])->getname(),"func_def");	
	}
    break;

  case 9:
#line 89 "syntax_analyzer.y"
    {
		outlog<<"At line no: "<<lines<<" parameter_list : parameter_list COMMA type_specifier ID  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (4)])->getname()<<" "<<",\n"<<(yyvsp[(3) - (4)])->getname()<<(yyvsp[(4) - (4)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (4)])->getname()+" "+",\n"+(yyvsp[(3) - (4)])->getname()+(yyvsp[(4) - (4)])->getname(),"parameter_list");
	}
    break;

  case 10:
#line 96 "syntax_analyzer.y"
    {

		outlog<<"At line no: "<<lines<<" parameter_list : parameter_list COMMA type_specifier  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (3)])->getname()<<" "<<",\n"<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+" "+",\n"+(yyvsp[(3) - (3)])->getname(),"parameter_list");
	}
    break;

  case 11:
#line 104 "syntax_analyzer.y"
    {

		outlog<<"At line no: "<<lines<<" parameter_list : type_specifier ID  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (2)])->getname()<<" "<<(yyvsp[(2) - (2)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+" "+(yyvsp[(2) - (2)])->getname(),"parameter_list");
	}
    break;

  case 12:
#line 112 "syntax_analyzer.y"
    {

		outlog<<"At line no: "<<lines<<" parameter_list : type_specifier "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"parameter_list");
	}
    break;

  case 13:
#line 122 "syntax_analyzer.y"
    {
		
		outlog<<"At line no: "<<lines<<" compound_statement : LCURL statements RCURL  "<<endl<<endl;
		outlog<<"{\n"<<(yyvsp[(2) - (3)])->getname()<<"}"<<endl<<endl;

		(yyval) = new symbol_info("(\n"+(yyvsp[(1) - (3)])->getname()+" "+")\n","compound_statement");
	}
    break;

  case 14:
#line 130 "syntax_analyzer.y"
    {
		
		outlog<<"At line no: "<<lines<<" compound_statement : LCURL RCURL  "<<endl<<endl;
		outlog<<"(\n"<<")\n"<<endl<<endl;

		(yyval) = new symbol_info("{\n}\n","compound_statement");
	}
    break;

  case 15:
#line 140 "syntax_analyzer.y"
    {
		
		outlog<<"At line no: "<<lines<<" var_declaration : type_specifier declaration_list SEMICOLON  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (3)])->getname()<<" "<<(yyvsp[(2) - (3)])->getname()<<";\n"<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+" "+(yyvsp[(2) - (3)])->getname()+";\n","var_declaration");
	}
    break;

  case 16:
#line 150 "syntax_analyzer.y"
    {
		outlog<<"At line no: "<<lines<<" type_specifier : INT  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"type_specifier");
	}
    break;

  case 17:
#line 157 "syntax_analyzer.y"
    {
		outlog<<"At line no: "<<lines<<" type_specifier : FLOAT  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"type_specifier");
	}
    break;

  case 18:
#line 164 "syntax_analyzer.y"
    {
		outlog<<"At line no: "<<lines<<" type_specifier : VOID  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(), "type_specifier");

	}
    break;

  case 19:
#line 174 "syntax_analyzer.y"
    {
		
		outlog<<"At line no: "<<lines<<" declaration_list :  declaration_list COMMA ID "<<endl<<endl;
		outlog<<(yyvsp[(1) - (3)])->getname()<<" "<<",\n"<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+" "+",\n"+(yyvsp[(3) - (3)])->getname(),"declaration_list");
	}
    break;

  case 20:
#line 182 "syntax_analyzer.y"
    {
		//
		outlog<<"At line no: "<<lines<<" declaration_list : declaration_list COMMA ID LTHIRD CONST_INT RTHIRD  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (6)])->getname()<<" "<<",\n"<<(yyvsp[(3) - (6)])->getname()<<" "<<"[\n"<<(yyvsp[(5) - (6)])->getname()<<"]\n"<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (6)])->getname()+" "+",\n"+(yyvsp[(3) - (6)])->getname()+" "+"[\n"+(yyvsp[(5) - (6)])->getname()+"]\n","declaration_list");
	
	}
    break;

  case 21:
#line 191 "syntax_analyzer.y"
    {
		
		outlog<<"At line no: "<<lines<<" declaration_list : ID  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"declaration_list");
	}
    break;

  case 22:
#line 200 "syntax_analyzer.y"
    {
		
		outlog<<"At line no: "<<lines<<" declaration_list : ID LTHIRD CONST_INT RTHIRD  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (4)])->getname()<<" "<<"[\n"<<(yyvsp[(3) - (4)])->getname()<<"]\n"<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (4)])->getname()+" "+"[\n"+(yyvsp[(3) - (4)])->getname()+"]\n","declaration_list");
	}
    break;

  case 23:
#line 211 "syntax_analyzer.y"
    {
	 
		outlog<<"At line no: "<<lines<<" statements : statement  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"statements");
	}
    break;

  case 24:
#line 219 "syntax_analyzer.y"
    {
	 
		outlog<<"At line no: "<<lines<<" statements : statements statement  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (2)])->getname()<<(yyvsp[(2) - (2)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+" "+(yyvsp[(1) - (2)])->getname(),"statements");

	}
    break;

  case 25:
#line 230 "syntax_analyzer.y"
    {
	
		outlog<<"At line no: "<<lines<<" statement : var_declaration  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"stmnt");
	
	}
    break;

  case 26:
#line 239 "syntax_analyzer.y"
    {
	
		outlog<<"At line no: "<<lines<<" statement : expression_statement  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"stmnt");
	
	}
    break;

  case 27:
#line 248 "syntax_analyzer.y"
    {
	
		outlog<<"At line no: "<<lines<<" statement :  compound_statement "<<endl<<endl;
		outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"stmnt");
	
	}
    break;

  case 28:
#line 257 "syntax_analyzer.y"
    {
	
		outlog<<"At line no: "<<lines<<" statement : FOR LPAREN expression_statement expression_statement expression RPAREN statement "<<endl<<endl;
		outlog<<"for("<<(yyvsp[(3) - (7)])->getname()<<(yyvsp[(4) - (7)])->getname()<<(yyvsp[(5) - (7)])->getname()<<")\n"<<(yyvsp[(7) - (7)])->getname()<<endl<<endl;
			
		(yyval) = new symbol_info("for("+(yyvsp[(3) - (7)])->getname()+(yyvsp[(4) - (7)])->getname()+(yyvsp[(5) - (7)])->getname()+")\n"+(yyvsp[(7) - (7)])->getname(),"stmnt");
	
	}
    break;

  case 29:
#line 266 "syntax_analyzer.y"
    {
	
		outlog<<"At line no: "<<lines<<" statement : IF LPAREN expression RPAREN statement  "<<endl<<endl;
		outlog<<"if("<<(yyvsp[(3) - (5)])->getname()<<")\n"<<(yyvsp[(5) - (5)])->getname()<<endl<<endl;
			
		(yyval) = new symbol_info("if("+(yyvsp[(3) - (5)])->getname()+")\n"+(yyvsp[(5) - (5)])->getname(),"stmnt");

	}
    break;

  case 30:
#line 275 "syntax_analyzer.y"
    {
	
		outlog<<"At line no: "<<lines<<" statement : IF LPAREN expression RPAREN statement ELSE statement  "<<endl<<endl;
		outlog<<"if("<<(yyvsp[(3) - (7)])->getname()<<")\n"<<(yyvsp[(5) - (7)])->getname()<<"else"<<(yyvsp[(7) - (7)])->getname()<<endl<<endl;
			
		(yyval) = new symbol_info("if(\n"+(yyvsp[(3) - (7)])->getname()+")\n"+(yyvsp[(5) - (7)])->getname()+"else\n"+(yyvsp[(7) - (7)])->getname(),"stmnt");

	}
    break;

  case 31:
#line 284 "syntax_analyzer.y"
    {
		
		outlog<<"At line no: "<<lines<<" statement : WHILE LPAREN expression RPAREN statement  "<<endl<<endl;
		outlog<<"while("<<(yyvsp[(3) - (5)])->getname()<<")\n"<<(yyvsp[(5) - (5)])->getname()<<endl<<endl;
			
		(yyval) = new symbol_info("while(\n"+(yyvsp[(3) - (5)])->getname()+")\n"+(yyvsp[(5) - (5)])->getname(),"stmnt");

	}
    break;

  case 32:
#line 293 "syntax_analyzer.y"
    {
	
		outlog<<"At line no: "<<lines<<" statement : PRINTLN LPAREN ID RPAREN SEMICOLON  "<<endl<<endl;
		outlog<<(yyvsp[(1) - (5)])->getname()<<"("<<(yyvsp[(3) - (5)])->getname()<<")\n"<<";"<<endl<<endl;
			
		(yyval) = new symbol_info((yyvsp[(1) - (5)])->getname()+"(\n"+(yyvsp[(3) - (5)])->getname()+")\n"+";\n","stmnt");

	}
    break;

  case 33:
#line 302 "syntax_analyzer.y"
    {
	
		outlog<<"At line no: "<<lines<<" statement : RETURN expression SEMICOLON  "<<endl<<endl;
		outlog<<"return"<<(yyvsp[(2) - (3)])->getname()<<";"<<endl<<endl;
			
		(yyval) = new symbol_info("return\n"+(yyvsp[(2) - (3)])->getname()+";\n","stmnt");

	}
    break;

  case 34:
#line 313 "syntax_analyzer.y"
    {
             
            outlog<<"At line no: "<<lines<<" expression_statement : SEMICOLON  "<<endl<<endl;
            outlog<<(";\n")<<endl<<endl;

			(yyval) = new symbol_info((";\n"),"expression_statement");

            }
    break;

  case 35:
#line 322 "syntax_analyzer.y"
    {
            
            outlog<<"At line no: "<<lines<<" expression_statement : expression SEMICOLON  "<<endl<<endl;
            outlog<<(yyvsp[(1) - (2)])->getname()<<(";\n")<<endl<<endl;

			(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+(";\n"),"expression_statement");

            }
    break;

  case 36:
#line 333 "syntax_analyzer.y"
    {
            // 
            outlog<<"At line no: "<<lines<<" variable : ID "<<endl<<endl;
            outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

			(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"variable");
            }
    break;

  case 37:
#line 341 "syntax_analyzer.y"
    {
            // 
            outlog<<"At line no: "<<lines<<" variable : ID LTHIRD expression RTHIRD  "<<endl<<endl;
            outlog<<(yyvsp[(1) - (4)])->getname()<<" "<<"[\n"<<(yyvsp[(3) - (4)])->getname()<<"]\n"<<endl<<endl;

			(yyval) = new symbol_info((yyvsp[(1) - (4)])->getname()+" "+"[\n"+(yyvsp[(3) - (4)])->getname()+"]\n","variable");
            }
    break;

  case 38:
#line 350 "syntax_analyzer.y"
    {
             
            outlog<<"At line no: "<<lines<<" expression : logic_expression  "<<endl<<endl;
            outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

			(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"expression");
            }
    break;

  case 39:
#line 358 "syntax_analyzer.y"
    {
             
            outlog<<"At line no: "<<lines<<" expression : variable ASSIGNOP logic_expression  "<<endl<<endl;
            outlog<<(yyvsp[(1) - (3)])->getname()<<(yyvsp[(2) - (3)])->getname()<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;

		    (yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+" "+(yyvsp[(2) - (3)])->getname()=" "+(yyvsp[(3) - (3)])->getname(),"expression");
            }
    break;

  case 40:
#line 368 "syntax_analyzer.y"
    {
                   
                    outlog<<"At line no: "<<lines<<" logic_expression : rel_expression  "<<endl<<endl;
                    outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

			        (yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"logic_expression");
                }
    break;

  case 41:
#line 376 "syntax_analyzer.y"
    {
                   
                    outlog<<"At line no: "<<lines<<" logic_expression : logic_expression LOGICOP rel_expression  "<<endl<<endl;
                    outlog<<(yyvsp[(1) - (3)])->getname()<<(yyvsp[(2) - (3)])->getname()<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;

		            (yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+" "+(yyvsp[(2) - (3)])->getname()=" "+(yyvsp[(3) - (3)])->getname(),"logic_expression");
                }
    break;

  case 42:
#line 386 "syntax_analyzer.y"
    {
                  
                    outlog<<"At line no: "<<lines<<" rel_expression : simple_expression  "<<endl<<endl;
                    outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

			        (yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"rel_expression");
                }
    break;

  case 43:
#line 394 "syntax_analyzer.y"
    {
                  
                    outlog<<"At line no: "<<lines<<" rel_expression : simple_expression RELOP simple_expression  "<<endl<<endl;
                    outlog<<(yyvsp[(1) - (3)])->getname()<<(yyvsp[(2) - (3)])->getname()<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;

		            (yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+" "+(yyvsp[(2) - (3)])->getname()=" "+(yyvsp[(3) - (3)])->getname(),"rel_expression");
                }
    break;

  case 44:
#line 404 "syntax_analyzer.y"
    {
                     
                    outlog<<"At line no: "<<lines<<" simple_expression : term  "<<endl<<endl;
                    outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

			        (yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"simple_expression");
                    }
    break;

  case 45:
#line 412 "syntax_analyzer.y"
    {
                     
                    outlog<<"At line no: "<<lines<<" simple_expression : simple_expression ADDOP term  "<<endl<<endl;
                    outlog<<(yyvsp[(1) - (3)])->getname()<<(yyvsp[(2) - (3)])->getname()<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;

		            (yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+" "+(yyvsp[(2) - (3)])->getname()=" "+(yyvsp[(3) - (3)])->getname(),"simple_expression");
                    }
    break;

  case 46:
#line 422 "syntax_analyzer.y"
    {
       
        outlog<<"At line no: "<<lines<<" term : unary_expression  "<<endl<<endl;
        outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"term");
    }
    break;

  case 47:
#line 430 "syntax_analyzer.y"
    {
       
        outlog<<"At line no: "<<lines<<" term : term MULOP unary_expression  "<<endl<<endl;
        outlog<<(yyvsp[(1) - (3)])->getname()<<(yyvsp[(2) - (3)])->getname()<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;

		(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+" "+(yyvsp[(2) - (3)])->getname()=" "+(yyvsp[(3) - (3)])->getname(),"term");
    }
    break;

  case 48:
#line 440 "syntax_analyzer.y"
    {
                    
                    outlog<<"At line no: "<<lines<<" unary_expression : ADDOP unary_expression  "<<endl<<endl;
                    outlog<<(yyvsp[(1) - (2)])->getname()<<" "<<(yyvsp[(2) - (2)])->getname()<<endl<<endl;

			        (yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+" "+(yyvsp[(2) - (2)])->getname(),"unary_expression");
                }
    break;

  case 49:
#line 448 "syntax_analyzer.y"
    {
                   
                    outlog<<"At line no: "<<lines<<" unary_expression :  NOT unary_expression "<<endl<<endl;
                    outlog<<"not"<<(yyvsp[(2) - (2)])->getname()<<endl<<endl;

			        (yyval) = new symbol_info("not"+(yyvsp[(2) - (2)])->getname(),"unary_expression");
                }
    break;

  case 50:
#line 456 "syntax_analyzer.y"
    {
                   
                    outlog<<"At line no: "<<lines<<" unary_expression : factor  "<<endl<<endl;
                    outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

			        (yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"unary_expression");
                }
    break;

  case 51:
#line 466 "syntax_analyzer.y"
    {
          
            outlog<<"At line no: "<<lines<<" factor : variable  "<<endl<<endl;
            outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

			(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"factor");
        }
    break;

  case 52:
#line 474 "syntax_analyzer.y"
    {
          
            outlog<<"At line no: "<<lines<<" factor : ID LPAREN argument_list RPAREN  "<<endl<<endl;
            outlog<<(yyvsp[(1) - (4)])->getname()<<" "<<"(\n"<<(yyvsp[(3) - (4)])->getname()<<")\n"<<endl<<endl;

			(yyval) = new symbol_info((yyvsp[(1) - (4)])->getname()+" "+"(\n"+(yyvsp[(3) - (4)])->getname()+")\n","func_def");
        }
    break;

  case 53:
#line 482 "syntax_analyzer.y"
    {
          
            outlog<<"At line no: "<<lines<<" factor : LPAREN expression RPAREN  "<<endl<<endl;
            outlog<<"(\n"<<(yyvsp[(2) - (3)])->getname()<<")\n"<<endl<<endl;

			(yyval) = new symbol_info("(\n"+(yyvsp[(2) - (3)])->getname()+")\n","func_def");
        }
    break;

  case 54:
#line 490 "syntax_analyzer.y"
    {
          
            outlog<<"At line no: "<<lines<<" factor : CONST_INT  "<<endl<<endl;
            outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

			(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"factor");
        }
    break;

  case 55:
#line 498 "syntax_analyzer.y"
    {
          
            outlog<<"At line no: "<<lines<<" factor : CONST_FLOAT  "<<endl<<endl;
            outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

			(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"factor");
        }
    break;

  case 56:
#line 506 "syntax_analyzer.y"
    {
          
            outlog<<"At line no: "<<lines<<" factor : variable INCOP  "<<endl<<endl;
            outlog<<(yyvsp[(1) - (2)])->getname()<<(yyvsp[(2) - (2)])->getname()<<endl<<endl;

			(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+" "+(yyvsp[(2) - (2)])->getname(),"factor");
        }
    break;

  case 57:
#line 514 "syntax_analyzer.y"
    {
          
            outlog<<"At line no: "<<lines<<" factor : variable DECOP  "<<endl<<endl;
            outlog<<(yyvsp[(1) - (2)])->getname()<<(yyvsp[(2) - (2)])->getname()<<endl<<endl;

			(yyval) = new symbol_info((yyvsp[(1) - (2)])->getname()+" "+(yyvsp[(2) - (2)])->getname(),"factor");
        }
    break;

  case 58:
#line 525 "syntax_analyzer.y"
    {
                 
                outlog<<"At line no: "<<lines<<" argument_list : arguments  "<<endl<<endl;
                outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

			    (yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"argument_list");
            }
    break;

  case 59:
#line 533 "syntax_analyzer.y"
    {
                
                outlog<<"At line no: "<<lines<<" argument_list : no argument  "<<endl<<endl;
            }
    break;

  case 60:
#line 540 "syntax_analyzer.y"
    {
            // 
            outlog<<"At line no: "<<lines<<" arguments : arguments COMMA logic_expression  "<<endl<<endl;
            outlog<<(yyvsp[(1) - (3)])->getname()<<",\n"<<(yyvsp[(3) - (3)])->getname()<<endl<<endl;

			(yyval) = new symbol_info((yyvsp[(1) - (3)])->getname()+",\n"+(yyvsp[(3) - (3)])->getname(),"arguments");
        }
    break;

  case 61:
#line 548 "syntax_analyzer.y"
    {
            // 
            outlog<<"At line no: "<<lines<<" arguments : logic_expression  "<<endl<<endl;
            outlog<<(yyvsp[(1) - (1)])->getname()<<endl<<endl;

			(yyval) = new symbol_info((yyvsp[(1) - (1)])->getname(),"arguments");
        }
    break;


/* Line 1267 of yacc.c.  */
#line 2184 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 560 "syntax_analyzer.y"





int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Please provide input file name and try again\n");
		return 0;
	}
	yyin = fopen(argv[1], "r");
	outlog.open("my_log.txt", ios::trunc);
	
	if(yyin == NULL)
	{
		cout<<"Couldn't open file"<<endl;
		return 0;
	}
    
	yyparse();
	
 	outlog<<"Total number of lines: "<<lines<<endl;	

	outlog.close();
	
	fclose(yyin);
	
	return 0;
}
