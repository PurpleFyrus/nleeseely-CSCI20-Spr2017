//Created by: Nick L.S. 
//Created on: March 9th 2017

//The following I've made is a class I will make to be used in the program main made by April Brown

/* Created By: April Browne
 * Created On: 9/22/2016
 * This program will run the Temperature Converter Class
 */
 
#include<iostream>
using namespace std;

class TemperatureConverter {
    
    public:
        void SetTempFromKelvin(double input);
        double GetTempFromKelvin();
        
        void SetTempFromCelsius(double input);
        void SetTempFromFahrenheit(double input);
        double GetTempAsCelsius();
        double GetTempAsFahrenheit();
        
        double PrintTemperatures();
        
        TemperatureConverter();
        TemperatureConverter(double input);
    
    private:
        double kelvin_;
    
};

void TemperatureConverter::SetTempFromKelvin(double input) {    //accepts a kelvin value and stores it
    kelvin_ = input;
    return;
}

double TemperatureConverter::GetTempFromKelvin() {             //returns the kelvin value
    return kelvin_;
}

void TemperatureConverter::SetTempFromCelsius(double input) {   //accepts a Celsius value and converts it
    kelvin_ = input + 273.15;                         //to kelvin
    return;
}

void TemperatureConverter::SetTempFromFahrenheit(double input) {    //accepts a Farenheit value and converts
    kelvin_ = (5 * (input - 32) / 9) + 273.15;              //it to kelvin
    return;
}

double TemperatureConverter::GetTempAsCelsius() {                  //returns the Celsius temperature
    return (kelvin_ - 273.15);
}

double TemperatureConverter::GetTempAsFahrenheit() {               //returns the Farenheit temperature
    return ((GetTempAsCelsius() * 9) / 5 + 32);
}

double TemperatureConverter::PrintTemperatures() {
    cout << "Kelvin: " << GetTempFromKelvin() << endl;
    cout << "Celsius: " << GetTempAsCelsius() << endl;
    cout << "Farenheit: " << GetTempAsFahrenheit() << endl;
}

TemperatureConverter::TemperatureConverter() {
    kelvin_ = 0;
}

TemperatureConverter::TemperatureConverter(double input) {
    kelvin_ = input;
}

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}