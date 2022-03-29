#include<iostream>
using namespace std;

void LinearSearch(int arr[], int len, int item) {

    for (int i = 0; i < len; i++) {
        if (arr[i] == item) {
            cout << item << " Found at index : " << i;
            return;
        }
    }
    cout << "Not found";
}
