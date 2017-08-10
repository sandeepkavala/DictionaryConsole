#ifndef NOUN_H
#define NOUN_H

#include"Word.h"

class Noun :virtual public Word
{
    public:
        Noun(string, string);
        bool isNoun();
        virtual void getDefinition();
        virtual ~Noun();

    protected:

    private:
};

#endif // NOUN_H
