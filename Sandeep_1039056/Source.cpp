#include <iostream>
#include <string>
#include <fstream>
#include"Dictionary.h"
#include<ctime>

using namespace std;



int main()
{

Dictionary myDictionary;
myDictionary.loadDictionary();

string userInput;
int userSelection = 0;
int y = 0;
char userChar1,userChar2;
int reps =0;
while(userSelection!=99 && myDictionary.isNotEmpty())
{
    cout <<"Please select one of the following options" <<endl;
    cout << "1. Get defintion of Word and scrabble score " << endl;
    cout << "2. Find words with multiple occurences of a character e.g. three 'z's " << endl;
    cout << "3. Find words that have a letter without following another letter e.g words with 'q' wihtout a following 'u'" <<endl;
    cout << "4. List all words that are noun and a verb " << endl;
    cout << "5. List all words that are palindrome" << endl;
    cout << "6. Find the words with highest scrabble score " << endl;
    cout << "7. Find the anagrams for a word "<<endl;
    cout << "8. Find rhyming words for a word"<<endl;
    cout << "Enter 99 to quit" << endl;

	cin >> userSelection; 
    switch(userSelection)
    {
    case 1:
        cout<<"Enter the word:";
        cin>>userInput;
        y = myDictionary.findWord(userInput);
        if (y!=-1)
        {
            myDictionary.getDefinition(y);
            cout<<"Score:"<<myDictionary.getScore(y)<<endl;
        }
        else
            cout<<"Word not found"<<endl;
        break;
    case 2:
        cout<<"Enter the character: ";
        cin>>userChar1;
        cout<<"Enter number repetitions: ";
        cin>>reps;
        myDictionary.getRepeatedChar(userChar1,reps);
        break;
    case 3:
        cout<<"Enter first letter: ";
        cin>>userChar1;
        cout<<"Enter second letter: ";
        cin>>userChar2;
        myDictionary.getUserPattern(userChar1,userChar2);
        break;
    case 4:
        myDictionary.getNounsAndVerbs();
        break;
    case 5:
        myDictionary.getPalindromes();
        break;
    case 6:
        myDictionary.getHighScores();
        break;
    case 7:
        cout<<"Enter Word: ";
        cin>>userInput;
        myDictionary.getAnagrams(userInput);
        break;
    case 8:
        cout<<"Enter Word: ";
        cin>>userInput;
        myDictionary.getRhymes(userInput);
        break;
    default:
        cout<<"Invalid Entry " << endl;
        break;


    }

}


system("pause");
return 0;
}


