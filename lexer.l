%{
#include <stdio.h>
#include <string.h>
#include "parser.tab.h"
#include "stack.h"
%}

%option yylineno
multiline_comment_single  \'\'\'.+\'\'\'
multiline_comment_double  \"\"\".+\"\"\'
digit    [0-9]
letter   [a-zA-Z]
id       {letter}({letter}|{digit})*
digits   {digit}+
opFraction (\.{digits})?
opExponent ([Ee][+-]?{digits})?
number   {digits}{opFraction}{opExponent}
single_quote_string \'([^\'\n])*\'
double_quote_string \"([^\"\n])*

%%

"/*"(.)*"*/" { /* Ignore C-style comments */ }
"//"(.)*"\n" { /* Ignore single-line comments */ }
{multiline_comment_single} { /* Ignore single-line comments */ }
{multiline_comment_double} { /* Ignore multi-line comments */ }
[ \t\n] { /* Ignore whitespaces */ }

"("                { display_token("("); return T_openParanthesis; }
")"                { display_token(")"); return T_closeParanthesis; }
"{"                { display_token("{"); return T_LBRACE; }
"}"                { display_token("}"); return T_RBRACE; }
"="                { display_token("="); return T_assignOP; }
"=="               { display_token("=="); return T_equalOP; }
">"                { display_token(">"); return T_greaterThan; }
","                { display_token(","); return T_comma; }
"print"            { display_token("print"); return T_print; }
"if"               { display_token("if"); return T_if; }
"elif"             { display_token("elif"); return T_elif; }
"else"             { display_token("else"); return T_else; }

[0-9]+             { yylval.data = strdup(yytext); display_token(yylval.data); return T_number; }
[a-zA-Z_][a-zA-Z0-9_]* { yylval.data = strdup(yytext); display_token(yylval.data); return T_identifier; }
\"[^\n\"]*\"       { yylval.data = strdup(yytext); display_token(yylval.data); return T_string; }
";"                { display_token(";"); return T_SEMICOLON; }
[+\-*/]            { display_token(yytext); return T_OPERATOR; }
.                  { display_token(yytext); return T_INVALID; }

%%

int yywrap()
{
    strcpy(yylval.data, yytext);
    return 1;
}
