// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
 
  //  variables
  double startingBalance = 0.0;
  double deposits = 0.0;
  double withdrawals = 0.0;
  double endingBalance = 0.0;
  //  input 
  cout << "Enter starting balance: ";
  cin >> startingBalance;
  cout << "Enter deposits: ";
  cin >> deposits;
  cout << "Enter withdrawals: ";
  cin >> withdrawals;
  // ending balance
  endingBalance = startingBalance + deposits - withdrawals;
  cout << "Ending balance: $" << endingBalance << endl;
  
  
  
  //double salePrice = 0.0;
  //double taxRate = 0.0;
  //double salesTax = 0.0;
  //double cost = 0.0;
// inputs and stuff
  //cout << "Sale price: ";
  //cin >> salePrice;
  //cout << "Tax rate: ";
  //cin >> taxRate;
  // math time
//salesTax = salePrice * taxRate;
//cost = salePrice + salesTax;
  // display stuff
//cout << "Cost: $" << cost << endl;

  
  return 0;
} // end of main function