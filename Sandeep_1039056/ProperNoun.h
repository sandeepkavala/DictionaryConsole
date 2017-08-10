#ifndef PROPERNOUN_H
#define PROPERNOUN_H

#include"Noun.h"

class ProperNoun : public Noun
{
    public:
        ProperNoun(string, string);
        bool isNoun();
        int calculateScrabbleScore();
        void getDefinition();

    protected:

    private:
};

#endif // PORPOERNOUN_H
