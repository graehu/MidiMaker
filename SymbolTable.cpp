#include "SymbolTable.hpp"

char* SymbolTable::getId(int index)
{
    return Symbols[index].Identifier;
}

int SymbolTable::addId(char id[32])
{

	if(checkId(id) == -1)
	{
        Symbol symbol;
        for(int i = 0; i < 32; i++)
        {
            symbol.Identifier[i] = id[i];
        }
		Symbols.push_back(symbol);
		return 0;
	}
	return checkId(id);
} //bison adds


int SymbolTable::checkId(char* id)
{
    int eat;
	for(int i = 0; i < Symbols.size(); i++)
	{
        for(int ii = 0; ii < 32; ii++)
        {
            if(id[ii] == Symbols[i].Identifier[ii])
            {
                if(id[ii] == '\0')
                    return i;
            }
            else
            {
                break;
            }
        }
	}
	return -1;

} //bison checks if it exists

int SymbolTable::setId(int index, char id[32])
{
	if(checkId(id) > 0)
	{
        for(int i = 0; i < 32; i++)
        {
            Symbols[checkId(id)].Identifier[i] = id[i];
        }
		return 0;
	}
	return 1;

}


//vector <Symbol> Symbols;
