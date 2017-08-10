#include "MiscWord.h"
#include<iostream>

MiscWord::MiscWord(string w, string d):Word(w,d)
{
    //ctor
}

int MiscWord::calculateScrabbleScore()
{
    return 0;
    cout << "Misc words are not valid in scrabble" << endl;
}
void MiscWord::getDefinition()
{
    cout << "(misc.)" << getDef() << endl;
}
