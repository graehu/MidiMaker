#include "SequenceList.hpp"

int SequenceList::addSequence(Sequence* addedSequence)
{
	Sequences.push_back(*addedSequence);
	return 0;
}

int SequenceList::addSequences(vector <Sequence> addedSequences)
{
	Sequences.insert(Sequences.end(), addedSequences.begin(), addedSequences.end());
	return 0;
}
int SequenceList::setSequences(vector <Sequence>* newSequences)
{
	Sequences = *newSequences;
	return 0;
}
int SequenceList::setSequence(int index, Sequence* newSequence)
{

	Sequences[index] = *newSequence;
	return 0;
}
#include <iostream>
Sequence* SequenceList::getSequence(int index)
{

    if(index < Sequences.size())
    {
        return &Sequences[index];
    }

    return 0;
}


//	vector <Sequence> Sequences;
