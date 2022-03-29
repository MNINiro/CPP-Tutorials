#include <iostream>
using namespace std;

void nullValue() {
	cout << "Demo for null functions in c++";
	cout << "\n";
	// assiging null values heree ..
	int* myptr1 = NULL;
	int* myptr2 = NULL;
	int* myptr3 = NULL;
	//printing values here
	cout << "value of the first variabel is::: " << myptr1;
	cout << "\n";
	cout << "value of the second variabel is::: " << myptr2;
	cout << "\n";
	cout << "value of the third variabel is::: " << myptr3;	
}

void nullValue1() {
	int var1 = 20;
	int var2 = 30;
	int var3 = 40;
	cout << "Demo for null functions in c++";
	cout << "\n";
	// assigning null values here.
	int* myptr1 = NULL;
	int* myptr2 = NULL;
	int* myptr3 = NULL;
	//printing values here
	cout << "Value before null functions :::";
	cout << "\n";
	cout << "value of the first variable is before ::: " << myptr1;
	cout << "\n";
	cout << "value of the second variable is before :::" << myptr2;
	cout << "\n";
	cout << "value of the third variable is before :::" << myptr3;
	cout << "\n";

	if (!myptr1) {
		myptr1 = &var1;
		cout << "value after initialization is ::";
		cout << "\n";
		cout << "value of the first variable is after ::: " << myptr1;
		cout << "\n";
	}
	if (!myptr2) {
		myptr2 = &var2;
		cout << "value after initialization is ::";
		cout << "\n";
		cout << "value of the second variable is after ::: " << myptr2;
		cout << "\n";
	}
	if (!myptr3) {
		myptr3 = &var3;
		cout << "value after initialization is ::";
		cout << "\n";
		cout << "value of the third variable is after ::: " << myptr3;
		cout << "\n";
	}	
}

void nullValue2() {
	int x1[10]{};
	char x2[10]{};
	bool x3[10]{};
	float x4[10]{};
	double x5[10]{};
	

	for (int i = 0; i < 100; i++) {
		x1[i] = rand() % 11 - 5;
		x2[i] = 65 + i;
		x3[i] = rand() % 2 == 0 ? true : false;
		x4[i] = 2.0 * rand() / RAND_MAX;
		x5[i] = 1.0 * rand() / RAND_MAX;
	}

	cout <<"x1:" << x1 << endl;
	cout << "x2:" << x2 << endl;
	cout << "x3:" << x3 << endl;
	cout << "4:" << x4 << endl;
	cout << "x5:" << x5 << endl;

	system("Pause");
}