#include <iostream>
using namespace std;

int arr [10];
int temp;

int main()
{
    cout << "Input 10 numbers:\n";
    for (int i = 0; i < 10;i++){
        cin >> temp;
        arr[i] = temp;
    }
    
    cout << "Numbers in reverse order are: ";
    for (int j = 10; j > 0; j--){
        cout << arr[j];
        cout << "\n";
    }
    
    cout << "Sorted numbers are: ";
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10 - i - 1 ; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i<10; i++){
        cout << arr[i];
        cout << "\n";
    }
    return 0;
}