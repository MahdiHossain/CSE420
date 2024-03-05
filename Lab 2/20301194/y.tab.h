/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
     SEMICOLON = 296,
     LOWER_THAN_ELSE = 297
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
#define LOWER_THAN_ELSE 297




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

