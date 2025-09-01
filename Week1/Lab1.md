1.

```c++
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
```

2. The size of each element is 4 bytes.
3. For an N = 100 element array:

   - **Reading**: 1 step
   - **Searching for a value not contained within the array:** N steps; 100 steps
   - **Insertion at the beginning of the array:** 101 because shifts all elements right for the new element; N+1
   - **Insertion at the end of the array:** 1 step
   - **Deletion at the beginning of the array:** N steps (100 steps); 1 step to delete and 99 steps to shift elements in the array
   - **Deletion at the end of the array:** 1 step

4. O(N) since it'd have to loop through all elements in the array; a variable can be set to increase count whenever "apples" is seen during the looping through of all elements.
5. By printing the name of the array or by setting a pointer to first element of the array using &numbers[0].

**Video:**
https://youtu.be/etg9OzgmWHw
