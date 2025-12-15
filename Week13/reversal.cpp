#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr){
    int left = 0;   // left ptr to first element
    int right = arr.size() - 1; // right ptr to last element

    while (left < right){   // while left is less than right
        int temp = arr[left];   // set first element to temp var
        arr[left] = arr[right]; // swap left and right elements
        arr[right] = temp;  // set right to temp var value

        // move window inward from both sides
        left++; // increment left side
        right--;    // decrement right side 
    }
}

void printArr(vector<int>& arr){
    for (int x : arr){  // print every value in arr
        cout << x << " ";   // print format
    }
    cout << endl;   // newline
}




public static int multiplyLessIterative(int n) {
    int product = 1;               // start at 1
    for (int i = 1; i <= n; i++) { // repeat i = 1 → n
        product *= i;              // multiply as we go
    }
    return product;
}



int main(){
    vector<int> list = {1, 2, 3, 4, 5, 6, 7, 8};    // create an arr

    printArr(list); // print pre-reversal

    reverseArray(list); // reverse arr

    printArr(list); // print post-reversal
}





