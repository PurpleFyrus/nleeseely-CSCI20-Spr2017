// Created by: Nick LeeSeely
// Created on: February 2nd 2017

/* 
The following program will estimate the population of the United states
Net Gain of 1 person every 15 seconds
The current US population is 324,472,620  in year 2017.
*/

#include <iostream>
using namespace std;

int main ()
{
 int populationUs = 324472935;
 int numYearsAdd;
 int populationIncrease;
 int currentYear = 2017;
 
 cout << "Enter the years ahead in the future you want to know about: ";
 cin >> numYearsAdd;
 currentYear = currentYear + numYearsAdd;
 populationUs += numYearsAdd * 21024000;
 cout << "In the year ";
 cout << currentYear;
 cout << ", the population will be ";
 cout << populationUs;
 cout << " in the United States." << endl;
    
 return 0;
}