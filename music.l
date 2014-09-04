%{
#include <string.h>
#include <vector>
#include <math.h>
using namespace std;
class SequenceMember{};
class Sequence{};
class Note{};
#include "music.tab.hpp"
int line = 1;
int Lexerror(char*);
#include <stdio.h>
%}



%%

"//".*\n {line++;/*single line comments*/}
"//".*"//" {/*inclosed comment*/}
[0-9]+\.[0-9]+ {yylval.fix_4 = floorf(atof(yytext)*100+0.5)/100; return FIXED_DECIMAL;}
[0-9]+ {yylval.u_int = atoi(yytext);return NUMBER;}
[+-][0-9]+ {yylval.s_int = atoi(yytext);return SIGNED_NUMBER;}

([ABDEGabdeg]\^?)|([ACDFGacdfg]#?) { strcpy(yylval.string, yytext); return NOTE; }

tempo {return TEMPO;}
rest {return REST;}
[a-zA-Z_][a-zA-Z_][a-zA-Z0-9_]* { strcpy(yylval.string, yytext); return IDENTIFIER; }

[\n] {line++;}
[\t\ ] {}

:: {return COLON_COLON;}
[\{\}\[\]\(\)\,] {return yytext[0];}

. {Lexerror(yytext);}

%%

int my_yywrap();
int yywrap ()
{
return my_yywrap();
}

