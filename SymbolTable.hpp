#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

//#define SymbolTable::instance() SymbolTable

#include <vector>

using namespace std;



class SymbolTable
{
public:

	static SymbolTable& instance()
	{
		static SymbolTable content;
		return content;
	}

	struct Symbol
	{
		char Identifier[32];
	};

    char* getId(int index);
	int addId(char id[32]); //bison adds
	int checkId(char id[32]); //bison checks if it exists returns id number if one found
	int setId(int index, char id[32]);


protected:

private:

	vector <Symbol> Symbols;

	SymbolTable(){};
	SymbolTable(SymbolTable const&){};
	SymbolTable& operator=(SymbolTable const&){};



};



#endif//SYMBOLTABLE_H
