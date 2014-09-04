#ifndef CHORD_HPP
#define CHORD_HPP

#include <vector>

#include "SeqSegment.hpp"
#include "Note.hpp"


class Chord : public SeqSegment
{
    public:

        Chord();
        ~Chord();

        int getNoteKey(int index);
        int getNoteOctave(int index);

        int setNoteKey(int index, int newKey);
        int setNoteOctave(int index, int newOctave);

        int addNote(Note newNote);

    protected:

        vector <Note> notes;

    private:

};



#endif//CHORD_HPP
