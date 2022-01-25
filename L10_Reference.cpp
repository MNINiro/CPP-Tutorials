/* A reference variable is an alias, that is, another name for an 
already existing variable. Once a reference is initialized with a 
variable, either the variable name or the reference name may be 
used to refer to the variable. */

#include <iostream>

using namespace std;

//Ex-1
void reference() {
	// declare simple variables
	int    i;
	double d;

	// declare reference variables
	int& r = i;
	double& s = d;

	i = 5;
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r << endl;

	d = 11.7;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s << endl;
}



//Ex-2-References as Parameters
// function declaration
void swap(int& x, int& y);

void refeAsParameters() {
	// local variable declaration:
	int a = 100;
	int b = 200;

	cout << "Before swap, value of a :" << a << endl;
	cout << "Before swap, value of b :" << b << endl;

	/* calling a function to swap the values.*/
	swap(a, b);

	cout << "After swap, value of a :" << a << endl;
	cout << "After swap, value of b :" << b << endl;
}

// function definition to swap the values.
void swap(int& x, int& y) {

	int temp;
	temp = x; /* save the value at address x */
	x = y;    /* put y into x */
	y = temp; /* put x into y */

	return;
}



//Ex-3-Reference as Return Value
double vals[] = { 10.1, 12.6, 33.1, 24.1, 50.0 };

double& setValues(int i) {
	return vals[i];   // return a reference to the ith element
}

// main function to call above defined function.
void referenceAsReturnValue() {

	cout << "Value before change" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}

	setValues(1) = 20.23; // change 2nd element
	setValues(3) = 70.8;  // change 4th element

	cout << "Value after change" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}
}