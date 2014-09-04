#include "Chord.hpp"

Chord::Chord()
{
    type = chord;
}
Chord::~Chord(){}


int Chord::getNoteKey(int index)
{
    if(index < notes.size())
    {
        return notes[index].getKey();
    }
    return 0;
}
int Chord::getNoteOctave(int index)
{
    if(index < notes.size())
    {
        return notes[index].getOctave();
    }
}
int Chord::setNoteKey(int index, int newKey)
{
    notes[index].setKey(newKey);
    return 0;
}
int Chord::setNoteOctave(int index, int newOctave)
{
    notes[index].setOctave(newOctave);
    return 0;
}
int Chord::addNote(Note newNote)
{
    notes.push_back(newNote);
    return 0;
}
