#include <iostream>
#include <iomanip>      // std::setprecision

using namespace std;

void maths() {
	int a = 5;
	cout << "a = " << a << '\n';

	float b = 10.123456;	//max 6 decimal place
	cout << "b = " << b << '\n';

	//to add more values in decimal places
	float f = 10.123456;	
	std::cout << "f = " << std::setprecision(7) << f << '\n';
	

	char c = 'H';
	cout << "c = " << c << '\n';

	double d = 213123.45456546345435355465;
	std::cout << "d = " << std::setprecision(25) << d << endl;

	//Input data
	int x;
	cout << "Enter any number: ", cin >> x;
	cout << "Output: " << x;
}