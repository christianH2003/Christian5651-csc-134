//csc 134
//M3lab1
//Christian holmes
// 2/19/23

#include <iostream>
using namespace std;

int main()
{
// declare the variable;
double choice;
// ask the question
cout << "Do you choose Door 1 or Door 2?" << endl; 
cout << "Type 1 or 2: ";
cin >> choice; 

// using if, make a decision based on the user's choice 
if (1 == choice) {
    cout << "You chose Door 1" << endl;
}
else if (2 == choice) {
    cout << "You chose Door 2." << endl;
}
else {
    cout <<  "I'm sorry, that is not a valid choice." << endl;
}

cout << "Thanks for playing!" << endl; 

return 0; 

}