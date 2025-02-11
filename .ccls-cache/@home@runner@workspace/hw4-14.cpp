// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
// variables
  int small = 0;
  int medium = 0;
  int large = 0;
  int family = 0;
  int total = 0;
  double smallPercent = 0.0;
  double mediumPercent = 0.0;
  double largePercent = 0.0;
  double familyPercent = 0.0;

  // input
  cout << "Number of small sold: ";
  cin >> small;
  cout << "Number of medium sold: ";
  cin >> medium;
  cout << "Number of large sold: ";
  cin >> large;
  cout << "Number of family sold: ";
  cin >> family;

   // math
  total = small + medium + large + family;
  smallPercent = small / static_cast<double>(total);
  mediumPercent = medium / static_cast<double>(total);
    largePercent = large / static_cast<double>(total);
    familyPercent = family / static_cast<double>(total);

familyPercent = familyPercent * 100;
smallPercent = smallPercent * 100;
  mediumPercent = mediumPercent * 100;
  largePercent = largePercent * 100;


  
// outputs
  cout << "Total" << total << endl;
  cout << "Small" << smallPercent << "%" << endl;
  cout << "Medium" << mediumPercent << "%" << endl;
  cout << "Large" << largePercent << "%" << endl;
  cout << "Family"<< familyPercent << "%" << endl;
    





  

  return 0;
} // end of main function