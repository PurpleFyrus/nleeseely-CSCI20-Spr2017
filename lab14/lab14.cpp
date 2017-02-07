//Created by: Nick LeeSeely
//Created on: February 7th 2017

/*The following algorithm is intended to simulate a Coinstar Machine
It will tell you how many of each coin you have and the overall money
the USER will get back after a 10.9% fee of the overall sum in the form of a voucher */

#include <iostream>
using namespace std;

int main() {

//The amount of money inserted will be in "cents" and in the end result converted to dollars

int numQuarters;
int numDimes;
int numNickels;
int numPennies;

int amountCentsInserted = 0;
double voucherAmount = 0.0;
double coinstarFeePercent = 10.9;
double coinstarFee = 0.0;
double amountDollarsInserted = 0.0;

int priceQuarters = 25;
int priceDimes    = 10;
int priceNickels  = 5;
int pricePennies  = 1;
    
    cout << "Please enter amount of change inserted: ";
    cin >> amountCentsInserted;
    
    //The following 9 lines are all the calculations
    
    numQuarters = amountCentsInserted / priceQuarters;
    numDimes    = (amountCentsInserted % priceQuarters) / priceDimes;
    numNickels  = ((amountCentsInserted % priceQuarters) % priceDimes) / priceNickels;
    numPennies  = ((amountCentsInserted % priceQuarters) % priceDimes) % priceNickels;
    
    amountDollarsInserted = (amountCentsInserted / 100.0);
    coinstarFee = (amountDollarsInserted * coinstarFeePercent) / 100.0;
    voucherAmount = (amountDollarsInserted - coinstarFee);
    
    //The following 9 lines are what will be output after the calculations are done
    
    cout << "There are" << endl;
    cout << numQuarters << " Quarters" << endl;
    cout << numDimes << " Dimes" << endl;
    cout << numNickels << " Nickels" << endl;
    cout << numPennies << " Pennies" << endl;
    cout << "and after the " << coinstarFeePercent << "% fee" << endl;
    cout << "which comes out to $" << coinstarFee << endl;
    cout << "you get $" << voucherAmount << " for your voucher amount";
    
    /*
    I don't know how to have the final Dollar amount round up to the 2nd space right of the decimal
    point, so I will just assume it's something we learn later on
    */
    
    return 0;
}