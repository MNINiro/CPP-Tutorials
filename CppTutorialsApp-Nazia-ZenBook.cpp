#include <iostream>

using namespace std;

void maths();
void arithmetic_operators();
void relational_operator();
void logical_operator();
void bitwise_operator();
void assignment_operator();
void precedence_operator();

void if_statement();
void if_else_statement();
void nested_if_statemet();
void nested_if_condition();
void switch_statement();
void nested_switch_statement();

void forLoop();
void nestedForLoop();
void primeNumber();
void whileLoop();
void doWhileLoop();

void arrayType();
void array2D();

void stringOperator();
void stringManipulation();

void mainFunction();
void swapFunction();

void numbers();
void randomNumbers();

void pointers();
void pointersNull();
void pointerInc();
void pointerDec();
void pointerCompare();
void arrOfPointer();
void pointerToPointer();
void passingPointer();
void returnPointer();

void reference();
void refeAsParameters();
void referenceAsReturnValue();

//void dateTime();
//void dateTimeFormat();

void inputData();

void dataStructure();

void bubbleSort(int a[10]);
void LinearSearch(int arr[], int len, int item);

void recurFunction();

void randNmber();
void printASCII(char c);
void randDate();

void grade(int marks);

int main()
{
    std::cout << "Hello Students!\n";
    std::cout << "This is the C++ main app\n\n";
    
    /*
    cout << "======== Mathematical functions ===========" << endl;
    maths();
    
    
    cout << "======== Arithmetic Operators ===========" << endl;
    arithmetic_operators();
    
    
    cout << "======== Relational Operators ===========" << endl;
    relational_operator(); 
    

    cout << "======== Logical Operators ===========" << endl;
    logical_operator(); 
    
    
    cout << "======== Bitwise Operators ===========" << endl;
    bitwise_operator(); 
    
    
    cout << "======== Assignment Operators ===========" << endl;
    assignment_operator();
    
    
    cout << "======== Precedence Operator ===========" << endl;
    precedence_operator(); 
        
    cout << "======== IF statement ===========" << endl;
    if_statement(); 
    
    
    cout << "======== IF ELSE statement ===========" << endl;
    if_else_statement(); 
    
    cout << "======== Nested IF statement ===========" << endl;
    nested_if_statemet(); 
       
    cout << "======== Nested IF statement ===========" << endl;
    nested_if_condition();
  
   
    cout << "======== Switch statement ===========" << endl;
    switch_statement();
    

    cout << "======== Nested Switch statement ===========" << endl;
    nested_switch_statement(); 
     

    cout << "======== For Loop ===========" << endl;
    forLoop(); 
   
    
    cout << "======== Nested For Loop ===========" << endl;
    nestedForLoop(); 
     
    
    cout << "======== Prime Number ===========" << endl;
    primeNumber();
     
       
    cout << "======== While Loop ===========" << endl;
    whileLoop(); 
   
    cout << "======== Do While Loop ===========" << endl;
    doWhileLoop();
   

    cout << "======== Array ===========" << endl;
    arrayType(); 
   

    cout << "====== 2D Array ==========" << endl;
    array2D();
    
    cout << "======== String ===========" << endl;
    stringOperator(); 
    stringManipulation();
    
    cout << "======== Functions ===========" << endl;
    mainFunction();
    swapFunction(); 
    

    cout << "======== Numbers ===========" << endl;
    numbers();

    
    cout << "======== Random Numbers ===========" << endl;
    randomNumbers();

    cout << "======== Pointers ===========" << endl;
    pointers();
    
    cout << "======== Null Pointers ===========" << endl;
    pointersNull();

    cout << "======== Pointer increment ===========" << endl;
    pointerInc();

    cout << "======== Pointer Decrement ===========" << endl;
    pointerDec();

    cout << "======== Pointer Comparision ===========" << endl;
    pointerCompare();

    cout << "======== Array of Pointer ===========" << endl;
    arrOfPointer(); 

    cout << "======== Pointer to a pointer ===========" << endl;
    pointerToPointer(); 

    cout << "======== Passing Pointer to a function ===========" << endl;
    passingPointer(); 

    cout << "======== Return Pointer from a function ===========" << endl;
    returnPointer(); 

    cout << "======== Reference ===========" << endl;
    reference(); 

    cout << "======== Reference ===========" << endl;
    refeAsParameters(); 
    
    cout << "======== Reference as Return Value ===========" << endl;
    referenceAsReturnValue(); 

    //cout << "======== Date and Time ===========" << endl;
    //dateTime();
    //dateTimeFormat(); 
    

    //cout << "======== Input and output ===========" << endl;
    inputData();

    //cout << "======== Date Structure ===========" << endl;
    dataStructure();  
    

    //cout << "======== Bubble sort ===========" << endl;
    int a[10] = { 10,2,0,14,43,25,18,1,5,45 };
    bubbleSort(a);

    
    //cout << "======== Linear search ===========" << endl;
    int arr[] = { 10, 5, 15, 21, -3, 7 };
    int len = sizeof(arr) / sizeof(arr[0]); // calculating length of array
    int item;
    
    cout << "Enter number to be searched:", cin >> item;                              // item to be searched
    LinearSearch(arr, len, item); 
    

    //cout << "======== Recursive function ===========" << endl;
    recurFunction();

    cout << "======== Random ===========" << endl;
    randNmber();
        
    cout << "======== Random ===========" << endl;
    printASCII('A');

    randDate();*/

    int marks[5]{};
    int i, m;

    for (i = 0; i < 5; i++) {
        cout << "Enter Marks: ", cin >> m;
        marks[i] = m;
    }

    grade(marks[5]);
    
}   



