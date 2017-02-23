//Created by: Nick LeeSeely
//Created on: February 23rd 2017

//The following lab is supposed to be a random number generating function
//It will call a number between 1 and 100 and then output it

//So first it will be defined, then it will be used

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randomNumGen()
{
    srand(time(0));              //seed for the random number generator
    
    cout << "Your random number is ";
    cout << ((rand() % 100) + 1);
    cout << ".";
    
    return;
}

int main ()
{
    randomNumGen();
    
    return 0;
}