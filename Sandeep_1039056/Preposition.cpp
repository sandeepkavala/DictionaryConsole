#include "Preposition.h"
#include<iostream>

Preposition::Preposition(string w, string d) :MiscWord(w,d)
{
    //ctor
}

void Preposition::getDefinition()
{
    cout << "(prep)" << getDef()<< endl;
}
