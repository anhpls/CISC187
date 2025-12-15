#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

// structure for each person's info
struct Person {
    string first_name;  // first name
    string last_name;   // last name
    string team;    // what team they're on
};

// function to find players who appear in both lists
vector<string> playsBoth(const vector<Person>& a, const vector<Person>& b){
    unordered_set<string> fullNames;   // set to store all full names from list a 

    for (const auto& x : a){    // for each person in first list
        fullNames.insert(x.first_name + " " + x.last_name); // put "first + last" into set
    }

    vector<string> result;  // for names that are in both lists

    for (const auto& x: b){ // for each person in second list
        string fullNames2 = x.first_name + " " + x.last_name;   // "first + last"
        if (fullNames.count(fullNames2)){   // check if this name existed in the first list
            result.push_back(fullNames2);   // if yes then add to result list
        }
    }

    return result;  // return the list for names that are in both lists
}


int main(){
    // list of basketball players using the Person struct 
    vector<Person> basketball = {
        {"Jill", "Huang", "Gators"},
        {"Janko", "Barton", "Sharks"},
        {"Wanda", "Vakulskas", "Sharks"},
        {"Jill", "Moloney", "Gators"},
        {"Luuk", "Watkins", "Gators"}
    };

    // list of football players
    vector<Person> football = {
        {"Hanzla", "Radosti", "32ers"},
        {"Tina", "Watkins", "Barleycorns"},
        {"Alex", "Patel", "32ers"},
        {"Jill", "Huang", "Barleycorns"},
        {"Wanda", "Vakulskas", "Barleycorns"}
    };

    vector<string> both = playsBoth(basketball, football);  // list to store players that play in both sports

    // print each name in both list to show which players
    for (const string& x : both){
        cout << x << endl;
    }
    
}