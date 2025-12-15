#include <iostream>
#include <vector>
using namespace std;

vector<double> sortTemp(const vector<double>& temps) {

    const int RANGE = 21;                     // total possible temps from 97.0 to 99.0
    vector<vector<double>> buckets(RANGE);    // 21 buckets to hold each temp group

    // drop temps directly into their matching bucket
    for (double t : temps) {
        int index = int((t - 97.0) * 10);     // temp like 97.3 becomes index 3
        buckets[index].push_back(t);          // throw the value into that bucket
    }

    vector<double> sortedList;                // final sorted temps

    for (int i = 0; i < RANGE; i++) {         // go bucket by bucket in order
        for (double t : buckets[i]) {         // grab everything inside the bucket
            sortedList.push_back(t);          // push it into the sorted list
        }
    }

    return sortedList;                            // return the sorted temps
}

int main() {
    vector<double> data = {98.6, 98.0, 97.1, 99.0, 98.9, 97.8, 98.5, 98.2, 98.0, 97.1}; // example data
    vector<double> sorted = sortTemp(data);   // created the sorted list

    for (double x : sorted) {                 // print sorted temps
        cout << x << " ";                     // print each temp with a space
    }
}