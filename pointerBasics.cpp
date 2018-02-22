#include <iostream>
using namespace std;

int main(){
    
    //decalre variables 
    int myInt = 15;
    int* myPointer = &myInt;
    
    //print to console
    cout << "Memory Location of myInt: " << &myInt << "\n";
    cout << "Value of myPointer: " << *myPointer << "\n";
    cout << "Value of myInt: " << myInt << "\n";
    cout << "Value pointed to by myPointer: " << *myPointer << "\n";
    
    //change values and print to console
    myInt = 10;
    cout << "Memory location of myInt: " << &myInt <<"\n";
    cout << "Value of myPointer: " << *myPointer << "\n";
    cout << "Value of myInt: " << myInt << "\n";
    cout << "Value pointed to by myPointer: " << *myPointer << "\n";
    
    return 0;
}