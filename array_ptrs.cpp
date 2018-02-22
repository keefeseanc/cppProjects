#include <iostream>
using namespace std;


int main(){

    int my_ints [4];
    int temp;
    int * temp_ptr;
    
    cout << "Input 4 numbers: \n";
    for (int i = 0; i<4; i++){
        cin >> temp;
        my_ints[i] = temp;
    }
    
    int * my_ptrs[4];
    
    for (int i=0;i<4;i++){
        my_ptrs[i] = &my_ints[i];
    }
    
    //sort pointers
    for (int i =0; i<4; i++){
        for (int j = 0; j < 4 - i -1; j++){
            if (*my_ptrs[j] > *my_ptrs[j + 1]){
                temp_ptr = my_ptrs[j];
                my_ptrs[j] = my_ptrs[j+1];
                my_ptrs[j+1] = temp_ptr;
            }
        }
        
    }
    cout << "Sorted Vals: \n";
    
    //print pointer vals
    for (int i = 0; i < 4; i++){
        cout << *my_ptrs[i];
        cout << "\n";
    }
    
    
    return 0;
}