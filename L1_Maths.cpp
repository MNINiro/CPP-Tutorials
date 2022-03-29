#include <iostream>
#include <iomanip>      // std::setprecision

using namespace std;

void maths() {
	int a = 15;
	cout << "a = " << a << '\n';
	
	
	float b = 10.123456;	//max 6 decimal place by default
	cout << "b = " << b << '\n';

	//use setprecision() to add more values in decimal places
	float f = 10.123456;	
	std::cout << "f = " << std::setprecision(8) << f << '\n';
	

	char ch = 'H';
	cout << "charecter = " << ch << '\n';

	double d = 213123.45456546345435355465;
	std::cout << "d = " << std::setprecision(25) << d << endl;

	//Input data
	int x,y,z,sum;
	cout << "Enter first number: ", cin >> x;
	cout << "Enter second number: ", cin >> y;
	//cout << "Output: " << x;

	sum = x + y;
	cout << "Sum is: " << sum <<endl;

	z = 3;
	cout << "Division :" << sum / z;
}