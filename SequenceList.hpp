#ifndef SEQUENCELIST_H
#define SEQUENCELIST_H

#include "Sequence.hpp"


#include <vector>
using namespace std;


class SequenceList
{
public:

	SequenceList(){};
	~SequenceList(){};

	int addSequences(vector <Sequence> addedSequences);

	int addSequence(Sequence* addedSequence);

	int setSequences(vector <Sequence>* newSequences);
	int setSequence(int index, Sequence* newSequence);
	Sequence* getSequence(int index);

		vector <Sequence> Sequences;



protected:



private:


};



#endif//SEQUENCELIST_H
