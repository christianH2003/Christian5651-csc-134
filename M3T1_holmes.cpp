//csc 134
//M3T1
//Christian holmes
// 2/14/23

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double length1, width1;
    double length2, width2;
    double area1, area2;
    //ask for length and width of first rectangle 
    cout << "Length of first rectangle: " ;
    cin >> length1 ;
    cout <<"Width of first rectangle: ";
    cin >> width1; 
    cout << "Length of second rectangle: ";
    cin >> length2;
    cout << "Width of the second rectangle: ";
    cin >> width2;

    // Calculate the areas 
    area1 = length1 * width1; 
    area2 = length2 * width2;
    // print the areas 
    cout << "The area of the first area is: " << area1 << endl;
    cout << "The area of the second area is: " << area2 << endl;

    return 0;
}