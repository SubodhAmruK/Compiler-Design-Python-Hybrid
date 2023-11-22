/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

	#include <stdio.h>
	#include <stdarg.h>
	#include "symTab_new.h"

	int yylex();
	void yyerror(const char *msg);
    extern int yylineno;

	void finish()
	{
		printf("\n------------------->valid python syntax<--------------------\n\n\n\n");
        	print_symbol_table();
		exit(0);
	}


#line 89 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_identifier = 258,            /* T_identifier  */
    T_False = 259,                 /* T_False  */
    T_True = 260,                  /* T_True  */
    T_number = 261,                /* T_number  */
    Indent = 262,                  /* Indent  */
    Nodent = 263,                  /* Nodent  */
    Dedent = 264,                  /* Dedent  */
    T_string = 265,                /* T_string  */
    T_print = 266,                 /* T_print  */
    T_colon = 267,                 /* T_colon  */
    T_newLine = 268,               /* T_newLine  */
    T_lesserThan = 269,            /* T_lesserThan  */
    T_greaterThanEqualTo = 270,    /* T_greaterThanEqualTo  */
    T_lesserThanEqualTo = 271,     /* T_lesserThanEqualTo  */
    T_or = 272,                    /* T_or  */
    T_and = 273,                   /* T_and  */
    T_not = 274,                   /* T_not  */
    T_assignOP = 275,              /* T_assignOP  */
    T_notEqualOP = 276,            /* T_notEqualOP  */
    T_equalOP = 277,               /* T_equalOP  */
    T_greaterThan = 278,           /* T_greaterThan  */
    T_in = 279,                    /* T_in  */
    T_if = 280,                    /* T_if  */
    T_elif = 281,                  /* T_elif  */
    T_while = 282,                 /* T_while  */
    T_else = 283,                  /* T_else  */
    T_import = 284,                /* T_import  */
    T_break = 285,                 /* T_break  */
    T_pass = 286,                  /* T_pass  */
    T_minus = 287,                 /* T_minus  */
    T_plus = 288,                  /* T_plus  */
    T_division = 289,              /* T_division  */
    T_multiply = 290,              /* T_multiply  */
    T_openParanthesis = 291,       /* T_openParanthesis  */
    T_closeParanthesis = 292,      /* T_closeParanthesis  */
    T_EOF = 293,                   /* T_EOF  */
    T_return = 294,                /* T_return  */
    T_openBracket = 295,           /* T_openBracket  */
    T_closeBracket = 296,          /* T_closeBracket  */
    T_def = 297,                   /* T_def  */
    T_comma = 298,                 /* T_comma  */
    T_List = 299,                  /* T_List  */
    T_range = 300,                 /* T_range  */
    T_None = 301,                  /* T_None  */
    T_continue = 302               /* T_continue  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_identifier 258
#define T_False 259
#define T_True 260
#define T_number 261
#define Indent 262
#define Nodent 263
#define Dedent 264
#define T_string 265
#define T_print 266
#define T_colon 267
#define T_newLine 268
#define T_lesserThan 269
#define T_greaterThanEqualTo 270
#define T_lesserThanEqualTo 271
#define T_or 272
#define T_and 273
#define T_not 274
#define T_assignOP 275
#define T_notEqualOP 276
#define T_equalOP 277
#define T_greaterThan 278
#define T_in 279
#define T_if 280
#define T_elif 281
#define T_while 282
#define T_else 283
#define T_import 284
#define T_break 285
#define T_pass 286
#define T_minus 287
#define T_plus 288
#define T_division 289
#define T_multiply 290
#define T_openParanthesis 291
#define T_closeParanthesis 292
#define T_EOF 293
#define T_return 294
#define T_openBracket 295
#define T_closeBracket 296
#define T_def 297
#define T_comma 298
#define T_List 299
#define T_range 300
#define T_None 301
#define T_continue 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "parser.y"
char *data; int indent_depth;

#line 239 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_identifier = 3,               /* T_identifier  */
  YYSYMBOL_T_False = 4,                    /* T_False  */
  YYSYMBOL_T_True = 5,                     /* T_True  */
  YYSYMBOL_T_number = 6,                   /* T_number  */
  YYSYMBOL_Indent = 7,                     /* Indent  */
  YYSYMBOL_Nodent = 8,                     /* Nodent  */
  YYSYMBOL_Dedent = 9,                     /* Dedent  */
  YYSYMBOL_T_string = 10,                  /* T_string  */
  YYSYMBOL_T_print = 11,                   /* T_print  */
  YYSYMBOL_T_colon = 12,                   /* T_colon  */
  YYSYMBOL_T_newLine = 13,                 /* T_newLine  */
  YYSYMBOL_T_lesserThan = 14,              /* T_lesserThan  */
  YYSYMBOL_T_greaterThanEqualTo = 15,      /* T_greaterThanEqualTo  */
  YYSYMBOL_T_lesserThanEqualTo = 16,       /* T_lesserThanEqualTo  */
  YYSYMBOL_T_or = 17,                      /* T_or  */
  YYSYMBOL_T_and = 18,                     /* T_and  */
  YYSYMBOL_T_not = 19,                     /* T_not  */
  YYSYMBOL_T_assignOP = 20,                /* T_assignOP  */
  YYSYMBOL_T_notEqualOP = 21,              /* T_notEqualOP  */
  YYSYMBOL_T_equalOP = 22,                 /* T_equalOP  */
  YYSYMBOL_T_greaterThan = 23,             /* T_greaterThan  */
  YYSYMBOL_T_in = 24,                      /* T_in  */
  YYSYMBOL_T_if = 25,                      /* T_if  */
  YYSYMBOL_T_elif = 26,                    /* T_elif  */
  YYSYMBOL_T_while = 27,                   /* T_while  */
  YYSYMBOL_T_else = 28,                    /* T_else  */
  YYSYMBOL_T_import = 29,                  /* T_import  */
  YYSYMBOL_T_break = 30,                   /* T_break  */
  YYSYMBOL_T_pass = 31,                    /* T_pass  */
  YYSYMBOL_T_minus = 32,                   /* T_minus  */
  YYSYMBOL_T_plus = 33,                    /* T_plus  */
  YYSYMBOL_T_division = 34,                /* T_division  */
  YYSYMBOL_T_multiply = 35,                /* T_multiply  */
  YYSYMBOL_T_openParanthesis = 36,         /* T_openParanthesis  */
  YYSYMBOL_T_closeParanthesis = 37,        /* T_closeParanthesis  */
  YYSYMBOL_T_EOF = 38,                     /* T_EOF  */
  YYSYMBOL_T_return = 39,                  /* T_return  */
  YYSYMBOL_T_openBracket = 40,             /* T_openBracket  */
  YYSYMBOL_T_closeBracket = 41,            /* T_closeBracket  */
  YYSYMBOL_T_def = 42,                     /* T_def  */
  YYSYMBOL_T_comma = 43,                   /* T_comma  */
  YYSYMBOL_T_List = 44,                    /* T_List  */
  YYSYMBOL_T_range = 45,                   /* T_range  */
  YYSYMBOL_T_None = 46,                    /* T_None  */
  YYSYMBOL_T_continue = 47,                /* T_continue  */
  YYSYMBOL_YYACCEPT = 48,                  /* $accept  */
  YYSYMBOL_Start = 49,                     /* Start  */
  YYSYMBOL_constant = 50,                  /* constant  */
  YYSYMBOL_term = 51,                      /* term  */
  YYSYMBOL_list_index = 52,                /* list_index  */
  YYSYMBOL_StartParse = 53,                /* StartParse  */
  YYSYMBOL_54_1 = 54,                      /* $@1  */
  YYSYMBOL_basic_stmt = 55,                /* basic_stmt  */
  YYSYMBOL_arith_exp = 56,                 /* arith_exp  */
  YYSYMBOL_bool_exp = 57,                  /* bool_exp  */
  YYSYMBOL_bool_term = 58,                 /* bool_term  */
  YYSYMBOL_bool_factor = 59,               /* bool_factor  */
  YYSYMBOL_import_stmt = 60,               /* import_stmt  */
  YYSYMBOL_pass_stmt = 61,                 /* pass_stmt  */
  YYSYMBOL_continue_stmt = 62,             /* continue_stmt  */
  YYSYMBOL_break_stmt = 63,                /* break_stmt  */
  YYSYMBOL_return_stmt = 64,               /* return_stmt  */
  YYSYMBOL_assign_stmt = 65,               /* assign_stmt  */
  YYSYMBOL_66_2 = 66,                      /* $@2  */
  YYSYMBOL_print_stmt = 67,                /* print_stmt  */
  YYSYMBOL_finalStatements = 68,           /* finalStatements  */
  YYSYMBOL_cmpd_stmt = 69,                 /* cmpd_stmt  */
  YYSYMBOL_if_stmt = 70,                   /* if_stmt  */
  YYSYMBOL_elif_stmts = 71,                /* elif_stmts  */
  YYSYMBOL_else_stmt = 72,                 /* else_stmt  */
  YYSYMBOL_func_def = 73,                  /* func_def  */
  YYSYMBOL_74_3 = 74,                      /* $@3  */
  YYSYMBOL_75_4 = 75,                      /* $@4  */
  YYSYMBOL_func_call = 76,                 /* func_call  */
  YYSYMBOL_77_5 = 77,                      /* $@5  */
  YYSYMBOL_range_args = 78,                /* range_args  */
  YYSYMBOL_while_stmt = 79,                /* while_stmt  */
  YYSYMBOL_start_suite = 80,               /* start_suite  */
  YYSYMBOL_suite = 81,                     /* suite  */
  YYSYMBOL_82_6 = 82,                      /* $@6  */
  YYSYMBOL_end_suite = 83,                 /* end_suite  */
  YYSYMBOL_84_7 = 84,                      /* $@7  */
  YYSYMBOL_param = 85,                     /* param  */
  YYSYMBOL_86_8 = 86,                      /* $@8  */
  YYSYMBOL_params = 87,                    /* params  */
  YYSYMBOL_88_9 = 88,                      /* $@9  */
  YYSYMBOL_list_element = 89,              /* list_element  */
  YYSYMBOL_list_elements = 90,             /* list_elements  */
  YYSYMBOL_91_10 = 91,                     /* $@10  */
  YYSYMBOL_92_11 = 92,                     /* $@11  */
  YYSYMBOL_93_12 = 93                      /* $@12  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    35,    36,    37,    39,    40,    41,    44,
      46,    46,    46,    46,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    58,    59,    60,    61,    62,    63,    64,
      67,    68,    69,    70,    71,    72,    73,    74,    76,    77,
      78,    79,    81,    82,    84,    85,    86,    87,    88,    90,
      91,    92,    93,    94,    94,    96,    98,    99,   100,   101,
     102,   104,   105,   108,   109,   111,   112,   114,   116,   116,
     116,   118,   118,   120,   121,   122,   124,   126,   127,   129,
     130,   131,   131,   133,   134,   135,   135,   136,   138,   138,
     138,   140,   140,   140,   142,   142,   144,   144,   144,   144,
     144,   144,   144
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_identifier",
  "T_False", "T_True", "T_number", "Indent", "Nodent", "Dedent",
  "T_string", "T_print", "T_colon", "T_newLine", "T_lesserThan",
  "T_greaterThanEqualTo", "T_lesserThanEqualTo", "T_or", "T_and", "T_not",
  "T_assignOP", "T_notEqualOP", "T_equalOP", "T_greaterThan", "T_in",
  "T_if", "T_elif", "T_while", "T_else", "T_import", "T_break", "T_pass",
  "T_minus", "T_plus", "T_division", "T_multiply", "T_openParanthesis",
  "T_closeParanthesis", "T_EOF", "T_return", "T_openBracket",
  "T_closeBracket", "T_def", "T_comma", "T_List", "T_range", "T_None",
  "T_continue", "$accept", "Start", "constant", "term", "list_index",
  "StartParse", "$@1", "basic_stmt", "arith_exp", "bool_exp", "bool_term",
  "bool_factor", "import_stmt", "pass_stmt", "continue_stmt", "break_stmt",
  "return_stmt", "assign_stmt", "$@2", "print_stmt", "finalStatements",
  "cmpd_stmt", "if_stmt", "elif_stmts", "else_stmt", "func_def", "$@3",
  "$@4", "func_call", "$@5", "range_args", "while_stmt", "start_suite",
  "suite", "$@6", "end_suite", "$@7", "param", "$@8", "params", "$@9",
  "list_element", "list_elements", "$@10", "$@11", "$@12", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-119)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     118,     2,    48,  -119,  -119,  -119,  -119,    16,   118,    17,
      13,    13,    41,  -119,  -119,   106,    13,  -119,    74,  -119,
    -119,    83,  -119,  -119,  -119,    64,  -119,   271,  -119,     8,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,    95,  -119,
    -119,  -119,  -119,  -119,  -119,   228,     4,    75,    24,  -119,
      13,  -119,    73,   271,   105,   113,  -119,   106,    51,   247,
      89,  -119,  -119,  -119,   106,   106,   106,   106,   106,   129,
     106,   106,   106,   106,    13,    13,  -119,   -16,   124,  -119,
     271,  -119,  -119,    92,   124,    98,   210,   210,   154,  -119,
    -119,   100,   192,   192,   192,   192,   192,  -119,    51,    51,
    -119,  -119,   145,  -119,  -119,   118,  -119,  -119,  -119,    99,
     103,  -119,   104,  -119,    11,   137,  -119,    54,  -119,  -119,
    -119,   108,   108,   108,  -119,   140,  -119,   165,    13,   141,
    -119,  -119,   152,    24,  -119,  -119,  -119,   115,   122,   148,
     150,   210,  -119,   126,   108,   166,  -119,    20,  -119,    54,
     210,  -119,   130,   162,  -119,   138,   165,    68,  -119,   165,
    -119,    54,   179,  -119,   210,   177,   148,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,   130,  -119
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     6,    41,    40,     3,     4,     0,     0,     0,
       0,     0,     0,    47,    45,     0,     0,    48,     0,     5,
      46,     0,     7,    23,     8,     0,    56,    19,    20,    37,
      38,    17,    14,    16,    15,    22,    18,    21,     0,    57,
      61,    58,    59,    62,    60,     0,     0,     0,     0,    10,
       0,    42,     6,     0,     0,     0,    44,     0,    28,     0,
       0,    68,     1,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     6,   102,    53,
      49,    50,    51,     0,   102,     0,     0,     0,     0,    29,
      43,     0,    31,    35,    34,    39,    33,    36,    25,    24,
      27,    26,     0,    30,    32,     0,    96,    98,   100,     0,
       0,     9,     0,    55,     6,     0,    77,    63,    76,    69,
      12,    95,    95,    95,    52,     0,    72,     0,     0,     0,
      64,    65,    90,     0,    97,    99,   101,    75,     0,    81,
       0,     0,    88,     0,    95,     0,    54,    85,    78,     0,
       0,    67,    93,     0,    94,    74,     0,     0,    80,     0,
      82,     0,     0,    89,     0,     0,    81,    83,    86,    66,
      91,    70,    73,    79,    93,    92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,   139,   -41,  -119,    -4,  -119,   -75,   -10,    -8,
      31,   184,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -118,  -119,  -119,   -58,  -119,  -119,  -119,  -119,   153,  -119,
    -119,  -119,   -74,    33,  -119,  -119,  -119,  -119,  -119,    26,
    -119,  -101,   119,  -119,  -119,  -119
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    21,    22,    23,    24,    25,   105,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,   110,    37,
      38,    39,    40,   130,   131,    41,    91,   132,    42,    47,
     138,    43,   117,   148,   149,   158,   159,   143,   152,   163,
     174,   134,   109,   121,   122,   123
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    53,    54,    55,    49,    58,    59,    85,    60,   139,
       5,   116,   116,   118,     6,    44,    52,     3,     4,     5,
     -71,   135,   136,     6,    46,    74,    75,    52,   156,   157,
       5,    45,     9,   -87,     6,    80,     9,    81,   166,   167,
      53,   168,    60,   154,    56,    15,   -87,    88,   -87,    16,
      19,    46,    48,    50,    92,    93,    94,    95,    96,    19,
      98,    99,   100,   101,   102,   102,   116,   151,    45,     1,
      19,     2,     3,     4,     5,   116,   161,    61,     6,     7,
     128,   -84,   129,    62,   -71,    72,    73,     9,    46,   116,
     171,   160,   144,    10,   -84,    11,   -84,    12,    13,    14,
      15,   120,    63,   169,    16,   103,   104,    17,    76,    52,
      18,    84,     5,    46,    19,    20,     6,    86,    53,     1,
     140,     2,     3,     4,     5,    87,    90,   106,     6,     7,
     107,     8,    97,   111,   108,   113,   119,     9,    15,   125,
     124,   126,    57,    10,   127,    11,   137,    12,    13,    14,
      15,   133,    19,   141,    16,   142,   -13,    17,   145,   146,
      18,   147,   150,   153,    19,    20,     1,    67,     2,     3,
       4,     5,   155,   162,   164,     6,     7,    70,    71,    72,
      73,   165,   170,   172,     9,    83,    70,    71,    72,    73,
      10,    89,    11,    51,    12,    13,    14,    15,    82,   173,
     175,    16,     0,   112,    17,     0,     0,    18,     0,     0,
       0,    19,    20,   114,     3,     4,     5,     0,     0,     0,
       6,     7,     0,   115,    70,    71,    72,    73,     0,     9,
       0,    77,     3,     4,     5,     0,     0,     0,     6,    12,
      13,    14,    15,     0,     0,     0,    16,     9,     0,    17,
       0,     0,     0,     0,     0,     0,    19,    20,     0,     0,
      15,    64,    65,    66,    16,     0,     0,     0,    78,    67,
      68,    69,     0,    79,    19,     0,     0,     0,     0,    70,
      71,    72,    73,     0,    89,    64,    65,    66,     0,     0,
       0,     0,     0,    67,    68,    69,     0,     0,     0,     0,
       0,     0,     0,    70,    71,    72,    73
};

static const yytype_int16 yycheck[] =
{
      10,    11,    10,    11,     8,    15,    16,    48,    16,   127,
       6,    86,    87,    87,    10,    13,     3,     4,     5,     6,
      36,   122,   123,    10,    40,    17,    18,     3,     8,     9,
       6,    20,    19,    13,    10,    45,    19,    45,   156,   157,
      50,   159,    50,   144,     3,    32,    26,    57,    28,    36,
      46,    40,    36,    36,    64,    65,    66,    67,    68,    46,
      70,    71,    72,    73,    74,    75,   141,   141,    20,     1,
      46,     3,     4,     5,     6,   150,   150,     3,    10,    11,
      26,    13,    28,     0,    36,    34,    35,    19,    40,   164,
     164,   149,   133,    25,    26,    27,    28,    29,    30,    31,
      32,   105,    38,   161,    36,    74,    75,    39,    13,     3,
      42,    36,     6,    40,    46,    47,    10,    12,   128,     1,
     128,     3,     4,     5,     6,    12,    37,     3,    10,    11,
       6,    13,     3,    41,    10,    37,    36,    19,    32,    36,
      41,    37,    36,    25,     7,    27,     6,    29,    30,    31,
      32,    43,    46,    12,    36,     3,    38,    39,    43,    37,
      42,    13,    12,    37,    46,    47,     1,    22,     3,     4,
       5,     6,     6,    43,    12,    10,    11,    32,    33,    34,
      35,    43,     3,     6,    19,    46,    32,    33,    34,    35,
      25,    37,    27,     9,    29,    30,    31,    32,    45,   166,
     174,    36,    -1,    84,    39,    -1,    -1,    42,    -1,    -1,
      -1,    46,    47,     3,     4,     5,     6,    -1,    -1,    -1,
      10,    11,    -1,    13,    32,    33,    34,    35,    -1,    19,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    10,    29,
      30,    31,    32,    -1,    -1,    -1,    36,    19,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      32,    14,    15,    16,    36,    -1,    -1,    -1,    40,    22,
      23,    24,    -1,    45,    46,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    -1,    37,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    10,    11,    13,    19,
      25,    27,    29,    30,    31,    32,    36,    39,    42,    46,
      47,    49,    50,    51,    52,    53,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    67,    68,    69,
      70,    73,    76,    79,    13,    20,    40,    77,    36,    53,
      36,    59,     3,    56,    57,    57,     3,    36,    56,    56,
      57,     3,     0,    38,    14,    15,    16,    22,    23,    24,
      32,    33,    34,    35,    17,    18,    13,     3,    40,    45,
      56,    57,    76,    50,    36,    51,    12,    12,    56,    37,
      37,    74,    56,    56,    56,    56,    56,     3,    56,    56,
      56,    56,    56,    58,    58,    54,     3,     6,    10,    90,
      66,    41,    90,    37,     3,    13,    55,    80,    80,    36,
      53,    91,    92,    93,    41,    36,    37,     7,    26,    28,
      71,    72,    75,    43,    89,    89,    89,     6,    78,    68,
      57,    12,     3,    85,    51,    43,    37,    13,    81,    82,
      12,    80,    86,    37,    89,     6,     8,     9,    83,    84,
      71,    80,    43,    87,    12,    43,    68,    68,    68,    71,
       3,    80,     6,    81,    88,    87
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    51,    51,    51,    52,
      53,    54,    53,    53,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    58,    58,
      58,    58,    59,    59,    60,    61,    62,    63,    64,    65,
      65,    65,    65,    66,    65,    67,    68,    68,    68,    68,
      68,    69,    69,    70,    70,    71,    71,    72,    74,    75,
      73,    77,    76,    78,    78,    78,    79,    80,    80,    81,
      81,    82,    81,    83,    83,    84,    83,    83,    86,    85,
      85,    88,    87,    87,    89,    89,    91,    90,    92,    90,
      93,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     4,
       2,     0,     4,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       1,     1,     2,     3,     2,     1,     1,     1,     1,     3,
       3,     3,     5,     0,     7,     4,     1,     1,     1,     1,
       2,     1,     1,     4,     5,     1,     5,     3,     0,     0,
       9,     0,     5,     5,     3,     1,     4,     1,     4,     4,
       2,     0,     2,     2,     1,     0,     2,     0,     0,     3,
       0,     0,     4,     0,     3,     0,     0,     3,     0,     3,
       0,     3,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Start: StartParse T_EOF  */
#line 33 "parser.y"
                         {finish();}
#line 1596 "y.tab.c"
    break;

  case 3: /* constant: T_number  */
#line 35 "parser.y"
                    {insert("Constant", (yyvsp[0].data), (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1602 "y.tab.c"
    break;

  case 4: /* constant: T_string  */
#line 36 "parser.y"
                    {insert("Constant", (yyvsp[0].data), (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1608 "y.tab.c"
    break;

  case 5: /* constant: T_None  */
#line 37 "parser.y"
                          {insert("Constant", "None", (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1614 "y.tab.c"
    break;

  case 6: /* term: T_identifier  */
#line 39 "parser.y"
                    {check_scope((yyvsp[0].data), (yylsp[0]).first_line); insert("Identifier", (yyvsp[0].data), (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1620 "y.tab.c"
    break;

  case 9: /* list_index: T_identifier T_openBracket constant T_closeBracket  */
#line 44 "parser.y"
                                                                {check_scope((yyvsp[-3].data), (yylsp[-3]).first_line); is_iter((yyvsp[-3].data), (yylsp[-3]).first_line);}
#line 1626 "y.tab.c"
    break;

  case 11: /* $@1: %empty  */
#line 46 "parser.y"
                                                              {reset_depth();}
#line 1632 "y.tab.c"
    break;

  case 40: /* bool_term: T_True  */
#line 78 "parser.y"
                   {insert("Constant", "True", (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1638 "y.tab.c"
    break;

  case 41: /* bool_term: T_False  */
#line 79 "parser.y"
                    {insert("Constant", "False", (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1644 "y.tab.c"
    break;

  case 44: /* import_stmt: T_import T_identifier  */
#line 84 "parser.y"
                                    {insert("Package name", (yyvsp[0].data), (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1650 "y.tab.c"
    break;

  case 49: /* assign_stmt: T_identifier T_assignOP arith_exp  */
#line 90 "parser.y"
                                                {insert("Identifier", (yyvsp[-2].data), (yylsp[-2]).first_line, strlen((yyvsp[-2].data)));}
#line 1656 "y.tab.c"
    break;

  case 50: /* assign_stmt: T_identifier T_assignOP bool_exp  */
#line 91 "parser.y"
                                               {insert("Identifier", (yyvsp[-2].data), (yylsp[-2]).first_line, strlen((yyvsp[-2].data)));}
#line 1662 "y.tab.c"
    break;

  case 51: /* assign_stmt: T_identifier T_assignOP func_call  */
#line 92 "parser.y"
                                                 {insert("Identifier", (yyvsp[-2].data), (yylsp[-2]).first_line, strlen((yyvsp[-2].data)));}
#line 1668 "y.tab.c"
    break;

  case 52: /* assign_stmt: T_identifier T_assignOP T_openBracket list_elements T_closeBracket  */
#line 93 "parser.y"
                                                                                 {insert("List identifier", (yyvsp[-4].data), (yylsp[-4]).first_line, strlen((yyvsp[-4].data)));}
#line 1674 "y.tab.c"
    break;

  case 53: /* $@2: %empty  */
#line 94 "parser.y"
                                                          {insert("List identifier", (yyvsp[-2].data), (yylsp[-2]).first_line, strlen((yyvsp[-2].data)));}
#line 1680 "y.tab.c"
    break;

  case 60: /* finalStatements: error T_newLine  */
#line 102 "parser.y"
                                  {yyerrok; yyclearin;}
#line 1686 "y.tab.c"
    break;

  case 68: /* $@3: %empty  */
#line 116 "parser.y"
                              {insert("Func_Name", (yyvsp[0].data), (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1692 "y.tab.c"
    break;

  case 69: /* $@4: %empty  */
#line 116 "parser.y"
                                                                                                                 {flag = 1; func_no++;}
#line 1698 "y.tab.c"
    break;

  case 71: /* $@5: %empty  */
#line 118 "parser.y"
                         {insert("Func_Name", (yyvsp[0].data), (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1704 "y.tab.c"
    break;

  case 73: /* range_args: T_number T_comma T_number T_comma T_number  */
#line 120 "parser.y"
                                                        {insert("Constant", (yyvsp[-4].data), (yylsp[-4]).first_line, strlen((yyvsp[-4].data))); insert("Constant", (yyvsp[-2].data), (yylsp[-2]).first_line, strlen((yyvsp[-2].data))); insert("Constant", (yyvsp[0].data), (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1710 "y.tab.c"
    break;

  case 74: /* range_args: T_number T_comma T_number  */
#line 121 "parser.y"
                                               {insert("Constant", (yyvsp[-2].data), (yylsp[-2]).first_line, strlen((yyvsp[-2].data))); insert("Constant", (yyvsp[0].data), (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1716 "y.tab.c"
    break;

  case 75: /* range_args: T_number  */
#line 122 "parser.y"
                              {insert("Constant", (yyvsp[0].data), (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1722 "y.tab.c"
    break;

  case 81: /* $@6: %empty  */
#line 131 "parser.y"
        {reset_depth();}
#line 1728 "y.tab.c"
    break;

  case 85: /* $@7: %empty  */
#line 135 "parser.y"
            {flag = 0; cur_scope = 0;reset_depth();}
#line 1734 "y.tab.c"
    break;

  case 87: /* end_suite: %empty  */
#line 136 "parser.y"
            {reset_depth();}
#line 1740 "y.tab.c"
    break;

  case 88: /* $@8: %empty  */
#line 138 "parser.y"
                     {insert("Identifier", (yyvsp[0].data), (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1746 "y.tab.c"
    break;

  case 91: /* $@9: %empty  */
#line 140 "parser.y"
                              {insert("Identifier", (yyvsp[0].data), (yylsp[-1]).first_line, strlen((yyvsp[0].data)));}
#line 1752 "y.tab.c"
    break;

  case 96: /* $@10: %empty  */
#line 144 "parser.y"
                             {insert("Identifier", (yyvsp[0].data), (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1758 "y.tab.c"
    break;

  case 98: /* $@11: %empty  */
#line 144 "parser.y"
                                                                                                                        {insert("Constant", (yyvsp[0].data), (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1764 "y.tab.c"
    break;

  case 100: /* $@12: %empty  */
#line 144 "parser.y"
                                                                                                                                                                                                                 {insert("Constant", (yyvsp[0].data), (yylsp[0]).first_line, strlen((yyvsp[0].data)));}
#line 1770 "y.tab.c"
    break;


#line 1774 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 147 "parser.y"


void yyerror(const char *msg)
{
	printf("\nSyntax Error at Line %d, Column : %d\n",  yylineno, yylloc.last_column);
	exit(0);
}

int main()
{
    init_hash_table();
	yyparse();
	return 0;
}
