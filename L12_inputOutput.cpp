#include <iostream>

using namespace std;

void inputData() {
	char str[] = "Hello C++";

	cout << "Value of str is : " << str << endl;

	//========== input & output =======================
	char name[50];

	cout << "Please enter your name: ";
	cin >> name;
	cout << "Your name is: " << name << endl;

	//cerr is also used in conjunction with the stream insertion operator 
	char str1[] = "Unable to read....";
	
	cerr << "Error message : " << str1 << endl;

	//clog is also used in conjunction with the stream insertion operator
	clog << "Error message : " << str << endl;




}