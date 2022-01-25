#include <iostream>

using namespace std;

void arithmetic_operators() {
	int a = 20, b = 10, c;

	c = a + b;
	cout << "Addition: " << c << endl;

	c = a - b;
	cout << "Subtraction: " << c << endl;

	c = a * b;
	cout << "Multiplication: " << c << endl;

	c = a / b;
	cout << "Division: " << c << endl;

	c = a % b;
	cout << "Remainder: " << c << endl;
}

void relational_operator() {
	int x = 5, y = 2, z;

	z = x > y;
	cout << " z = " << z << endl;

	z = x < y;
	cout << " z = " << z << endl;

	z = x == y;
	cout << " z = " << z << endl;

	z = x != y;
	cout << " z = " << z << endl;

	z = x <= y;
	cout << " z = " << z << endl;

	z = x >= y;
	cout << " z = " << z << endl;
}

void logical_operator() {
	int i = 5, j = 2, k = 5, l = 3, result;
	
	//AND operator
	cout << "AND Operator" << endl << endl;

	result = (i<j) && (k>l);
	cout << "AND Result is " << result << endl;

	result = (i > j) && (k < l);
	cout << "AND Result is " << result << endl;

	result = (i > j) && (k > l);
	cout << "AND Result is " << result << endl;

	result = !(i > j);
	cout << "AND Result is " << result << endl <<endl;

	//OR operator
	cout << "OR Operator" << endl << endl;

	result = (i < j) || (k < l);
	cout << "OR Result is " << result << endl;

	result = (i > j) || (k < l);
	cout << "OR Result is " << result << endl;

	result = (i > j) || (k > l);
	cout << "OR Result is " << result << endl;

	result = (i == k) || (j != l);
	cout << "OR Result is " << result << endl;
}

//bitwise operator
void bitwise_operator() {

	unsigned int a = 60;	  // 60 = 0011 1100  
	unsigned int b = 13;	  // 13 = 0000 1101
	int c = 0;

	//bitwise AND
	c = a & b;             // 12 = 0000 1100
	cout << "Line 1 - Value of c is : " << c << endl;

	//bitwise OR
	c = a | b;             // 61 = 0011 1101
	cout << "Line 2 - Value of c is: " << c << endl;


	//bitwise XOR
	c = a ^ b;             // 49 = 0011 0001
	cout << "Line 3 - Value of c is: " << c << endl;

	//bitwise one's complement
	c = ~a;                // -61 = 1100 0011
	cout << "Line 4 - Value of c is: " << c << endl;

	//shift the bits to left
	c = a << 2;            // 240 = 1111 0000
	cout << "Line 5 - Value of c is: " << c << endl;

	//shift the bits to right
	c = a >> 2;            // 15 = 0000 1111
	cout << "Line 6 - Value of c is: " << c << endl;
}

//Asignment operator
void assignment_operator() {
	int a = 21;
	int c;

	c = a;
	cout << "Line 1 - =  Operator, Value of c = : " << c << endl;

	c += a;
	cout << "Line 2 - += Operator, Value of c = : " << c << endl;

	c -= a;
	cout << "Line 3 - -= Operator, Value of c = : " << c << endl;

	c *= a;
	cout << "Line 4 - *= Operator, Value of c = : " << c << endl;

	c /= a;
	cout << "Line 5 - /= Operator, Value of c = : " << c << endl;

	c = 200;
	c %= a;
	cout << "Line 6 - %= Operator, Value of c = : " << c << endl;

	c <<= 2;
	cout << "Line 7 - <<= Operator, Value of c = : " << c << endl;

	c >>= 2;
	cout << "Line 8 - >>= Operator, Value of c = : " << c << endl;

	c &= 2;
	cout << "Line 9 - &= Operator, Value of c = : " << c << endl;

	c ^= 2;
	cout << "Line 10 - ^= Operator, Value of c = : " << c << endl;

	c |= 2;
	cout << "Line 11 - |= Operator, Value of c = : " << c << endl;
}

//Operator precedence
void precedence_operator() {
	int a = 20;
	int b = 10;
	int c = 15;
	int d = 5;
	int e;

	e = (a + b) * c / d;      // ( 30 * 15 ) / 5
	cout << "Value of (a + b) * c / d is :" << e << endl;

	e = ((a + b) * c) / d;    // (30 * 15 ) / 5
	cout << "Value of ((a + b) * c) / d is  :" << e << endl;

	e = (a + b) * (c / d);   // (30) * (15/5)
	cout << "Value of (a + b) * (c / d) is  :" << e << endl;

	e = a + (b * c) / d;     //  20 + (150/5)
	cout << "Value of a + (b * c) / d is  :" << e << endl;
}