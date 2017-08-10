#include "Word.h"
#include<string>

Word::Word(string w, string d)
{
   this->word = w;
   this->definition = d;

}
string Word::getWord()
{
 return this->word;
}
string Word::getDef()
{
    return this->definition;
}
bool Word::isNoun()
{
    return false;
}
bool Word::isVerb()
{
    return false;
}
bool Word::isHyphenated()
{
    if(this->word.find("-") != string::npos)
        return true;
    else
        return false;
}

int Word::calculateScrabbleScore()
{
    int sum = 0;
    bool test = isHyphenated();
    if(!test)
    {
        for(char ch : this->word)
    {
        switch (ch)
            {
        case 'd': case 'g':
            sum += 2;
            break;
        case 'b': case 'c': case 'm': case 'p':
            sum += 3;
            break;
        case 'f': case 'h': case 'v': case 'w': case 'y':
            sum += 4;
            break;
        case 'k':
            sum += 5;
            break;
        case 'j': case 'x':
            sum += 8;
            break;
        case 'q': case 'z':
            sum += 10;
            break;

        default:
            sum += 1;
            }
    }

    }
  return sum;
}

void Word::getDefinition()
{

}
bool Word::isPalindrome()
{
    bool check = true;
    string s = this->word;

    for(int i = 0, j = s.length() -1 ; i < j ; i++ , j-- )
    {
       if(s[i] != s[j])
       {
           check = false;
           break;
       }
    }
     return check;
}
