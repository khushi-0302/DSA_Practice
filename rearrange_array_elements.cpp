#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i = 0, j = 1;

        for (int k = 0; k < nums.size(); k++) {
            if (nums[k] > 0) {
                ans[i] = nums[k];
                i += 2;
            } else {
                ans[j] = nums[k];
                j += 2;
            }
        }

        int t = 0;
        for (int k = 0; k < nums.size(); k++) {
            nums[k] = ans[t];
            t++;
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    Solution obj;
    vector<int> result = obj.rearrangeArray(nums);
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}