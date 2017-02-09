//Created by: Nick LeeSeely
//Created on: February 9th 2017

/*  
    The following project is meant to replicate a word game
    called madlibs.
*/

#include <iostream>
#include <string>
using namespace std;

int main() 

{
    
    string numOne;
    string nameOne;
    string nameTwo;
    string nameThree;
    string nounOne;
    string attackOne;
    string attackTwo;
    string placeOne;
    
/*
    The Following is a story about Super Smash Bros ______
    What happens is determined by the USER who inputs the variables' definitions
*/

    cout << "Please enter 2 letters / numbers" << endl;
    getline(cin, numOne);
    cout << "Please enter a Name" << endl;
    getline(cin, nameOne);
    cout << "Please enter a second Name" << endl;
    getline(cin, nameTwo);
    cout << "Please enter a third Name" << endl;
    getline(cin, nameThree);
    cout << "Please enter a Noun" << endl;
    getline(cin, nounOne);
    cout << "Please enter an Attack" << endl;
    getline(cin, attackOne);
    cout << "Please enter another Attack" << endl;
    getline(cin, attackTwo);
    cout << "Please enter a place on Earth" << endl;
    getline(cin, placeOne);
    
    cout << endl;
    cout << "Ok, here we go" << endl;
    cout << endl;
    cout << "The year is 20" << numOne << "." << endl;
    cout << nameOne << " is the King of " << nounOne << "." << endl;
    cout << nameTwo << " has been defeated by " << nameOne << "'s signature " << attackOne << " attack." << endl;
    cout << "But a Hero shall rise. Deep in the jungles of Southern " << placeOne << endl;
    cout << nameThree << " trains everyday, looking to overcome " << nameOne << "'s reign of terror." << endl;
    cout << "In an ultimate showdown of Super Smash Brothers " << nounOne << "!!!" << endl;
    cout << "Will " << nameThree << " avenge " << nameTwo << "?" << endl;
    cout << "Or will " << nameOne << "'s devastating killer move " << attackTwo << " shut down " << nameThree << "?" << endl;
    cout << "Only one way to find out, they need to Settle It!!! In " << nounOne << "!!!" << endl;
    
    return 0;
}