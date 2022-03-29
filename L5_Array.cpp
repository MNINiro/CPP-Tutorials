#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;

void arrayType() {

    string n[26]{}; // n is an array of 26 integers

    n[0] = 10;
    n[1] = 20;
    n[2] = 30;
    n[3] = 40;

    cout << n[0] + n[1];

    // initialize elements of array n to 0          
    for (int i = 0; i < 26; i++) {
        n[i] = i + 65; // set element at location i to i + 100
    }
    cout << "Element" << setw(13) << "Value" << endl;

    // output each array element's value    
    //setw() function to format the output
    for (int j = 0; j < 26; j++) {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }    
}

void array2D() {
    int arr[5][3]{};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = i+j; 
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << endl;            
        }
        cout << endl;        
    }
}