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
     ID = 258,
     INTVAL = 259,
     FLTVAL = 260,
     DBLVAL = 261,
     STRVAL = 262,
     CHARVAL = 263,
     VOID = 264,
     CHAR = 265,
     SHORT = 266,
     INT = 267,
     LONG = 268,
     FLOAT = 269,
     DOUBLE = 270,
     RETURN = 271,
     IF = 272,
     ELSE = 273,
     WHILE = 274,
     EQ = 275,
     NE = 276,
     GE = 277,
     LE = 278,
     GT = 279,
     LT = 280,
     ADD = 281,
     SUB = 282,
     MUL = 283,
     DIV = 284,
     MOD = 285,
     OR = 286,
     AND = 287,
     BITOR = 288,
     BITAND = 289,
     BITXOR = 290,
     NOT = 291,
     COM = 292,
     LSH = 293,
     RSH = 294,
     SET = 295,
     SETADD = 296,
     SETSUB = 297,
     SETMUL = 298,
     SETDIV = 299,
     SETMOD = 300,
     SETOR = 301,
     SETAND = 302,
     SETXOR = 303,
     SETLSH = 304,
     SETRSH = 305,
     UNSIGNED = 306,
     TYPEDEF = 307,
     STRUCT = 308,
     UNION = 309,
     CONST = 310,
     STATIC = 311,
     EXTERN = 312,
     AUTO = 313,
     REGISTER = 314,
     SIZEOF = 315,
     DO = 316,
     FOR = 317,
     SWITCH = 318,
     CASE = 319,
     DEFAULT = 320,
     CONTINUE = 321,
     BREAK = 322,
     GOTO = 323
   };
#endif
/* Tokens.  */
#define ID 258
#define INTVAL 259
#define FLTVAL 260
#define DBLVAL 261
#define STRVAL 262
#define CHARVAL 263
#define VOID 264
#define CHAR 265
#define SHORT 266
#define INT 267
#define LONG 268
#define FLOAT 269
#define DOUBLE 270
#define RETURN 271
#define IF 272
#define ELSE 273
#define WHILE 274
#define EQ 275
#define NE 276
#define GE 277
#define LE 278
#define GT 279
#define LT 280
#define ADD 281
#define SUB 282
#define MUL 283
#define DIV 284
#define MOD 285
#define OR 286
#define AND 287
#define BITOR 288
#define BITAND 289
#define BITXOR 290
#define NOT 291
#define COM 292
#define LSH 293
#define RSH 294
#define SET 295
#define SETADD 296
#define SETSUB 297
#define SETMUL 298
#define SETDIV 299
#define SETMOD 300
#define SETOR 301
#define SETAND 302
#define SETXOR 303
#define SETLSH 304
#define SETRSH 305
#define UNSIGNED 306
#define TYPEDEF 307
#define STRUCT 308
#define UNION 309
#define CONST 310
#define STATIC 311
#define EXTERN 312
#define AUTO 313
#define REGISTER 314
#define SIZEOF 315
#define DO 316
#define FOR 317
#define SWITCH 318
#define CASE 319
#define DEFAULT 320
#define CONTINUE 321
#define BREAK 322
#define GOTO 323




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 15 "fcg.y"
{
    char* id;
}
/* Line 1529 of yacc.c.  */
#line 189 "fcg.yacc.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

