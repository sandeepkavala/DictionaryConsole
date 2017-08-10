#include "Noun.h"
#include <iostream>
Noun::Noun(string w, string d) : Word(w,d)
{
    //ctor
}
bool Noun::isNoun()
{
    return true;
}

void Noun::getDefinition()
{
    cout << "(n.)" << getDef()<< endl;
}

Noun::~Noun()
{
    //dtor
}
