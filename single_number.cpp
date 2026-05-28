#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (mpp[nums[i]] == 1) {
                return nums[i];
            }
        }

        return -1;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {4, 1, 2, 1, 2};

    cout << "Single Number: " << obj.singleNumber(nums);

    return 0;
}