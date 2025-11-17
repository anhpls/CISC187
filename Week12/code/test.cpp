#include <iostream>
#include <vector>
using namespace std;

struct Node {
    bool isNumber;  // true if this node stores a number
    int value;      // only used if isNumber == true
    vector<Node> list;  // only used if isNumber == false
};

// recursive function that prints every number from the passed in array
void printNums(const vector<Node>& arr) {
    // every node in array
    for (const Node& element : arr) {
        // if node is a number
        if (element.isNumber) {
            // print it's value
            cout << element.value << endl;
        } else {
            // if node is a nested list
            printNums(element.list);  // recurse into nested list
        }
    }
}

int main() {
    vector<Node> array = {

        { true, 1, {} },
        { true, 2, {} },
        { true, 3, {} },

        { false, 0, { {true,4,{}}, {true,5,{}}, {true,6,{}} } },

        { true, 7, {} },

        { false, 0, {
            { true, 8, {} },
            { false, 0, {
                { true, 9, {} },
                { true, 10, {} },
                { true, 11, {} },
                { false, 0, {
                    { true, 12, {} },
                    { true, 13, {} },
                    { true, 14, {} }
                }}
            }}
        }},

        { false, 0, {
            { true, 15, {} },
            { true, 16, {} },
            { true, 17, {} },
            { true, 18, {} },
            { true, 19, {} },
            { false, 0, {
                { true, 20, {} },
                { true, 21, {} },
                { true, 22, {} },
                { false, 0, {
                    { true, 23, {} },
                    { true, 24, {} },
                    { true, 25, {} },
                    { false, 0, {
                        { true, 26, {} },
                        { true, 27, {} },
                        { true, 29, {} }
                    }}
                }},
                { true, 30, {} },
                { true, 31, {} }
            }},
            { true, 32, {} }
        }},

        { true, 33, {} }
    };

    printNums(array);
  
}