#include <iostream>

using namespace std;

void if_statement() {
    // local variable declaration:
    int a = 10;

    // check the boolean condition
    if (a < 20) {
        // if condition is true then print the following
        cout << a << " is less than 20;" << endl;
    }    
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
    int a, b;

    cout << "Enter 1st value:", cin >> a;
    cout << "Enter 2nd value:", cin >> b;

    // check the boolean condition
    if (a == 100) {
        // if condition is true then check the following
        if (b == 200) {
            // if condition is true then print the following
            cout << "Value of a is 100 and b is 200" << endl;
        }
    }
    /*cout << "Exact value of a is : " << a << endl;
    cout << "Exact value of b is : " << b << endl;*/
}

void nested_if_condition() {
    string group, gender, department;
    cout << "Enter group:", cin >> group;

    if (group == "student") {
        
        cout << "Enter student's gender:", cin >> gender;
        if (gender == "male") {
            cout << "Student will be in the male football team";
        }
        else if (gender == "female") {
            cout << "Student will be in the female handball team";
        }
        else {
            cout << "wrong gender has been inputted";
        }
    } else if (group == "teacher") {

        cout << "Enter teacher's Department:", cin >> department;
        if (department == "science") {
            cout << "Teacher of science faculty";
        }
        else if (department == "commerce") {
            cout << "Teacher is commerce department";
        }  
        else {
            cout << "Wrong department entered";
        }
    }
    else if (group == "staff") {

        cout << "Enter staff's Department:", cin >> department;
        if (department == "accounts") {
            cout << "Staff working in accounts department";
        }
        else if (department == "admin") {
            cout << "Staff working in admin department";
        }
        else {
            cout << "Wrong department entered";
        }
    }
    else {
        cout << "Wrong group has been selected";
    }
}

void switch_statement() {
    // local variable declaration:
    char grade;
    cout << "Enter grade:", cin >> grade;
    
    switch (grade) {
    case 'A':
        cout << "Excellent!" << endl;
        break;
    case 'B':
        cout << "Good" << endl;
        break;
    case 'C':
        cout << "Well done" << endl;
        break;
    case 'D':
    case 'E':
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
    default:
        cout << "Invalid grade" << endl;
    }
    cout << "Exact value of a is : " << a << endl;
    cout << "Exact value of b is : " << b << endl;
}