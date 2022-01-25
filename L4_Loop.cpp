#include <iostream>

using namespace std;

void forLoop() {
	// for loop execution
	for (int a = 1; a < 10; a++) {
		cout << "value of a: " << a << endl;
	}
}

void nestedForLoop() {
	//Ex-1 for loop execution
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			cout << "value of i & j: " << i << ' ' << j << endl;
			cout << "Result: " << i * j << endl;
		}
	}

	//Ex-2 Nested for loop to generate prime number
	int i, j;

	for (i = 2; i < 100; i++) {
		for (j = 2; j <= (i / j); j++)
			if (!(i % j)) break; // if factor found, not prime
		if (j > (i / j)) cout << i << " is prime\n";
	}
}

void whileLoop() {
	// Local variable declaration:
	int a = 10;

	// while loop execution
	while (a < 20) {
		cout << "value of a: " << a << endl;
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