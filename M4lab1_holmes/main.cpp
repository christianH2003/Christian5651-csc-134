// CSC 134
// M4lab1
// Christian Holmes
// 3/6/24

#include <iostream>

using namespace std;

int main()
{
    cout << "M4LAB1" << endl;
    // declare v
    int width;
    int height;

    cout << " pick a height: ";
    cin >> height;
    cout << " pick a width: ";
    cin >> width;

    // first a row
    for (int i=0; i < width; i++) {
        cout << "# ";
    }
    cout << endl << endl;
    // next, a column
    for ( int i =0; i < height; i++) {
        cout << "# ";
    }
    cout << endl << endl;
    //put it together
    for (int i=0; i < height; i++) {
        for (int j=0; j < width; j++) {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}
