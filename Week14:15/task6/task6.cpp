#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// function to find the largest consecutive sequence
int consecutive(vector<int>& list){
    unordered_set<int> a;   // init a hash set to store all nums

    for (int x : list){     // loop through the vector
        a.insert(x);        // insert each number into the set
    }

    int longest = 0;        // init the longest sequence to 0

    for (int x : list){     // check each number in the list
        if (a.find(x-1) == a.end()){    // only start counting if x-1 is not in the set
            int curr = x;   // current number in the sequence
            int length = 1; // length of the current sequence

            while (a.find(curr + 1) != a.end()){    // while the next number exists
                curr++;     // move to the next consecutive number
                length++;   // increase the sequence length
            }
            longest = max(longest, length); // update the longest if this sequence is bigger
        }
    }
    return longest; // return the longest sequence length
}

int main(){
    vector<int> list = {10, 5, 12, 3, 55, 30, 4, 11, 2};    // first test list
    cout << consecutive(list) << endl;  // should print t4

    vector<int> list2 = {19, 13, 15, 12, 18, 14, 17, 11};   // second test list
    cout << consecutive(list2) << endl; // should print 5
}
