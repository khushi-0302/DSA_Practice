#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;

        if (nums.size() == 0) return 0;

        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        int longest = 1;

        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
                int cnt = 1;
                int x = it;

                while (st.find(x + 1) != st.end()) {
                    x = x + 1;
                    cnt = cnt + 1;
                }

                longest = max(cnt, longest);
            }
        }

        return longest;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {100, 4, 200, 1, 3, 2};

    int ans = obj.longestConsecutive(nums);

    cout << ans << endl;

    return 0;
}