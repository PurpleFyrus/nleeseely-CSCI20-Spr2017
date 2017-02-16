//Created by: Nick LeeSeely
//Created on: February 16th 2017

#include <iostream>
#include <string>
using namespace std;

struct wageCalculator {
    
    string name;
    double hourlyWage;
    int hoursWorked;
    double healthInsuranceFees;
    double tax;
    
    };

int main()

{
    
    wageCalculator wage1;
    
    cout << "Please enter your name:" << endl;
    getline(cin, wage1.name);                        //Using Getline so USER can enter 1st & Last name
    cout << "Please enter your hourly wage:" << endl;
    cin >> wage1.hourlyWage;
    cout << "Please enter your number of hours worked:" << endl;
    cin >> wage1.hoursWorked;
    cout << "Please enter Health Insurance fee:" << endl;
    cin >> wage1.healthInsuranceFees;
    cout << "Please enter Tax Rate:" << endl;
    cin >> wage1.tax;
    
    double grossPay = wage1.hourlyWage * wage1.hoursWorked;
    double netPay = (grossPay - wage1.healthInsuranceFees) * (1.0 - wage1.tax);
    cout << endl;
    
    // I used the equation part (1.0 - wage1.tax) to get the correct # to multiply with
    
    cout << "Here is your Wage Slip" << endl;
    cout << "Name: " << wage1.name << endl;
    cout << "Hourly Wage: $" << wage1.hourlyWage << " an hour" << endl;
    cout << "Hours Worked: " << wage1.hoursWorked << endl;
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Net Pay (after taxes): $" << netPay << endl;
    
    return 0;
    
}