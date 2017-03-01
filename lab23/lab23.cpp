//Created by: Nick LeeSeely
//Created on: February 28, 2017

//the following program is supposed to take the USER's 2 input values and swap them,
//then proceed to choose a random number between those two numbers that have been swapped

#include <iostream>
#include <cstdlib>
using namespace std;

void swap(int& value1, int& value2) {                   //this is used to swap the first input variable with the second
    
    int tempValue = value1;
    value1 = value2;
    value2 = tempValue;
}

int randomNumChoose(int& value1, int& value2) {         //here is the function used to take the input variables, use the first function to swap,
                                                        //then determine a random number in between them to assign to a variable and output
    swap(value1, value2);
    
    srand(time(0));
    int randomNumber = (rand() % (value1 - value2)) + value2;
    
    return randomNumber;
}

int main() {
    
    int randomNumber;
    int firstNum;
    int secondNum;
    
    //there should be a way to get the input in just one go
    //but i'd rather not put my energy towards that right now
    
    cout << "Please input the first number: " << endl;
    cin >> firstNum;
    cout << "Please input the second number: " << endl;
    cin >> secondNum;
    
    cout << "A random number between " << firstNum << " and " << secondNum << " is ";
    cout << randomNumChoose(firstNum, secondNum) << endl;
    
    return 0;
}