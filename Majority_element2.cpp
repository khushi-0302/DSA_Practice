#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cand1 = 0, cand2 = 0;
        int count1 = 0, count2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == cand1) {
                count1++;
            }
            else if (nums[i] == cand2) {
                count2++;
            }
            else if (count1 == 0 && nums[i] != cand2) {
                cand1 = nums[i];
                count1 = 1;
            }
            else if (count2 == 0 && nums[i] != cand1) {
                cand2 = nums[i];
                count2 = 1;
            }
            else {
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == cand1)
                count1++;
            else if (nums[i] == cand2)
                count2++;
        }

        vector<int> ans;
        int limit = nums.size() / 3;

        if (count1 > limit)
            ans.push_back(cand1);

        if (count2 > limit)
            ans.push_back(cand2);

        return ans;
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 3, 3, 2, 2, 2};

    Solution obj;
    vector<int> ans = obj.majorityElement(nums);

    cout << "Majority Elements: ";
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}