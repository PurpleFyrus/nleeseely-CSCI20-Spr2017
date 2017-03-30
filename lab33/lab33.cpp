//created by: nick lee seely
//created on: 3/30/17

/* the following program is supposed to first generate a random number
between 1 and 50, then ask for a user input (within a loop) and compare that 
input to the random number and then respond with a relative comment which either
is within the loop or outside assuming the input number was matching the random number */

#include <iostream>
using namespace std;

int main() {
    
    srand(time(0));                                 //seeds random number generator
    int randomNumber = ((rand() % 50) + 1);             //generates the random number and stores the value
    int userInput = 0;
    
    cout << "Please enter a number between 1 and 50: " << endl;
    cin >> userInput;                               //user assigns a value to enter into the loop with
    
    while (userInput != randomNumber) {             /*this is the loop, while the userInput doesn't equal the random number
                                                    the loop will give an certain output to guide the user
                                                    until they guess the right number */
        if (userInput <= 50 && userInput >= 1) {        //this line is to preface if the input number is between 1 and 50
            if (userInput < randomNumber) {
                cout << "Enter a Higher Number: " << endl;          //this lets the user know their number is comparitively 
            }                                                       //low to the random number
            else if (userInput > randomNumber) {
                cout << "Enter a Lower Number: " << endl;           //this lets the user know their number is comparitively
            }                                                       //high to the random number
        }
        else {
            cout << "Number is not between 1 and 50" << endl;       //this is in case the input number is not between 1 and 50
        }
        
        cout << "Please enter a number between 1 and 50: " << endl;     //this is reached if the user did not guess the right number
        cin >> userInput;                                               //and gives the user a chance to guess again before the loop starts over
        
    }
    
    cout << "Congrats! You guessed right! The number was " << randomNumber << endl;     //this occurs if the user guesses the right number
                                                                                        //because the two defined variables equal each other
    return 0;
}