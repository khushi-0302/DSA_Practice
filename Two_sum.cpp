#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int index = 0, index2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(target - nums[i]) != mp.end()) {
                index = index + mp[target - nums[i]];
                index2 = index2 + i;
            }

            if (mp.find(target - nums[i]) == mp.end()) {
                mp[nums[i]] = i;
            }
        }

        return {index, index2};
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 5, 5, 11};
    int target = 10;

    vector<int> ans = obj.twoSum(nums, target);

    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;

    return 0;
}