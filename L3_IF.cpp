#include <iostream>
using namespace std;

void if_statement() {
    // local variable declaration:
    int a = 10;

    // check the boolean condition
    if (a < 20) {
        // if condition is true then print the following
        cout << "a is less than 20;" << endl;
    }
    cout << "value of a is : " << a << endl;
}

void if_else_statement() {
    // local variable declaration:
    int a = 100;

    // check the boolean condition
    if (a == 10) {
        // if condition is true then print the following
        cout << "Value of a is 10" << endl;
    }
    else if (a == 20) {
        // if else if condition is true
        cout << "Value of a is 20" << endl;
    }
    else if (a == 30) {
        // if else if condition is true 
        cout << "Value of a is 30" << endl;
    }
    else {
        // if none of the conditions is true
        cout << "Value of a is not matching" << endl;
    }
    cout << "Exact value of a is : " << a << endl;
}

void nested_if_statemet() {
    // local variable declaration:
    int a = 100;
    int b = 200;

    // check the boolean condition
    if (a == 100) {
        // if condition is true then check the following
        if (b == 200) {
            // if condition is true then print the following
            cout << "Value of a is 100 and b is 200" << endl;
        }
    }
    cout << "Exact value of a is : " << a << endl;
    cout << "Exact value of b is : " << b << endl;
}

void switch_statement() {
    // local variable declaration:
    char grade = 'D';

    switch (grade) {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
    case 'C':
        cout << "Well done" << endl;
        break;
    case 'D':
        cout << "You passed" << endl;
        break;
    case 'F':
        cout << "Better try again" << endl;
        break;
    default:
        cout << "Invalid grade" << endl;
    }
    cout << "Your grade is " << grade << endl;
}

void nested_switch_statement() {
    // local variable declaration:
    int a = 100;
    int b = 200;

    switch (a) {
    case 100:
        cout << "This is part of outer switch" << endl;
        switch (b) {
        case 200:
            cout << "This is part of inner switch" << endl;
        }
    }
    cout << "Exact value of a is : " << a << endl;
    cout << "Exact value of b is : " << b << endl;
}