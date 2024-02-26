//csc 134
//M3lab1
//Christian holmes
// 2/26/23

#include <iostream>
using namespace std;

int main()
{
    // declare variables 
    double numgrade; 

    //ask the question 
    cout << "Please enter number grade: "; 
    cin >> numgrade;
    if (numgrade <= 100 && numgrade >= 90) {
        cout << "You are killing it your grade is an A" << endl;
    }
    if ( numgrade <= 89 && numgrade >= 80) {
        cout << "A B is good your grade is a B" << endl; 
    }
    if (numgrade <=79 && numgrade >= 70) {
        cout << "It's ok you got a C" << endl;
    }
    if (numgrade <= 69 && numgrade >= 60) {
        cout << "Do better you got a D" << endl;
        if (numgrade == 69){
            cout << "nice but still a D" << endl; 
        }
    }
    if (numgrade <= 59 && numgrade >= 0) {
        cout << "Dude you're failing you got a F" << endl;
    }

    return 0; 

}
