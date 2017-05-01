//created on 4/11/2017
//created by Nick Lee-Seely

//following program is meant to create a class called ArrayTools which will store a single integer array
//and a number of functions. The main function will be used to test the array.

#include <iostream>
using namespace std;

class ArrayTools{                                                           //this is the array and it's contained functions and variables
    
    public:
        ArrayTools();
        ArrayTools(int inputArray[], int inputArraySize);
        void PrintInternalArray();
        int FindMin(int lowerIndex, int higherIndex);
        int FindMax(int lowerIndex, int higherIndex);
        int FindSum();
        int FindNumEven();
        int FindNumOdd();
        int Search(int desiredValue);
        int IsSorted();
        
    private:
        int internalArraySize = 10;                                         //the internal array size
        int internalArray[10];                                              //the internal array
    
};

ArrayTools::ArrayTools() {                                                  //default constructor
}

ArrayTools::ArrayTools(int inputArray[], int inputArraySize) {            //Overloading the constructor so that whatever gets input with the class (for parameters) will be stored as the single internal array, for later use in functions
    for (int i = 0; i < inputArraySize; i++) {
        internalArray[i] = inputArray[i];
    }
    internalArraySize = inputArraySize;
}




void ArrayTools::PrintInternalArray() { 
    for (int i = 0; i < internalArraySize; i++) {                          //and obviously, the point of this function in the Class is to print out each location's value of the array
    cout << internalArray[i] << endl;
    }
    return;
}




int ArrayTools::FindMin(int lowerIndex, int higherIndex) {      //takes in a lower and a higher location of the array, then goes through them to find the lowest value in those locations

    int lowerValue = internalArray[lowerIndex];                 //this temporary variable stores the lower location's value at first

    for (int i = lowerIndex; i < higherIndex; i++) {            // might need to add +1 to higherIndex as it may loop too far, we'll see

        if (internalArray[i] < lowerValue) {                    //if the location being compared to the temp variable has a lower value
            lowerValue = internalArray[i];                       //then the new lower value is stored in the temp variable
        }
        }
    
    return lowerValue;                                          //finally the temp value is output at the end after the loop is done, since the final value will be the lowest value of the processed index locations
}




int ArrayTools::FindMax(int lowerIndex, int higherIndex) {      //takes in a lower and a higher location of the array, then goes through them to find the highest value in those locations

    int higherValue = internalArray[lowerIndex];                //this temporary variable stores the lower location's value at first
    
    for (int i = lowerIndex; i < higherIndex; i++) {                // might need to add +1 to higherIndex as it may loop too far, we'll see

        if (internalArray[i] > higherValue) {                   //if the location being compared to the temp variable has a higher value
            higherValue = internalArray[i];                      //then the new higher value is stored in the temp variable
        }
        }
    
    return higherValue;                                         //finally the temp value is output at the end after the loop is done, since the final value will be the highest value of the processed index locations
}




int ArrayTools::FindSum() {                                     //finds the value of the sum of all the index location values in the array

    int sum = 0;                                                //this temporary variable is what the sum is stored in
    
    for (int i = 0; i < internalArraySize; i++) {                                  //for each loop cycle each index location's value is added to the temp variable
        sum += internalArray[i];
    }

    return sum;                                                 //finally the sum is output in the form of this temp variable with all the values in the array added up
}




int ArrayTools::FindNumEven() {                                 //this function is used to find the number of even values stored in the array
    
    int evenCount = 0;                                          //used to keep tally of even values
    
    for (int i = 0; i < internalArraySize; i++) {               //loop used to iterate through every location in the array to search for even numbers
        
        if ((internalArray[i] % 2) == 0) {                      //by finding the mod of every value by 2, if the result is 0 the value tested is even
        ++evenCount;
        }
        
    }  
    return evenCount;                                           //returns the final count of even numbers
}
    
    


int ArrayTools::FindNumOdd() {                                  //this function is used to find the number of odd values stored in the array
    
    int oddCount = 0;                                           //used to keep tally of odd values
    
    for (int i = 0; i < internalArraySize; i++) {               //loop used to iterate through every location in the array to search for odd numbers         
        
        if ((internalArray[i] % 2) == 1) {                      //by finding the mod of every value by 2, if the result is 1 the value tested is odd
        ++oddCount;
        }
        
    }
    return oddCount;                                            //returns the final count of odd numbers
}




int ArrayTools::Search(int desiredValue) {                                      //this function is meant to compare all index location values to an input value, and return -1 if the value wasn't found, or the location if it was found
    
    int foundLocation = -1;                                                     //this is the temp variable where -1 default is stored if the input value is never found
    
    for (int i = 0; i < internalArraySize; i++) {                               //for each loop cycle each index location's value is compared to the input value
        if (desiredValue == internalArray[i]) {                                  //if the input value is the same as the value in the location being compared,
        foundLocation = i;                                                      //then the temp variable is assigned the location (in the form of i)
        break;                                                                  //then there is a break so that it doesn't keep looping
        }
        else {
        }
        
    }
    
    return foundLocation;                                                       //finally the temp variable is output and if the input value was found, the index location is output, but if not, then -1 (default value) is output
}




int ArrayTools::IsSorted() {                                                    //used to test whether the array's values are in numerical order from index location 1 to 10
    
    int isItSorted = 0;                                                         //used to determine in the end if the array is sorted, default value 0 is "it is sorted"
    int lowerValue = internalArray[0];                                          // temp variable used to compare to each index location through each iteration of the loop, which tests all array values
    
    for (int i = 0; i < internalArraySize; i++) {                               //loop used to iterate through all array index locations
        if (internalArray[i] >= lowerValue) {                                   //if the higher location is also higher/equal to the lower location, then they are numerically ordered, and nothing changes to "isItSorted"
            lowerValue = internalArray[i];                                      //it then stores the current loop iteration's chosen location from the array, in the temp variable for comparison on the next loop iteration
        }
        else {                                                                  //if ever the compared numbers aren't numerically ordered, then the temp variable: "isItSorted" is assigned 1 which means it's not sorted
            isItSorted = 1;
        }
    }
    return isItSorted;                                                          //finally either 1 or 0 is returned depending on if the array is infact sorted in numerical order
}

int main() {

    int SIZE = 10;
    int myArray[SIZE];

for (int i = 0; i < 10; i++) {
    cin >> myArray[i];
}

ArrayTools a(myArray, SIZE);                                                                    //the following lines are all just tests using each function to test if they work or not

cout << "Here is the print test ";
a.PrintInternalArray();

cout << " " << endl;

cout << "Here is the Minimum Value between elements 1 and 5: " << a.FindMin(0, 4);

cout << " " << endl;

cout << "Here is the Maximum Value between elements 6 and 10: " << a.FindMax(5, 9);

cout << " " << endl;

cout << "Here is the Sum of all the Values in the array: " << a.FindSum();

cout << " " << endl;

cout << "Here are the number of Even Values in the Array: " << a.FindNumEven();

cout << " " << endl;

cout << "Here are the number of Odd Values in the Array: " << a.FindNumOdd();

cout << " " << endl;

cout << "Here is a Search test, (assuming 46 is in the array) Value 46 is in Index Location: " << a.Search(46);

cout << " " << endl;

cout << "If the following number is a 1, then the array is not sorted, but if it's a 0 it is: " << a.IsSorted();

return 0;
}