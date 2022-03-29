#include<iostream>
using namespace std;

void bubbleSort(int a[10])
{
    int i, j, temp, pass = 0;
    
    //unsorted array
    cout << "Input list ...\n";

    for (i = 0; i < 10; i++) {
        cout << a[i] << "\t";
    }
    
    cout << endl;
    
    //sorting array
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        pass++;
    }
    
    cout << "Sorted Element List ...\n";
    
    for (i = 0; i < 10; i++) {
        cout << a[i] << "\t";
    }
    
    cout << "\nNumber of passes taken to sort the list:" << pass << endl;    
}