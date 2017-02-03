// Created by: Nick LeeSeely
// Created on: February 2nd 2017

/* 
The following program will estimate the population of the United states
Net Gain of 1 person every 15 seconds
The current US population is 324,472,620  in year 2017
Based off of the census information, there would be a net gain of 21024000 people a year
Then just multiply number of years in the future, by that net gain constant and add to current population
*/

#include <iostream>
using namespace std;

int main ()
{
 int populationUs;
 int numYearsAdd;
 int daysInYear = 365;
 int hoursInDay = 24;
 int minsInhours = 60;
 int secondsInMins = 60;
 int secondsPerPersonGained = 15;
 int secondsInYear;
 int yearlyGrowthRate;
 int desiredYear;
 int currentYear;
 
 secondsInYear = daysInYear * hoursInDay * minsInhours * secondsInMins;
 yearlyGrowthRate = secondsInYear / secondsPerPersonGained;
 
 cout << "Enter the current Year: ";
 cin >> currentYear;
 cout << "Enter the current Population of the United States: ";
 cin >> populationUs;
 cout << "Enter the years ahead in the future you want to know about: ";
 cin >> numYearsAdd;
 
 desiredYear = currentYear + numYearsAdd;
 
 populationUs += (numYearsAdd * yearlyGrowthRate);
 
 cout << "In the year ";
 cout << desiredYear;
 cout << ", the population will be ";
 cout << populationUs;
 cout << " in the United States." << endl;
    
 return 0;
}