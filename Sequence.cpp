#include "Sequence.hpp"

Sequence::Sequence()
{
    id = 0;
    type = sequence;

}
Sequence::~Sequence(){}

SeqSegment* Sequence::getSeqSegment(int index)
{
    if(index < seqSegments.size())// && index >= 0)
    {
        return seqSegments[index];
    }
    return 0;
}

int Sequence::getSeqIdentifier(void)
{
    return id;
}

int Sequence::setSeqSegment(int index, SeqSegment* setSegment)
{
    seqSegments[index] = setSegment;
    return 0;
}
int Sequence::setSeqIdentfier(int newId)
{
    id = newId;
    return 0;
}
int Sequence::addSeqSegment(SeqSegment* newSegment)
{
    seqSegments.push_back(newSegment);
    return 0;
}

//int Sequence::addSeqSegment(vector <SeqSegment*>* newSegments)
//{
    //seqSegments.insert(seqSegments.end(), newSegments->begin(), newSegments->end());
//    return 0;
//}
