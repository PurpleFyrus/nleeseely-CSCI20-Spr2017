//Created by: Nick LeeSeely
//Created on: March 3rd 2017

// The following program is designed to give us a random number between two numbers input
// then convert that number (assuming it's pounds) into kilograms, then back into pounds

#include <iostream>
#include <cstdlib>
using namespace std;

const double kilosPerPound= 0.45;                           //constant variable of how many pounds per kilo, global scope
const double poundsPerKilo = 1 / kilosPerPound;             //constant variable of how many kilos per pound, global scope

int randomNumChooseBetween(int& value1, int& value2);       //declaration of function to choose a random number, body below int main

double poundsToKilograms(int& value);                       //declaration of function to convert the input number of pounds to kilos

double kilogramsToPounds(double& value);                    //declaration of function to convert the input number of kilos to pounds

int main() 
{
    int numOne          = 0;                                //scope is local to int main
    int numTwo          = 0;                                //scope is local to int main
    int randomNum       = 0;                                //scope is local to int main
    double kilograms    = 0.0;                              //scope is local to int main
    double pounds       = 0.0;                              //scope is local to int main
    
    cout << "Please enter any number: " << endl;
    cin >> numOne;
    
    cout << "Now please enter another number higher than the previous entry: " << endl;
    cin >> numTwo;
    
    randomNum = randomNumChooseBetween(numOne, numTwo);
    
    kilograms = poundsToKilograms(randomNum);
    
    pounds = kilogramsToPounds(kilograms);
    
    cout << "Your random number chosen between the two input is: " << randomNum << endl;
    cout << "Your initial amount of pounds is / are: " << randomNum << endl;
    cout << "That amount converted to kilograms is: " << kilograms << endl;
    cout << "And that converted back into pounds is: " << pounds << endl;
    
    return 0;
}

int randomNumChooseBetween(int& value1, int& value2) 
{
    int tempValue = value1;                                 //scope of tempValue is local to function randomNumChooseBetween
    value1 = value2;                                        //scope of the input value both 1 & 2 are local to int main because
    value2 = tempValue;                                     //the character "&" causes pass by reference for the other two variables
    
    srand(time(0));
    int randomNumber = (rand() % (value1 - value2)) + value2;       /*  scope of randomNumber is local since it's not used outside
                                                                        of the function randomNumChooseBetween */
    return randomNumber;                                            /*the value of randomNumber is returned and assigned to the variable randomNum */
}                                                                     

double poundsToKilograms(int& value)
{
    double kilogramsOut = value * kilosPerPound;            //scope of kilogramsOut is limited to just the function poundsToKilograms
    return kilogramsOut;                                    //the value however is caught by the variable kilograms in the function int main
}

double kilogramsToPounds(double& value)
{
    double poundsOut = value * poundsPerKilo;               //scope of pounds out is limited to just the function kilogramsToPounds
    return poundsOut;                                       //the value is caught by the variable pounds in the function int main
}