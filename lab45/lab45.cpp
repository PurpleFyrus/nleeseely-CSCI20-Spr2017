//created by: nick ls
//created on 5/3/2017

//program takes in a first and last name (via Strings), then outputs 3 possible usernames based on those inputs

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main () {
    
    string firstName;                 //this is the String that the user's first name will be placed in
    string lastName;                  //this is the String that the user's last name will be placed in
    int i[2] = {1,1};                 //this variable is used in both loops later on as a means to insure the user doesn't enter too large a string
    
    
    while (i[0] != 0) {             //this is the start of the first loop, designed to get the user's first name
    
        cout << "Enter first name, up to 10 Characters long" << endl;
        
        cin >> firstName;           //user inputs their first name into the string
        
            if (firstName.length() > 10) {                   //the following 7 lines are used to determine if the First name is too long or not
                cout << "Input for first name is too long" << endl;
                i[0] = 1;  
            }
            else {                                          //if it is under the specified amount (10) then i is assigned 0 and it breaks the loop
                i[0] = 0;
            }
    }
    
    while (i[1] != 0) {             //this is the start of the first loop, designed to get the user's last name
       
        cout << "Enter last name, up to 20 Characters long" << endl;
        
        cin >> lastName;            //user inputs their last name into the string
        
            if (lastName.length() > 20) {                   //the following 7 lines are used to determine if the last name is too long or not
                cout << "Input for last name is too long" << endl;
                i[1] = 1;  
            }                                              //if it is under the specified amount (20) then i is assigned 0 and it breaks the loop
            else {
                i[1] = 0;
            }
    }
    
    if (firstName == lastName) {                 //this then checks to insure the first and last name aren't the same
        cout << "Warning, both first and last name are the same!" << endl;
    }
    else {
        cout << "First and Last names are not the same, proceeding to username suggestions" << endl;
    }
    cout << "Here is what you entered: " << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    
    cout << "  " << endl;
    cout << "Which of the three user names would you like: " << endl;                   //then the 3 variant usernames are output below
    
    cout << firstName.at(0) << firstName.at(1) << lastName << endl;
    
    cout << firstName << lastName << endl;
    
    cout << firstName.at(0) << lastName << endl;
    
    return 0;
}