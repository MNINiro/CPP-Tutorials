#include <iostream>
using namespace std;

void numbers() {
	// number definition:
	short  s;
	int    i;
	long   l;
	float  f;
	double d;

	// number assignments;
	s = 10;
	i = 1000;
	l = 1000000;
	f = 230.47;
	d = 30949.374;

	// number printing;
	cout << "short  s :" << s << endl;
	cout << "int    i :" << i << endl;
	cout << "long   l :" << l << endl;
	cout << "float  f :" << f << endl;
	cout << "double d :" << d << endl;

	// mathematical operations;
	cout << "sin(d) :" << sin(d) << endl;
	cout << "abs(i)  :" << abs(i) << endl;
	cout << "floor(d) :" << floor(d) << endl;
	cout << "sqrt(f) :" << sqrt(f) << endl;
	cout << "pow( d, 2) :" << pow(d, 2) << endl;
}


//Random numbers
void randomNumbers() {
	int i, j;

	// set the seed
	srand((unsigned)time(NULL));

	/* generate 10  random numbers. */
	for (i = 0; i < 10; i++) {
		// generate actual random number
		j = rand();
		cout << " Random Number : " << j << endl;
	}
}
