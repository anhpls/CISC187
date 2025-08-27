1.

```c++
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> list = {};
    for (int i = 0; i < 100; i++){
        list.push_back(i);
    }

    for (int i = 0; i < list.size(); i++){
        cout << list[i] << endl;
    }
}
```



2. The size of each element 
3. For a 100 element array:
   **Reading**: 100
   **Searching for a value not contained within the array:** 100 comparisons
   **Insertion at the beginning of the array:** 101 because shifts all elements right for the new element
   **Insertion at the end of the array:** 1 
   **Deletion at the beginning of the array:** 
   **Deletion at the end of the array:** 1