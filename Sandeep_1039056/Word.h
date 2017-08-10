#ifndef WORD_H
#define WORD_H

#include<string>
using namespace std;
class Word
{
    public:
        Word(string , string );
        string getWord();
        string getDef();
        virtual void getDefinition();
        virtual int calculateScrabbleScore();
        bool isHyphenated();
        bool isPalindrome();
        virtual bool isVerb();
        virtual bool isNoun();



    private:
        string word;
        string definition;
};

#endif // WORD_H
