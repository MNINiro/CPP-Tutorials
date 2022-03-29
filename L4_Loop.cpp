#include <iostream>

using namespace std;

void forLoop() {
	// for loop execution

	for (int a = 1; a <= 10; a+=2) {
		cout << "value of a: " << a << endl;
	}
}

void nestedForLoop() {
	//Ex-1 for loop execution
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 5; j++) {
			cout << "value of i & j: " << i << 'x' << j << '=' << i * j << endl;
			//cout << "Result: " << i * j << endl;
		}
	}
}

void primeNumber(){
	//Ex-2 Nested for loop to generate prime number
	int i, j;

	for (i = 2; i < 100; i++) {
		for (j = 2; j <= (i / j); j++)
			if (!(i % j)) break; // if factor found, not prime
		if (j > (i / j)) cout << i << " is prime\n";
	}
}

void whileLoop() {
	int a = 10;								// Local variable declaration:

	while (a < 20) {						// while loop execution
		cout << "value of a: " << a << endl;
		//if (a == 15) break;
		a++;
	}
}


void doWhileLoop() {
	int a = 1;

	// do loop execution
	do {
		cout << "value of a: " << a << endl;
		a = a + 1;
	} while (a <= 10);
}