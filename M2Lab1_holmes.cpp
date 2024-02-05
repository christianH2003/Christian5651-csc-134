/*
M2Lab1
Crate Sales
Holmes
2/5/24
*/ 
#include <iostream>
#include <iomanip>
using namespace std; 

int main() {
  // constabts for cost and amount charged
  const double COST_PER_CUBIC_FOOT = 0.23; 
  const double CHARGE_PER_CUBIC_FOOT = 0.5;

  // Take 1 - just a rectangle
  // Declare variables
  double length, width;
  double area;
  double height; 
  double volume;
  double cost;
  double charge;
  double profit;
  // set the desired output formatting for numbers.
  cout << setprecision (2) << fixed << showpoint; 
  // Ask for user input 
  cout << "Enter the dimensions of the crate (in feet):\n";
  cout << "Length? ";
  cin >> length;
  cout << "width? ";
  cin >> width;
  cout << "Height? ";
  cin >> height;

  // Do calculations 
  // Calculate the creat's volume, the cost to produce it, 
  // the charge to the customer, and the profit.
  area = length * width;
  volume = length * width * height; 
  cost = volume * COST_PER_CUBIC_FOOT;
  charge = volume * CHARGE_PER_CUBIC_FOOT;
  profit = charge - cost;

  //print the answer 
  cout << "The area is: " << area << endl;
  cout << "The volume of the create is: ";
  cout << volume << "cubic feet.\n";
  cout << "Cost to build: $" << charge << endl;
  cout << "Profit: $" << profit << endl;

  return 0; 
}


