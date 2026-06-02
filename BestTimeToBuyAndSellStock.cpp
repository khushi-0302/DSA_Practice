#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            buy = min(buy, prices[i]);
            profit = max(prices[i] - buy, profit);
        }

        return profit;
    }
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    Solution obj;
    cout << obj.maxProfit(prices);

    return 0;
}