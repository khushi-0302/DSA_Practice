#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, white = 0, blue = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                red++;
            }
            else if (nums[i] == 1) {
                white++;
            }
            else {
                blue++;
            }
        }

        for (int j = 0; j < red; j++) {
            nums[j] = 0;
        }
        for (int j = red; j < red + white; j++) {
            nums[j] = 1;
        }
        for (int j = red + white; j < red + white + blue; j++) {
            nums[j] = 2;
        }
    }
};

int main() {
    vector<int> nums = {2, 0, 2, 0, 2, 0, 1, 1};

    Solution obj;
    obj.sortColors(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}