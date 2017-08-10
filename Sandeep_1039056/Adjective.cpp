#include "Adjective.h"
#include<iostream>

Adjective::Adjective(string w, string d) : Word(w,d)
{
    //ctor

}


void Adjective::getDefinition()
{
    cout << "(adj.)" << getDef() << endl;
}
