#include "Verb.h"
#include<iostream>

Verb::Verb(string w, string d): Word(w,d)
{
    //ctor
}

bool Verb::isVerb()
{
    return true;
}

void Verb::getDefinition()
{
    cout << "(v.)" << getDef() << endl;
}
