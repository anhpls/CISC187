## Lab 2 - Linear and Binary Search

Anh Huynh

1. **How many steps would it take to perform a linear search for the number 8 in the ordered array, [2, 4, 6, 8, 10, 12, 13]? -** **1 pt**

4 steps since it has to iterate through the elements in the array until the element matches the target number  8.



2. **How many steps would binary search take for the previous example? - 1 pt**

Step 1: find the middle index which is 8 —> therefore 1 step.



3. **What is the maximum number of steps it would take to perform a binary search on an array of size 100,000? - 1 pt**

A binary search time complexity is O(log(n)) so I assume it's 
$$
O(log_2(100,000))
$$
which would be ~16.61 —> 17 steps. 



4. **Write a C++ code that implements the linear and binary search algorithms. The algorithm should be able to calculate the number of steps against the given search. - 7 pts**

```c++
#include <iostream>
#include <vector> // for vector
using namespace std;

int linearSearch(const vector<int>& arr, int target) {
    int numSteps = 0; // initiate to 0 steps
    
    for (int i = 0; i < arr.size(); i++) {
        numSteps++; // increment every iteration
        if (arr[i] == target) {
            cout << "Number of steps taken: " << numSteps << endl; // return number of steps once target is found
            return i; // return index
        }
    }
    cout << "Number of steps taken: " << numSteps << endl; // return number of steps if not found
    return -1;  // return -1 if not found
}

int binarySearch(const vector<int>& arr, int target) {
    int left = 0; // left bound
    int right = arr.size() - 1; // right boundary
    int numSteps = 0;

    // assume arr is sorted
    while (left <= right) {
        numSteps++; // increment steps every iteration
        int mid = left + (right - left) / 2; // to avoid potential overflow
        if (arr[mid] == target) {
            cout << "Number of steps taken: " << numSteps << endl;
            return mid; // target found in middle of array
        }
        else if (arr[mid] < target) {
            left = mid + 1; // search in the right half
        }
        else {
            right = mid - 1; // search in the left half
        }
    }
    cout << "Number of steps taken: " << numSteps << endl; // return number of steps if not found
    return -1; // target not found so return -1
}

int main(){
    int target = 8; // target value
    vector<int> numbers = {2, 4, 6, 8, 10, 12, 13}; // sorted array of numbers

    int linearResult = linearSearch(numbers, target);
    int binaryResult = binarySearch(numbers, target);
    cout << "(Linear Search) Index: " << linearResult << endl;
    cout << "(Binary Search) Index: " << binaryResult << endl;
}
```



**Video:**
https://youtu.be/_KaBUsv71dk