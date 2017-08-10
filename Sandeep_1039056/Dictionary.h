#ifndef DICTIONARY_H
#define DICTIONARY_H

#include<fstream>
#include<vector>
#include"word.h"

class Dictionary
{
    public:
        Dictionary();
        int getTotalNumberOfWords();
        void loadDictionary();
        int findWord(string);
        int getSize();
        void display();
        void getDefinition(int);
        int getScore(int);
        void getRepeatedChar(char,int);
        void getNounsAndVerbs();
        void getPalindromes();
        void getHighScores();
        bool isNotEmpty();
        void getAnagrams(string);
        void getRhymes(string);
        void getUserPattern(char,char);

    protected:

    private:
        vector<Word*> dictionary;
};

#endif // DICTIONARY_H
