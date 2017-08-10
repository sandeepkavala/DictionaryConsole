#include "ProperNoun.h"
#include<iostream>

ProperNoun::ProperNoun(string w,string d): Noun(w,d),Word(w,d)
{
    //ctor
}
bool ProperNoun::isNoun()
{
    return true;
}

int ProperNoun::calculateScrabbleScore()
{
    return 0;
}

void ProperNoun::getDefinition()
{
    cout << "(pn.)" << getDef() << endl;
}
