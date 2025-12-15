#include <iostream>

using namespace std;


int returnMissingNum(const vector<int>& listOfNums){
    int n = listOfNums.size();  // size of array 0-n
    int totalSum = n * (n + 1) / 2; // sum of all numbers from 0 to n

    int testSum = 0;
    for (int x : listOfNums){
        testSum += x;   // sum all numbers inside the array
    }

    return totalSum - testSum; // this gives the difference between the two arrays (missing number)
}



int main(){
    vector<int> list = {2, 3, 0, 6, 1, 5};  // create populated array for testing
    cout << "Missing number is: " << returnMissingNum(list) << endl;    // output

    vector<int> list2 ={8, 2, 3, 9, 4, 7, 5, 0, 6}; // second example
    cout << "Missing number is: " << returnMissingNum(list2) << endl; // output
}