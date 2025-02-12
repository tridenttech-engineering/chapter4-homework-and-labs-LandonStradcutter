//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <your name> on <current date>
#include <iostream>
int main()
{
  //declare named constants and variables
  const double PI = 3.14159;
  double height   = 0.0;
  double radius   = 0.0;
  double volume   = 0.0;
  //enter input items
  std::cout << "Enter the height of the cylinder: ";
  std::cin >> height;
  std::cout << "Enter the radius of the base of the cylinder:";
  std::cin >> radius;
  //calculate and display the volume
  volume = PI * radius * radius * height;
  std::cout << "The volume is " << volume << std::endl;
  return 0;
  
} //end of main function

