//Created by: Nicholas LeeSeely
//Created on: February 21st 2017

//The following is a program that is meant to output information in regards to windchills
//There will be a table with columns for wind speed, windchill via old formula, windchill via newformula
//and the difference between two windchills

#include <iostream>
#include <cmath>            //this is used for the functions like pow and sqrt
#include <cstdlib>          //this is used for absolute value function
#include <iomanip>          //this is used for spacing on the table output with variables
#include <string>

using namespace std;

int main() {
    
    const char separator    = ' ';          //the following 3 lines are for spacing purposes
    const int nameWidth     = 20;
    const int numWidth     = 20;
    
    double oldStyleWindChill;       //formula for the Old Style Wind Chill will come later
    double newStyleWindChill;       //formula for the New Style Wind Chill will also come later
    double tempF;                   //this is the current temperature in Fahrenheit 
    double windSpeed;               //this is the wind's velocity 
    double formulaDifference;       //this will be the difference in wind chill between both formulas
    
    cout << "Please enter the current temperature in Fahrenheit: " << endl;
    cin >> tempF;
    cout << endl;
    
    cout << "Please enter the current Speed of the Wind: " << endl;
    cin >> windSpeed;
    cout << endl;
    
    cout << "Below are the values for:" << endl;
    cout << "The inputted Windspeed" << endl;
    cout << "The Windchill according to the Old Style Formula" << endl;
    cout << "The Windchill according to the New Style Formula" << endl;
    cout << "And finally the difference between the two Formulas." << endl;
    cout << endl;
    
    //Here is where the formula's actually compute
    
    oldStyleWindChill = 0.081 * ((3.71 * (sqrt(windSpeed))) + 5.81 - (0.25 * windSpeed)) * (tempF - 91.4) + 91.4;
    
    newStyleWindChill = 35.74 + (0.6215 * tempF) - (35.75 * pow(windSpeed, 0.16)) + (0.4275 * tempF * pow(windSpeed, 0.16));
    
    formulaDifference = abs(oldStyleWindChill - newStyleWindChill);
    
    cout << left << setw(nameWidth) << setfill(separator) << "Windspeed";
    cout << left << setw(nameWidth) << setfill(separator) << "Old Formula";
    cout << left << setw(nameWidth) << setfill(separator) << "New Formula";
    cout << left << setw(nameWidth) << setfill(separator) << "Difference" << endl;
    
    cout << left << setw(numWidth) << setfill(separator) << windSpeed;
    cout << left << setw(numWidth) << setfill(separator) << oldStyleWindChill;
    cout << left << setw(numWidth) << setfill(separator) << newStyleWindChill;
    cout << left << setw(numWidth) << setfill(separator) << formulaDifference << endl;
    
    return 0;
    
}