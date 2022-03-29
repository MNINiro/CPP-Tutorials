/*If random numbers are generated with rand() without 
first calling srand(), your program will create the same 
sequence of numbers each time it runs.*/

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void randNmber()
{
	int  number;
	int  i;

	srand(time(0));

	for (i = 1; i <= 10; i++){
		number = rand() % 100;

		char ch = char(number);
		cout <<"ASCII value of " << number << " is " << ch << endl;
	}
}

void randGenerator() {
    srand((unsigned)time(0));
    printf("Your dice has been rolled! You got: \n ");
    
    int result = 1 + (rand() % 6);
    printf("%d \n", result);
    
    switch (result) {
    case 1:
        printf("Your prize is our original T-shirt!");
        break;
    case 2:
        printf("Your prize is our original cap!");
        break;
    case 3:
        printf("Your prize is our original necklace!");
        break;
    case 4:
        printf("Your prize is our original keychain!");
        break;
    case 5:
        printf("Your prize is our original cup set!");
        break;
    case 6:
        printf("Your prize is a set of original keychains!");
        break;
    default:
        printf("Error");
        break;
    }    
}

/* generate random numbers from a unique range by using the 
% modulus operator. This operator lets you set the maximum 
value that can be generated. The following example shows how 
you can return a random number between 1 and 35:*/

void randRange() {
    srand((unsigned)time(0));
    int randomNumber;

    for (int index = 0; index < 10; index++) {
        randomNumber = (rand() % 35) + 1;
        cout << randomNumber << endl;
    }
}

void RandOddEven() {
    int arr[10]{};
    int  i, number;

    srand(time(0));

    for (i = 1; i <= 10; i++) {
        arr[i] = rand();
        number = rand() % 100;


        if (number % 2 == 0){
            cout << number << " is an even number" << endl;
        }
        else
        {
            cout << number << " is an odd number" << endl;
        }        
    }
}