#include <iostream>
using namespace std;

//Ex-1 Functions
// function declaration
int max(int num1, int num2);

void mainFunction() {
    // local variable declaration:
    int a = 100;
    int b = 200;
    int ret;

    // calling a function to get max value.
    ret = max(a, b);
    cout << "Max value is : " << ret << endl;    
}

// function returning the max between two numbers
int max(int num1, int num2) {
    // local variable declaration
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;
}

//Ex-2 Functions
// function definition to swap the values.
void swap(int x, int y) {
    int temp;

    temp = x;   /* save the value of x */
    x = y;      /* put y into x */
    y = temp;   /* put x into y */

    return;
}

// function declaration
void swap(int x, int y);

void swapFunction() {
    // local variable declaration:
    int a = 100;
    int b = 200;

    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;

    // calling a function to swap the values.
    swap(a, b);

    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;
}
