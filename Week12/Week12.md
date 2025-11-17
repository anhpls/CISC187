# Week 12 — Recursion 

Anh Huynh

1. The following function prints every other number from a low number to a high number. For example, if low is 0 and high is 10, it would print:

```
0
2
4
6
8
10
```

Identify the base case in the function:

```
def print_every_other(low, high) 
    return if low > high
    puts low
    print_every_other(low + 2, high)
end
```

Base case: return if low > high; this stops the recursion once low passes high



2. My kid was playing with my computer and changed my factorial function so that it computes factorial based on (n - 2) instead of (n - 1). Predict what will happen when we run factorial(10) using this function:

```
def factorial(n)
    return 1 if n == 1
    return n * factorial(n - 2)
end
```

factorial(10)
= 10 * factorial(8)
= 10 * 8 * factorial(6)
= 10 * 8 * 6 * factorial(4)
= 10 * 8 * 6 * 4 * factorial(2)
= 10 * 8 * 6 * 4 * 2 * factorial(0)

Since the kid changed (n-1) to (n-2), the function never reaches the base case n == 1. Instead, it eventually reaches n == 0 but there is no base case for 0. Because 0 is not handled, the function keeps calling itself with negative numbers, causing infinite recursion and eventually stack overflow.



3. Following is a function in which we pass in two numbers called low and high. The function returns the sum of all the numbers from low to high. For example, if low is 1, and high is 10, the function will return the sum of all numbers from 1 to 10, which is 55. However, our code is missing the base case, and will run indefinitely! Fix the code by adding the correct base case:

```
def sum(low, high)
    return high + sum(low, high - 1)
end
```

fix: 

```return 0 if high < low
def sum(low, high)
	return 0 if high < low
    return high + sum(low, high - 1)
end
```



4. Here is an array containing both numbers as well as other arrays, which in turn contain numbers and arrays:

```
array=[ 1, 
        2, 
        3,
        [4, 5, 6],
        7,
        [8,
          [9, 10, 11,
            [12, 13, 14]
          ] 
        ],
        [15, 16, 17, 18, 19,
          [20, 21, 22,
            [23, 24, 25,
              [26, 27, 29]
            ], 30, 31 
          ], 32
        ], 33 
      ]
```

Write a recursive function that prints all the numbers (and just numbers).



```c++
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
```

Output:
```
anhpls@Anhs-MacBook-Pro code % g++ -std=c++17 test.cpp -o main   
anhpls@Anhs-MacBook-Pro code % ./main
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
29
30
31
32
33
```

Video Link: 