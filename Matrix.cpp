#include <iostream>

using namespace std;

void matrix() {
	int a[4][4]{}, b[4][4]{}, c[4][4]{};
	int i, j, k, l = 0;

	cout << "Enter the value of the matrix a:\n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> a[i][j];
		}
	}
	cout << endl;
	cout << "Enter the value of the matrix b:\n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cin >> b[i][j];
		}
	}

	cout << "The multiplied value is:\n";
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = 0;
			for (k = 0; k < 2; k++) {
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
				
			}
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << c[i][j] << "  ";
		}
		cout << "\n";
	}
}