#include "Adverb.h"
#include<iostream>

Adverb::Adverb(string w,string d):Word(w,d)
{
    //ctor
}
void Adverb::getDefinition()
{
    cout << "(adv.)" << getDef()<< endl;
}
