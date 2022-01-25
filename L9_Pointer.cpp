#include <iostream>

using namespace std;

//Ex-1
void pointers() {
	int  var = 20;   // actual variable declaration.
	int* ip;        // pointer variable 

	ip = &var;       // store address of var in pointer variable

	cout << "Value of var variable: ";
	cout << var << endl;

	// print the address stored in ip pointer variable
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	// access the value at the address available in pointer
	cout << "Value of *ip variable: ";
	cout << *ip << endl;
}


//Ex-2
void pointersNull() {
	int* ptr = NULL;
	cout << "The value of ptr is " << ptr;
}


//Ex-3-Incrementing a Pointer
const int MAX = 3;

void pointerInc() {
	int  var[MAX] = { 10, 100, 200 };
	int* ptr;

	// let us have array address in pointer.
	ptr = var;

	for (int i = 0; i < MAX; i++) {
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;

		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl <<endl;

		// point to the next location
		ptr++;
	}
}


//Ex-4-Decrement a pointer
void pointerDec() {
	int  var[MAX] = { 10, 100, 200 };
	int* ptr;

	// let us have address of the last element in pointer.
	ptr = &var[MAX - 1];

	for (int i = MAX; i > 0; i--) {
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;

		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;

		// point to the previous location
		ptr--;
	}
}


//Ex-5-Pointer Comparisons

void pointerCompare() {
	int  var[MAX] = { 10, 100, 200 };
	int* ptr;

	// let us have address of the first element in pointer.
	ptr = var;
	int i = 0;

	while (ptr <= &var[MAX - 1]) {
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;

		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;

		// point to the previous location
		ptr++;
		i++;
	}
}


//Ex-6-Array of pointers
/* int *ptr[MAX];
This declares ptr as an array of MAX integer pointers. Thus, each element in ptr, 
now holds a pointer to an int value. Following example makes use of three integers 
which will be stored in an array of pointers as follows − */

void arrOfPointer() {
	int  var[MAX] = { 10, 100, 200 };
	int* ptr[MAX];

	for (int i = 0; i < MAX; i++) {
		ptr[i] = &var[i]; // assign the address of integer.
	}

	for (int i = 0; i < MAX; i++) {
		cout << "Value of var[" << i << "] = ";
		cout << *ptr[i] << endl;
	}
}


//Ex-7-pointer to a pointer
void pointerToPointer() {
	int  var;
	int* ptr;
	int** pptr;

	var = 3000;

	// take the address of var
	ptr = &var;

	// take the address of ptr using address of operator &
	pptr = &ptr;

	// take the value using pptr
	cout << "Value of var :" << var << endl;
	cout << "Value available at *ptr :" << *ptr << endl;
	cout << "Value available at **pptr :" << **pptr << endl;
}

//Ex-8-Passing Pointers to Functions
void getSeconds(unsigned long* par);

void passingPointer() {
	unsigned long sec;
	getSeconds(&sec);

	// print the actual value
	cout << "Number of seconds :" << sec << endl;	
}

void getSeconds(unsigned long* par) {
	// get the current number of seconds
	*par = time(NULL);

	return;
}


//Ex-9-Return Pointer from Functions
// function to generate and retrun random numbers.
int* getRandom() {
	static int  r[10];

	// set the seed
	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; ++i) {
		r[i] = rand();
		cout << r[i] << endl;
	}
	return r;
}

// main function to call above defined function.
void returnPointer() {
	// a pointer to an int.
	int* p;

	p = getRandom();
	for (int i = 0; i < 10; i++) {
		cout << "*(p + " << i << ") : ";
		cout << *(p + i) << endl;
	}
	return;
}