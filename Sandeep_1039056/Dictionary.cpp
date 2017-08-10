#include "Dictionary.h"
#include"Word.h"
#include"Verb.h"
#include"Noun.h"
#include"Adverb.h"
#include"Adjective.h"
#include"Preposition.h"
#include"ProperNoun.h"
#include"NounAndVerb.h"
#include"MiscWord.h"
#include<fstream>
#include<iostream>
#include<vector>
#include<algorithm>

Dictionary::Dictionary()
{
    //ctor
}
void Dictionary::loadDictionary()
{
    ifstream myDict;
    myDict.open("dictionary.txt");
    string word, def, type, n;
    while(myDict)
    {
        getline(myDict,word);
        getline(myDict,def);
        getline(myDict,type);
        getline(myDict,n);
       if(type == "v")
            {
                Verb *verb = new Verb(word,def);
                dictionary.push_back(verb);
            }
        if(type == "n")
            {
                Noun *noun = new Noun(word,def);
                dictionary.push_back(noun);
            }
        if(type =="adv")
        {
            Adverb *adverb = new Adverb(word,def);
            dictionary.push_back(adverb);
        }
        if(type =="adj")
        {
            Adjective *adjective = new Adjective(word,def);
            dictionary.push_back(adjective);
        }
        if(type =="prep")
        {
            Preposition *preposition = new Preposition(word,def);
            dictionary.push_back(preposition);
        }
        if(type =="pn")
        {
            ProperNoun *propernoun = new ProperNoun(word,def);
            dictionary.push_back(propernoun);
        }
        if(type =="n_and_v")
        {
            NounAndVerb *noundandverb = new NounAndVerb(word,def);
            dictionary.push_back(noundandverb);
        }
        if(type == "misc")
        {
            MiscWord *misword = new MiscWord(word,def);
            dictionary.push_back(misword);
        }

        }

myDict.close();
}
int Dictionary::getSize()
{
    return dictionary.size();
}
void Dictionary::display()
{
    (*(dictionary)[106183]).getDefinition();
}
int Dictionary::findWord(string input)
{
    int low = 0 ,high = getSize()-1;
    while(low <= high)
    {
        int mid = (high+low)/2;
        string s = (*(dictionary)[mid]).getWord();
        if (s == input )
            return mid;
            else
            if (s < input)
                low=mid+1;
            else
            high=mid-1;
    }
    return -1;
}
void Dictionary::getDefinition(int x)
{
    (*(dictionary)[x]).getDefinition();
}
int Dictionary::getScore(int x)
{
    int y = (*(dictionary)[x]).calculateScrabbleScore();
    if (y==0)
        cout<<"Word invalid in scrabble"<<endl;
    return y;
}
void Dictionary::getNounsAndVerbs()
{
    int x = getSize();
    for(int i=0; i< x ; i++)
    {

       if((*(dictionary)[i]).isVerb() &&(*(dictionary)[i]).isNoun())
        cout<<(*(dictionary)[i]).getWord()<<endl;

    }
}
void Dictionary::getPalindromes()
{
    int x = getSize();
    for(int i=0;i<x;i++)
    {
        if((*(dictionary)[i]).isPalindrome())
          cout<<(*(dictionary)[i]).getWord()<<endl;
    }
}

void Dictionary::getHighScores()
{
    cout<<"Highest Scores"<<endl;
    int score;
    int highScore = 0;
    int x = getSize();
    vector<int> maxScore;
    vector<string> maxScoreWord;
    for (int i=0; i < x ; i++)
    {
        score = (*(dictionary)[i]).calculateScrabbleScore();
         if(score==highScore)
            {
                maxScore.push_back(score);
                maxScoreWord.push_back((*(dictionary)[i]).getWord());
            }
        if (score > highScore)
            {
                maxScore.clear();
                maxScoreWord.clear();
                maxScore.push_back(score);
                maxScoreWord.push_back((*(dictionary)[i]).getWord());
                highScore = score;
            }

    }
    for(int i=0;i<maxScore.size();i++)
        {
            cout<<"Score: "<<maxScore[i]<< " Word: " << maxScoreWord[i]<< endl;
        }

}
bool Dictionary::isNotEmpty()
{
    if (getSize() >0)
        return true;
}

void Dictionary::getRepeatedChar(char userChar, int userReps)
{
    int reps = 0;
    int x= getSize();
    for(int i=0; i < x;i++)
    {
        for (char c :(*(dictionary)[i]).getWord() )
        {
            if(c==userChar)
                reps = reps +1;
        }
        if(reps>=userReps)
        cout<<(*(dictionary)[i]).getWord()<<endl;

        reps =0;

    }
}

void Dictionary::getAnagrams(string userInput)
{
    string dictWord;
    sort(userInput.begin(),userInput.end());
    int x = getSize();
    for(int i=0; i < x ; i++)
    {
        dictWord = (*(dictionary)[i]).getWord();
        if(userInput.length()== dictWord.length())
            {
                sort(dictWord.begin(),dictWord.end());
                if(!dictWord.compare(userInput))
                    cout<<(*(dictionary)[i]).getWord()<<endl;
            }
    }

}

void Dictionary::getRhymes(string userInput)
{
    if(userInput.length()<3)
        cout<<"Entered Word is too short. Please enter word with atleast 3 letters";
    else
    {
        string subString;
        userInput = userInput.substr(userInput.length()-3);
        cout<<userInput;
        int x = getSize();
         for(int i = 0;i< x;i++)
        {
            subString = (*(dictionary)[i]).getWord();
        if(subString.length()>2)
            subString=subString.substr(subString.length()-3);
        if(!subString.compare(userInput))
            cout<<(*(dictionary)[i]).getWord()<<endl;
        }
    }
}

void Dictionary::getUserPattern(char userChar1,char userChar2)
{
    int x = getSize();
    int a;
    string dictWord;

       for(int i = 0;i < x; i++)
    {
       dictWord = (*(dictionary)[i]).getWord();
       a = dictWord.find(userChar1);
       if(a!=string::npos)
       {
           if(dictWord.length()>=a && userChar2 != dictWord[a+1])
            cout << (*(dictionary)[i]).getWord() << endl;

       }


    }
}
