#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        int prefixsum = 0;
        int length = 0;

        for (int i = 0; i < arr.size(); i++) {
            prefixsum = prefixsum + arr[i];

            if (prefixsum == k) {
                length = max(i + 1, length);
            }

            if (mp.find(prefixsum) == mp.end()) {
                mp[prefixsum] = i;
            }

            if (mp.find(prefixsum - k) != mp.end()) {
                length = max(length, i - mp[prefixsum - k]);
            }
        }

        return length;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;

    int ans = obj.longestSubarray(arr, k);

    cout <<ans<<endl;

    return 0;
}