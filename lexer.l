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
          display_token("Dedent",indent_depth);
          return 1;
        }

        if(indent_depth == peek())
        {
          display_token("Nodent",indent_depth);
          yylval.indent_depth = indent_depth;
          return 2;
        }
        if(indent_depth > peek())
        {
          push(indent_depth);
          display_token("Indent",indent_depth);
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
"\n"  {yycolumn=1; display_token("< NL >",T_newLine); return T_newLine;}

[\t]* {
        indent_depth = strlen(yytext) + 1;
        printf("indent_depth: %d ",  indent_depth);
        indentation_type = indent_type(indent_depth);
        if(indentation_type == 1) return Dedent;
        else if(indentation_type == 2) return Nodent;
        else return Indent;
      }

"True" {display_token("True",T_True); return T_True;}
"False" {display_token("False",T_False); return T_False;}
"if" {display_token("if",T_if); return T_if;}
"in" {display_token("in",T_in); return T_in;}
"while" {display_token("while",T_while); return T_while;}
"continue" {display_token("continue",T_continue); return T_continue;}
"break" {display_token("break", T_break); return T_break;}
"pass" {display_token("pass",T_pass); return T_pass;}
"return" {display_token("return",T_return); return T_return;}
<<EOF>> {display_token("EOF"); return T_EOF;}
":" {display_token("colon",T_colon); return T_colon;}
">" {display_token("greaterThan",T_greaterThan); return T_greaterThan;}
"<" {display_token("lesserThan",T_lesserThan); return T_lesserThan;}
">=" {display_token("greaterThanEqualTo",T_greaterThanEqualTo); return T_greaterThanEqualTo;}
"<=" {display_token("lesserThanEqualTo",T_lesserThanEqualTo); return T_lesserThanEqualTo;}
"==" {display_token("Equal Operator",T_equalOP); return T_equalOP;}
"!=" {display_token("Not Equal Operator",T_notEqualOP); return T_notEqualOP;}
"None" {display_token("None",T_None); return T_None;}
"and" {display_token("and",T_and); return T_and;}
"or" {display_token("or",T_or); return T_or;}
"not" {display_token("not",T_not); return T_not;}
"elif" {display_token("elif",T_elif); return T_elif;}
"else" {display_token("else",T_else); return T_else;}
"def" {display_token("def",T_def); return T_def;}
"[" {display_token("openBracket",T_openBracket); return T_openBracket;}
"]" {display_token("closeBracket",T_closeBracket); return T_closeBracket;}
"," {display_token("comma",T_comma); return T_comma;}
"=" {display_token("assignOP",T_assignOP); return T_assignOP;}
"+" {display_token("plus",T_plus); return T_plus;}
"-" {display_token("minus",T_minus); return T_minus;}
"*" {display_token("multiply",T_multiply); return T_multiply;}
"/" {display_token("division",T_division); return T_division;}
"(" { display_token("openParanthesis",T_openParanthesis); return T_openParanthesis;}
")" {display_token("closeParanthesis",T_closeParanthesis); return T_closeParanthesis;}
"list" {display_token("list",T_List); return T_List;}
"range" {display_token("range",T_range); return T_range;}
"import" {display_token("import",T_import); return T_import;}
"print"  {display_token("print",T_print); return T_print;}
{single_quote_string} {yylval.data = strdup(yytext); display_token(yylval.data, T_string); return T_string;}
{double_quote_string} {yylval.data = strdup(yytext); display_token(yylval.data,T_string); return T_string;}
{number} {yylval.data = strdup(yytext); display_token(yylval.data,T_number); return T_number;}
{id} {yylval.data = strdup(yytext); display_token(yylval.data,T_identifier); return T_identifier;}

%%

int yywrap()
{
    strcpy(yylval.data,yytext);return 1;
}
