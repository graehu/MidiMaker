#ifndef NOTE_HPP
#define NOTE_HPP

#include "SeqSegment.hpp"


class Note : public SeqSegment
{
    public:
        Note();
        ~Note();

        int getKey(void);
        int getOctave(void);

        int setKey(int newKey);
        int setOctave(int newOctave);

    protected:

        int key;
        int octave;

    private:

};


#endif//NOTE_HPP
