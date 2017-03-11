//Created by: Nick LS
//Created on: March 10, 2017

#include<iostream>
using namespace std;

class DistanceConverter {
    
    public:
        void SetDistanceFromMiles(double input);
        void SetDistanceFromYards(double input);
        void SetDistanceFromFeet(double input);
        void SetDistanceFromInches(double input);
        void SetDistanceFromMeters(double input);
        
        double GetDistanceAsMiles();
        double GetDistanceAsYards();
        double GetDistanceAsFeet();
        double GetDistanceAsInches();
        double GetDistanceAsMeters();
        
        DistanceConverter();
        DistanceConverter(double input);
        
        void PrintDistance();
    
    private:
        double inches_;
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
    return inches_;
}

double DistanceConverter::GetDistanceAsMeters() {
    return inches_ / 39.3701;
}

DistanceConverter::DistanceConverter() {
    inches_ = 0;
}

DistanceConverter::DistanceConverter(double input) {
    inches_ = input;
}

void DistanceConverter::PrintDistance() {
    cout << "This is the initial value in Inches: " << GetDistanceAsInches() << endl;
    cout << "This is the initial value in Feet: " << GetDistanceAsFeet() << endl;
    cout << "This is the initial value in Yards: " << GetDistanceAsYards() << endl;
    cout << "This is the initial value in Miles: " << GetDistanceAsMiles() << endl;
    cout << "This is the initial value in Meters: " << GetDistanceAsMeters() << endl;
    return;
}

int main () 
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