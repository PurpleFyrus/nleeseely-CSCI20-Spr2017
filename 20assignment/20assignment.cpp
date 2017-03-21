//Created by: Nick LS
//Created on: March 10, 2017

#include<iostream>
using namespace std;

class DistanceConverter {               /*
                                          This class is designed to convert any measurement input
                                          of Miles, Yards, Feet, Inches or Meters into any of those
                                          listed and output them based on whatever function is called
                                        */
    
    public:
        void SetDistanceFromMiles(double input);        //this function converts the input from miles to inches
        void SetDistanceFromYards(double input);        //this function converts the input from yards to inches
        void SetDistanceFromFeet(double input);         //this function converts the input from feet to inches
        void SetDistanceFromInches(double input);       //this function stores the input since it's already in inches
        void SetDistanceFromMeters(double input);       //this function converts the input from meters to inches
        
        double GetDistanceAsMiles();                    //this function returns the initial inches value as miles
        double GetDistanceAsYards();                    //this function returns the initial inches value as yards
        double GetDistanceAsFeet();                     //this function returns the initial inches value as feet
        double GetDistanceAsInches();                   //this function returns the initial value since it's already in inches
        double GetDistanceAsMeters();                   //this function returns the initial inches value as meters
        
        DistanceConverter();                            //this is the default constructor
        DistanceConverter(double input);                //this is the second constructor to take into account other inputs
        
        void PrintDistance();                           /*
                                                        this function used to print all the 
                                                        conversions if necessary
                                                        */
    private:
        double inches_;                                 /*
                                                        this is the variable the input is stored in
                                                        as inches
                                                        */
};

void DistanceConverter::SetDistanceFromMiles(double input) {
    inches_ = input * 63360;                            //convert from miles to inches
    return;
}

void DistanceConverter::SetDistanceFromYards(double input) {
    inches_ = input * 36;                               //convert from yards to inches
    return;
}

void DistanceConverter::SetDistanceFromFeet(double input) {
    inches_ = input * 12;                               //convert from feet to inches
    return;
}

void DistanceConverter::SetDistanceFromInches(double input) {
    inches_ = input;                            //stores value since it's already in inches
    return;
}

void DistanceConverter::SetDistanceFromMeters(double input) {
    inches_ = input * 39.2701;                            //convert from meters to inches
    return;
}

double DistanceConverter::GetDistanceAsMiles() {
    return inches_ / 63360;               //returns the initial inches value as miles
}

double DistanceConverter::GetDistanceAsYards() {
    return inches_ / 36;                  //returns the initial inches value as yards
}

double DistanceConverter::GetDistanceAsFeet() {
    return inches_ / 12;                  //returns the initial inches value as feet
}

double DistanceConverter::GetDistanceAsInches() {
    return inches_;                       //returns the initial inches value
}

double DistanceConverter::GetDistanceAsMeters() {
    return inches_ / 39.3701;             //returns the intial inches value as meters
}

DistanceConverter::DistanceConverter() {
    inches_ = 0;                          //this is the default constructor
}

DistanceConverter::DistanceConverter(double input) {
    inches_ = input;                      //this is the second constructor
}

void DistanceConverter::PrintDistance() {               //printing all the possible outputs from the input
    cout << "This is the initial value in Inches: " << GetDistanceAsInches() << endl;
    cout << "This is the initial value in Feet: " << GetDistanceAsFeet() << endl;
    cout << "This is the initial value in Yards: " << GetDistanceAsYards() << endl;
    cout << "This is the initial value in Miles: " << GetDistanceAsMiles() << endl;
    cout << "This is the initial value in Meters: " << GetDistanceAsMeters() << endl;
    return;
}

int main ()                 //this is the main function being run
{
    
    DistanceConverter dist1;            //this is the primary default class using default constructor
    DistanceConverter dist2(20);            //this is used to test the other constructor
    
    //the following 4 lines are for situation 1
    cout << "This is used to demonstrate conversion from 1 mile to feet" << endl;
    dist1.SetDistanceFromMiles(1);
    cout << "Here is the initial Miles Value: " << dist1.GetDistanceAsMiles() << endl;
    cout << "Here is that value now in Feet: " << dist1.GetDistanceAsFeet() << endl;
    
    cout << " " << endl;
    
    //the following 4 lines are for situation 2
    cout << "This is used to demonstrate conversion from 1 mile to inches" << endl;
    dist1.SetDistanceFromMiles(1);
    cout << "Here is the initial Miles Value: " << dist1.GetDistanceAsMiles() << endl;
    cout << "Here is that value now in Inches: " << dist1.GetDistanceAsInches() << endl;
    
    cout << " " << endl;
    
    //the following 4 lines are for situation 3
    cout << "This is used to demonstrate conversion from 1 mile to meters" << endl;
    dist1.SetDistanceFromMiles(1);
    cout << "Here is the initial Miles Value: " << dist1.GetDistanceAsMiles() << endl;
    cout << "Here is that value now in Meters: " << dist1.GetDistanceAsMeters() << endl;
    
    cout << " " << endl;
    
    //the following 4 lines are for situation 4
    cout << "This is used to demonstrate conversion from 1 mile to yards" << endl;
    dist2.SetDistanceFromMiles(1);
    cout << "Here is the initial Miles Value: " << dist2.GetDistanceAsMiles() << endl;
    cout << "Here is that value now in Yards: " << dist2.GetDistanceAsYards() << endl;
    
    cout << " " << endl;
    
    //the following 4 lines are for situation 5
    cout << "This is used to demonstrate conversion from 16 feet to miles" << endl;
    dist2.SetDistanceFromFeet(16);
    cout << "Here is the intial Feet Value: " << dist2.GetDistanceAsFeet() << endl;
    cout << "Here is the value now in miles: " << dist2.GetDistanceAsMiles() << endl;
    
    cout << " " << endl;
    
    //the following 4 lines are for situation 6
    cout << "This is used to demonstrate conversion from 20 yards to feet" << endl;
    dist2.SetDistanceFromYards(20);
    cout << "Here is the initial Yards Value: " << dist2.GetDistanceAsYards() << endl;
    cout << "Here is that value now in feet: " << dist2.GetDistanceAsFeet() << endl;
    
    cout << " " << endl;
    
    //the following 4 lines are for situation 7
    cout << "This is used to demonstrate conversion from 100 inches to miles" << endl;
    dist2.SetDistanceFromInches(100);
    cout << "Here is the initial Inches Value: " << dist2.GetDistanceAsInches() << endl;
    cout << "Here is that value now in Miles: " << dist2.GetDistanceAsMiles() << endl;
    
    cout << " " << endl;
    
    //the following 4 lines are for situation 8
    cout << "This is used to demonstrate conversion from 1 meter to miles" << endl;
    dist1.SetDistanceFromMeters(1);
    cout << "Here is the initial Meters Value: " << dist1.GetDistanceAsMeters() << endl;
    cout << "Here is that value now in Miles: " << dist1.GetDistanceAsMiles() << endl;
    
    return 0;
}