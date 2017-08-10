#include "NounAndVerb.h"
#include<iostream>

NounAndVerb::NounAndVerb(string w,string d):Noun(w,d),Verb(w,d), Word (w,d)
{
    //ctor
}
bool NounAndVerb::isNoun()
{
    return true;
}
bool NounAndVerb::isVerb()
{
    return true;
}
void NounAndVerb::getDefinition()
{
    cout << "(n. v.)" << Noun::getDef()<<endl;
}
