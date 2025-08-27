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