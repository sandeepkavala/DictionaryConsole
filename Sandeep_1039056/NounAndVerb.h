#ifndef NOUNANDVERB_H
#define NOUNANDVERB_H

#include"Noun.h"
#include"Verb.h"

class NounAndVerb : public Noun , public Verb
{
    public:
        NounAndVerb(string , string);
        bool isNoun();
        bool isVerb();
        void getDefinition();

    protected:

    private:
};

#endif // NOUNANDVERB_H
