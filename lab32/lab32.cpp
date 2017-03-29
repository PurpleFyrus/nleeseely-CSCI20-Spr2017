//created by: Nicholas Lee-Seely
//created on: 3/28/2017

/*the following algorithm is intended to take in input Gross income
  and output the expected tax*/
  
#include <iostream>
#include <string>
using namespace std;
  
int main() 

{
  string name;
  int filingStatus;                               //marital status
  int grossIncome;                                //initial wages value
  double taxAmountWitheld;                        //amount of tax witheld by filer
  double adjustedGrossIncome;                     //wages after personal exemption amount
  double totalTaxOwed = 0;                        //final amount of taxes owed
  double taxRefund = 0;                           //tax refund
      
  cout << "Please enter name: " << endl;
  getline(cin, name);
      
  cout << "Please enter either 1 for single, or 2 for married, then press enter: " << endl;         //decided 1 and 2 instead for simplicity reasons
  cin >> filingStatus;
      
  cout << "Please enter your gross income: " << endl;
  cin >> grossIncome;
      
  cout << "Please enter your amount of tax witheld: " << endl;
  cin >> taxAmountWitheld;
      
  switch (filingStatus) {         //this switch case determines personal exemption amount
    case 1:                       //based on the filing status
        adjustedGrossIncome = grossIncome - 3900;                 //if filer is single
        break;
    case 2:
        adjustedGrossIncome = grossIncome - 7800;                 //if filer is married
        break;
    default:                                                      //in case user input something other than 1 or 2, for debug purposes
        cout << "issue with AGI based on filing status" << endl;
        break;
  }
      
  if (adjustedGrossIncome < 0) {                                  //obviously if the filer didn't make any money, they don't have to file
      totalTaxOwed = 0;
  }
  else (adjustedGrossIncome >= 0) ;{                              //this is to incorporate all scenarios of the user's wages above 0
      switch (filingStatus) {                                     //used to differentiate between marital status
          case 1:                                                 //case 1 is obviously for those who file as single
              if ((adjustedGrossIncome >= 0) && (adjustedGrossIncome <= 8925)){             //for those who make between 0 and 8925 in overall wages
                  totalTaxOwed = adjustedGrossIncome / 10;
              }
              else if ((adjustedGrossIncome > 8925) && (adjustedGrossIncome <= 36250)){     //for those who make between 8926 and 36250 in overall wages
                  totalTaxOwed = 892.50 + (((adjustedGrossIncome - 8925) / 20) * 3);
              }
              else if ((adjustedGrossIncome > 36250) && (adjustedGrossIncome <= 87850)){    //for those who make between 36251 and 87850 in overall wages
                  totalTaxOwed = 4991.25 + ((adjustedGrossIncome - 36250) / 4);
              }
              else if (adjustedGrossIncome > 87850){                                        //for those who make 87851 and up in overall wages
                  totalTaxOwed = 17891.25 + (((adjustedGrossIncome - 87850) / 25) * 7);
              }
              else {                                                                        //for debug purposes, not likely it'd be used, but why not
                  cout << "error with tax determination for single status" << endl;
              }
              break;
                  
          case 2:                                                 //case 2 is for those who file as married
              if ((adjustedGrossIncome >= 0) && (adjustedGrossIncome <= 17850)){            //for those who make between 0 and 17850 in overall wages
                  totalTaxOwed = adjustedGrossIncome / 10;
              }
              else if ((adjustedGrossIncome > 17850) && (adjustedGrossIncome <= 72500)){    //for those who make between 17851 and 72500 in overall wages
                  totalTaxOwed = 1785 + (((adjustedGrossIncome - 17850) / 20) * 3);
              }
              else if (adjustedGrossIncome > 72500){                                        //for those who make 72501 and up in overall wages
                  totalTaxOwed = 9982.50 + (((adjustedGrossIncome - 72500) / 25) * 7);
              }
              else {                                                                        //for debug purposes, not likely it'd be used, but why not
                  cout << "error with tax determination for married status" << endl;
              }
              break;
              
          default:                                                                          //for debug purposes, in case the user input something other than 1 or 2
              cout << "there is an issue with the marital status during tax bracket determination" << endl;
      }
  }
      
  if (totalTaxOwed < taxAmountWitheld) {                            //determines if user should get a refund
      taxRefund = (taxAmountWitheld - totalTaxOwed);
      totalTaxOwed = 0;
  }
  else if (totalTaxOwed > taxAmountWitheld) {                       //determines if user should pay more taxes
      totalTaxOwed = (totalTaxOwed - taxAmountWitheld);
  }
  else {                                                            //debug purposes, probably only would happen if both compared variables were equal to each other
    cout << "issue with the difference between tax owed and tax witheld" << endl;
  }
                                                                    //following four lines are just the output of the results
  cout << "Name: " << name << endl;
  cout << "Total Gross Adjusted Income: $" << adjustedGrossIncome << endl;
  cout << "Total tax owed: $" << totalTaxOwed << endl;
  cout << name << " is entitled to a REFUND of $" << taxRefund << "." << endl;
    
  return 0;
  }