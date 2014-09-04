#include "SeqSegment.hpp"



SeqSegment::SeqSegment()
{
    memModifier = 0;
    memLength = 1;
    memTempo = 0;
    type = rest;
}

SeqSegment::~SeqSegment(){}

float SeqSegment::getLength(void)
{
    return memLength;
}

int SeqSegment::getMod(void)
{
    return memModifier;
}

int SeqSegment::getTempo(void)
{
    return memTempo;
}

segType SeqSegment::getType(void)
{
    return type;
}



int SeqSegment::setLength(float newLength)
{
    memLength = newLength;
    return 0;
}

int SeqSegment::setMod(int newMod)
{
    memModifier = newMod;
    return 0;
}

int SeqSegment::setTempo(int newTempo)
{
    memTempo = newTempo;
    return 0;
}

segType SeqSegment::setType(segType newType)
{
    type = newType;
    return type;
}


/*
Note* SeqSegment::getNote(int index)
{
   if(index < notes.size())// && index >= 0)
    {
        return &notes[index];
    }
    return 0;
}

int SeqSegment::setNote(int index, Note newNote)
{
    notes[index] = newNote;
    return 0;
}



int SeqSegment::addNote(Note newNote) //pushes a note onto the stack.
{
    notes.push_back(newNote);
    return 0;
}
int SeqSegment::addNotes(vector<Note>* newNotes)
{

    notes.insert(notes.end(), newNotes->begin(), newNotes->end());
    return 0;
}
*/
//int SequenceList::addSequences(vector <Sequence> addedSequences)
//{

//	return 0;
//}
