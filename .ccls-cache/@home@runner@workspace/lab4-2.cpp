//Lab4-2.cpp - displays a salesperson's commission
//Philip Regalbuto
#include <iostream>
using namespace std;
int main()
{
double commissionrate = 0.1;
double sales = 0.0;
double commission = 0.0;

std::cout << "Enter the sales amount: ";
std::cin >> sales;

commission = sales*commissionrate;

std::cout << "The commission is: $" << commission << std::endl;
  
  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/