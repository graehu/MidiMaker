#include <stdio.h>
int yyparse();
extern FILE* yyin;
extern int line;

int my_yywrap()
{
	return 1;
}

int yyerror(char* error)
{
	printf("Syntax error: %s at line %d \n",error,line);
	return 1;
}
int Lexerror(char* error)
{
	printf("Lexical error: %s at line %d \n",error,line);
	return 1;
}

int main (int argc, char * argv[])
{
	
	yyin = fopen(argv[1], "r");
	yyparse();


	return 0;
}
