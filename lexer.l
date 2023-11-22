%{
	#include <string.h>
	#include "y.tab.h"
  #include "stack.h"

  /***
      ensures that if a rule matches but it doesn't return a
      value (for instance, a rule skipping whitespace or comments),
      the location of that non-token is skipped
  ***/
  #define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno; 		\
    yylloc.first_column = yycolumn; yylloc.last_column = yycolumn + yyleng - 1; 	\
    yycolumn += yyleng;

  //Declarations
  int yycolumn = 1;
  int beginning = 1;
  int indentation_type;
 	void display_token(char *token);
  int indent_type(int indent_depth);

  //Definitions
 	void display_token(char *token, char *symbol){
      if(beginning==1){
          printf("Tokens Generation Successful !!!...")
          printf("Token sequence..\n");
          beginning--;
      }
 	  printf("< %s , %s >\n",symbol, token);
 	}

  int indent_type(int indent_depth){
        if(indent_depth < peek())
        {
          while (indent_depth < peek()) pop();
          yylval.indent_depth = indent_depth;
          display_token("Dedent",yytext);
          return 1;
        }

        if(indent_depth == peek())
        {
          display_token("Nodent"," ");
          yylval.indent_depth = indent_depth;
          return 2;
        }
        if(indent_depth > peek())
        {
          push(indent_depth);
          display_token("Indent"," ");
          yylval.indent_depth = indent_depth;
          return 3;
        }
  }

%}

%option yylineno
multiline_comment_single  \'\'\'.+\'\'\'
multiline_comment_double  \"\"\".+\"\"\"
digit	[0-9]
letter	[a-zA-Z]
id	{letter}({letter}|{digit})*
digits	{digit}+
opFraction	(\.{digits})?
opExponent	([Ee][+-]?{digits})?
number	{digits}{opFraction}{opExponent}
single_quote_string \'([^\'\n])*\'
double_quote_string \"([^\"\n])*\"
%%

#.* {}
{multiline_comment_single} {}
{multiline_comment_double} {}
[ ] {}
"\n"  {yycolumn=1; display_token("< NL >",yytext); return T_newLine;}

[\t]* {
        indent_depth = strlen(yytext) + 1;
        printf("indent_depth: %d ",  indent_depth);
        indentation_type = indent_type(indent_depth);
        if(indentation_type == 1) return Dedent;
        else if(indentation_type == 2) return Nodent;
        else return Indent;
      }

"True" {display_token("True",yytext); return T_True;}
"False" {display_token("False",yytext); return T_False;}
"if" {display_token("if",yytext); return T_if;}
"in" {display_token("in",yytext); return T_in;}
"while" {display_token("while",yytext); return T_while;}
"continue" {display_token("continue",yytext); return T_continue;}
"break" {display_token("break", yytext); return T_break;}
"pass" {display_token("pass",yytext); return T_pass;}
"return" {display_token("return",yytext); return T_return;}
<<EOF>> {display_token("EOF"); return T_EOF;}
":" {display_token("colon",yytext); return T_colon;}
">" {display_token("greaterThan",yytext); return T_greaterThan;}
"<" {display_token("lesserThan",yytext); return T_lesserThan;}
">=" {display_token("greaterThanEqualTo",yytext); return T_greaterThanEqualTo;}
"<=" {display_token("lesserThanEqualTo",yytext); return T_lesserThanEqualTo;}
"==" {display_token("Equal Operator",yytext); return T_equalOP;}
"!=" {display_token("Not Equal Operator",yytext); return T_notEqualOP;}
"None" {display_token("None",yytext); return T_None;}
"and" {display_token("and",yytext); return T_and;}
"or" {display_token("or",yytext); return T_or;}
"not" {display_token("not",yytext); return T_not;}
"elif" {display_token("elif",yytext); return T_elif;}
"else" {display_token("else",yytext); return T_else;}
"def" {display_token("def",yytext); return T_def;}
"[" {display_token("openBracket",yytext); return T_openBracket;}
"]" {display_token("closeBracket",yytext); return T_closeBracket;}
"," {display_token("comma",yytext); return T_comma;}
"=" {display_token("assignOP",yytext); return T_assignOP;}
"+" {display_token("plus",yytext); return T_plus;}
"-" {display_token("minus",yytext); return T_minus;}
"*" {display_token("multiply",yytext); return T_multiply;}
"/" {display_token("division",yytext); return T_division;}
"(" { display_token("openParanthesis",yytext); return T_openParanthesis;}
")" {display_token("closeParanthesis",yytext); return T_closeParanthesis;}
"list" {display_token("list",yytext); return T_List;}
"range" {display_token("range",yytext); return T_range;}
"import" {display_token("import",yytext); return T_import;}
"print"  {display_token("print",yytext); return T_print;}
{single_quote_string} {yylval.data = strdup(yytext); display_token(yylval.data, yytext); return T_string;}
{double_quote_string} {yylval.data = strdup(yytext); display_token(yylval.data,yytext); return T_string;}
{number} {yylval.data = strdup(yytext); display_token(yylval.data,yytext); return T_number;}
{id} {yylval.data = strdup(yytext); display_token(yylval.data,yytext); return T_identifier;}

%%

int yywrap()
{
    strcpy(yylval.data,yytext);return 1;
}
