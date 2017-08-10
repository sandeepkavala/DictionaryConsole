#ifndef VERB_H
#define VERB_H

#include"Word.h"

class Verb : virtual public Word
{
    public:
        Verb(string,string);
        bool isVerb();
        virtual void getDefinition();

    protected:

    private:
};

#endif // VERB_H
