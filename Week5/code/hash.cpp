#include <iostream>
#include <functional> 
using namespace std;

int main(){
    string name = "Anh Huynh";
    hash<string> nameHash;

    cout << "Hashed Name: " << nameHash(name) << endl;

    return 0;
}