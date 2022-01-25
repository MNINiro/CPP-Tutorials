#include <iostream>

using namespace std;

void stringOperator() {

	char greeting[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	cout << "Greeting message: ";
	cout << greeting << endl;
}

void stringManipulation() {
	/*1. strcpy(s1, s2);	Copies string s2 into string s1.
	2. strcat(s1, s2);	Concatenates string s2 onto the end of string s1.
	3. strlen(s1);		Returns the length of string s1.
	4. strcmp(s1, s2);	Returns 0 if s1and s2 are the same; less than 0 if s1 < s2; greater than 0 if s1 > s2.
	5. strchr(s1, ch);	Returns a pointer to the first occurrence of character ch in string s1.
	6. strstr(s1, s2);	Returns a pointer to the first occurrence of string s2 in string s1.*/

	char str1[10] = "Hello";
	char str2[10] = "World";
	char str3[10];
	int  len;

	// copy str1 into str3
	//strcpy(str3, str1);
	//cout << "strcpy( str3, str1) : " << str3 << endl;

	//Ex-1: concatenates str1 and str2
	//cout << "Concatenated String:" << endl;
	//strcat(str1, str2);
	//cout << str1;

	//Ex-2: Concate
	string str4 = "", str5 = "";

	cout << "Enter String 1:";
	cin >> str4;
	cout << "Enter String 2:";
	cin >> str5;

	string res = str4 + str5;
	cout << "Concatenated String: ";
	cout << res << endl;


	// total lenghth of str1 after concatenation
	len = strlen(str1);
	cout << "strlen(str1) : " << len << endl;
}