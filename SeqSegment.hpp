#ifndef SEQMEMBER_HPP
#define SEQMEMBER_HPP

#include "vector"
using namespace std;


//struct Note
//{
//	int key; //1-12 variations, 0 = rest.
//	int octave; //1-12 variations
//};

enum segType
{
    note = 0,
    chord,
    sequence,
    track,
    tempo,
    rest

};

class SeqSegment //is rest and tempo, derives note chord sequence
{
    public:

        SeqSegment();
        ~SeqSegment();

        float getLength(void); //length of this member, if multi notes member = chord.
        int getMod(void); //also per member
        int getTempo(void); //also per member
        segType getType(void);

        int setLength(float newLength); //length of this member, if multi notes member = chord.
        int setMod(int newMod); //also per member
        int setTempo(int newTempo); //also per member
        segType setType(segType newType);

    protected:

        int memModifier;
        float memLength;  //tempo/(4*length) = length of sound
        int memTempo;   // usually zero, if it's another number, this proposes a tempo change. default 120bpm.
                    //a change in temp will carry over member by member until a new tempo change.
        segType type;

    private:

};

#endif//SEQMEMBER_HPP
//SeqMember -> Sequence, Chord;
