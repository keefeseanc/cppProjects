#include <iostream>
using namespace std;

void swapInts(int& x, int& y);

int main(){
    
    int num1;
    int num2;
    
    cout<<"Input first number: ";
    cin >> num1;
    cout<<"\nInput second number: ";
    cin >> num2;
    cout << "First: " << num1 << "\tSecond: " << num2;
    
    swapInts(num1, num2);
    
    cout << "\nSwap Numbers\n";
    cout << "First: " << num1 << "\tSecond: " << num2;
    
    
    return 0;
}

void swapInts(int &x, int  &y){
    int temp = x;
    x = y;
    y = temp;
}