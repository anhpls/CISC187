#include <iostream>
#include <vector>
using namespace std;

int main(){
     int numbers[100]; // array

    // 0-99 into that list 
    for (int i = 0; i < 100; i++){
        numbers[i] = i;
    }

    cout << "Size of each element in the array: " 
         << sizeof(numbers[0]) << " bytes" << endl;

    // address of array
    cout << numbers << endl;

    // address of element
    int* p = &numbers[0];
    cout << p << endl;

    // print elements
    for (int i = 0; i < 100; i++){
        cout << numbers[i] << endl;
    }
}