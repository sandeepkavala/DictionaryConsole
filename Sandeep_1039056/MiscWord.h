#ifndef MISCWORD_H
#define MISCWORD_H

#include"Word.h"

class MiscWord :public Word
{
    public:
        MiscWord(string,string);
        int calculateScrabbleScore();
        void getDefinition();

    protected:

    private:
};

#endif // MISCWORD_H
