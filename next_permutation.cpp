#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2;
        int j = nums.size() - 1;

        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        if (i >= 0) {
            while (nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }

        reverse(nums.begin() + i + 1, nums.end());
    }
};

int main() {
    Solution obj;

    vector<int> nums = {3, 2, 1};   
    obj.nextPermutation(nums);
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}