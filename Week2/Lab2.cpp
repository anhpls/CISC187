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


