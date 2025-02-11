//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by caleb mart on 2/11/2025
#include <iostream>
using namespace std;

int main()
{
  
double height   = 0.0;
double radius   = 0.0;
double volume   = 0.0;
double PI       = 3.14159;

std::cout << "Enter the height of the cylinder: ";
std::cin >> height;
std::cout << "Enter the radius of the base of the cylinder: ";
std::cin >> radius;

volume = PI * radius * radius * height;

std::cout << "Volume is: " << volume << endl;

  
return 0;

  } //end of main function