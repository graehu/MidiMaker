#ifndef SEQUENCE_HPP
#define SEQUENCE_HPP

#include "SeqSegment.hpp"

#include <vector>
using namespace std;


class Sequence : public SeqSegment
{
    public:

        Sequence();
        ~Sequence();

        SeqSegment* getSeqSegment(int index);
        int getSeqIdentifier(void);

        int setSeqSegment(int index, SeqSegment *setSequence);
        int setSeqIdentfier(int id);

        int addSeqSegment(SeqSegment* newSegment);
        int addSeqSegment(vector <SeqSegment*>* newSegment);

    protected:

        vector <SeqSegment*> seqSegments;
        int id;

    private:
};

#endif//SEQUENCE_HPP
