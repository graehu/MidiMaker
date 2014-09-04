#include "Note.hpp"


Note::Note()
{
    int key = 0;
    int octave = 0;
    type = note;
}
Note::~Note(){}
int Note::getKey(void)
{
    return key;
}
int Note::getOctave(void)
{
    return octave;
}
int Note::setKey(int newKey)
{
    key = newKey;
    return 0;
}
int Note::setOctave(int newOctave)
{
    octave = newOctave;
    return 0;
}
