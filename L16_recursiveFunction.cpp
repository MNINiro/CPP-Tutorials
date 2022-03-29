#include<iostream>
using namespace std;

void recurFunction(){

	int factorial_num(int);
	int facto, value;

	cout << " Please enter any number to find factorial of it : ";
	cin >> value;
	
	facto = factorial_num(value);
	cout << " The Factorial of given number is: " << facto << endl;
}

	int factorial_num(int n)
	{
		if (n < 0)
			return (-1);
		if (n == 0)
			return (1);
		else{
			return (n * factorial_num(n - 1));
		}
	} 