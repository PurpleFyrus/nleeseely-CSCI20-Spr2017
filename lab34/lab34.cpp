//created by: Nick LS
//created on: 4/25/17

//the following code is a "fixed" version of a bugged algorithm designed to calculate the sum of input numbers

#include <iostream>
using namespace std; 
int main(){
        // initialization
        int num;
        int sum=0;
        cout << "Enter numbers separated by spaces" << " and terminated with a negative number." << endl;
         // read first number
        cin >> num;
         while (num >= 0)
        {
               // add in to the sum
               sum = sum + num;
                // read in next number (getting ready for next loop test)
               cin >> num;
        }
                cout << "Sum was " << sum << endl;
                return 0;
}