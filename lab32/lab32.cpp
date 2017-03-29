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
  int filingStatus;
  int grossIncome;
  double taxAmountWitheld;
  double adjustedGrossIncome;
  double totalTaxOwed = 0;
  double taxRefund = 0;
      
  cout << "Please enter name: " << endl;
  getline(cin, name);
      
  cout << "Please enter either 1 for single, or 2 for married, then press enter: " << endl;
  cin >> filingStatus;
      
  cout << "Please enter your gross income: " << endl;
  cin >> grossIncome;
      
  cout << "Please enter your amount of tax witheld: " << endl;
  cin >> taxAmountWitheld;
      
  switch (filingStatus) {         //this switch case determines personal exemption amount
    case 1:                       //based on the filing status
        adjustedGrossIncome = grossIncome - 3900;
        break;
    case 2:
        adjustedGrossIncome = grossIncome - 7800;
        break;
    default:
        cout << "issue with AGI based on filing status" << endl;
        break;
  }
      
  if (adjustedGrossIncome < 0) {
      totalTaxOwed = 0;
  }
  else (adjustedGrossIncome >= 0) ;{
      switch (filingStatus) {
          case 1:
              if ((adjustedGrossIncome >= 0) && (adjustedGrossIncome <= 8925)){
                  totalTaxOwed = adjustedGrossIncome / 10;
              }
              else if ((adjustedGrossIncome > 8925) && (adjustedGrossIncome <= 36250)){
                  totalTaxOwed = 892.50 + (((adjustedGrossIncome - 8925) / 20) * 3);
              }
              else if ((adjustedGrossIncome > 36250) && (adjustedGrossIncome <= 87850)){
                  totalTaxOwed = 4991.25 + ((adjustedGrossIncome - 36250) / 4);
              }
              else if (adjustedGrossIncome > 87850){
                  totalTaxOwed = 17891.25 + (((adjustedGrossIncome - 87850) / 25) * 7);
              }
              else {
                  cout << "error with tax determination for single status" << endl;
              }
              break;
                  
          case 2:
              if ((adjustedGrossIncome >= 0) && (adjustedGrossIncome <= 17850)){
                  totalTaxOwed = adjustedGrossIncome / 10;
              }
              else if ((adjustedGrossIncome > 17850) && (adjustedGrossIncome <= 72500)){
                  totalTaxOwed = 1785 + (((adjustedGrossIncome - 17850) / 20) * 3);
              }
              else if (adjustedGrossIncome > 72500){
                  totalTaxOwed = 9982.50 + (((adjustedGrossIncome - 72500) / 25) * 7);
              }
              else {
                  cout << "error with tax determination for married status" << endl;
              }
              break;
              
          default:
              cout << "there is an issue with the marital status during tax bracket determination" << endl;
      }
  }
      
  if (totalTaxOwed < taxAmountWitheld) {
      taxRefund = (taxAmountWitheld - totalTaxOwed);
      totalTaxOwed = 0;
  }
  else if (totalTaxOwed > taxAmountWitheld) {
      totalTaxOwed = (totalTaxOwed - taxAmountWitheld);
  }
  else {
    cout << "issue with the difference between tax owed and tax witheld" << endl;
  }
    
  cout << "Name: " << name << endl;
  cout << "Total Gross Adjusted Income: $" << adjustedGrossIncome << endl;
  cout << "Total tax owed: $" << totalTaxOwed << endl;
  cout << name << " is entitled to a REFUND of $" << taxRefund << "." << endl;
    
  return 0;
  }