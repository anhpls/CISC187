#include <iostream>
using namespace std;


int biggestProduct(const vector<int>& nums) {

    int maxA = INT_MIN, maxB = INT_MIN;   // 2 largest numbers
    int minA = INT_MAX, minB = INT_MAX;   // 2 smallest numbers

    // iterate through the list 
    for (int x : nums) {
        //  update largest numbers
        if (x > maxA) {     // if x is bigger than the current biggest
            maxB = maxA;    // move old biggest to second biggest
            maxA = x;       // set new biggest
        } 
        else if (x > maxB) {    // otherwise it's the second biggest
            maxB = x;           // set to second biggest
        }

        // update smallest numbers
        if (x < minA) {     // if x is smaller than the current smallest
            minB = minA;    // move old smallest to second smallest
            minA = x;       // set new smallest
        }
        else if (x < minB) {    // otherwise it's the second smallest
            minB = x;       // set to second smallest
        }
    }

    int prodLargest = maxA * maxB;      // multiply two biggest
    int prodSmallest = minA * minB;     // multiply two smallest

    return max(prodLargest, prodSmallest);  // return whichever product is bigger
}

int main(){
    vector<int> list = {5, -10, -6, 9, 4};  // test list
    cout << biggestProduct(list) << endl;   // output
}