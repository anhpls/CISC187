#include <iostream>
using namespace std;

int highestReturn(const vector<int>& stocks){
    if (stocks.empty()) return 0;   // edge: handle an empty list

    int minPrice = stocks[0];   // assume first day is smallest price
    int highestProfit = 0;  // initalize to 0 profit

    for(int stockPrice : stocks){   // for each stock in the stocks list
        int currProfit = stockPrice - minPrice; // for each day, take difference between that day's stock price and minimum stock price

        if (currProfit > highestProfit){    // if this profit is more profitable
            highestProfit = currProfit; // set as new highest profit
        }

        if (stockPrice < minPrice){     // if the stockPrice is lower than the smallest stock price
            minPrice = stockPrice;  // set as new smallest stock price
        }
    }

    return highestProfit;   // return highest profit

}


int main(){
    vector<int> stocks = {10, 7, 5, 8, 11, 2, 6};   // test stocks list
    cout << "Highest Profit: " << highestReturn(stocks) << endl;    // output
}