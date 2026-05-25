#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int k = 0;
        int j = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums.size() != 0 && i < nums.size() - 1) {
                if (nums[i] == nums[i + 1]) {
                    count = count + 1;
                }
                else {
                    nums[j] = nums[i];
                    k = k + 1;
                    j = j + 1;
                }
            }
            else {
                nums[j] = nums[i];
                k = k + 1;
                j = j + 1;
            }
        }
        return k;
    }
};

int main() {
    vector<int> nums = {1,1,2};

    Solution s;
    int k = s.removeDuplicates(nums);

    cout << "k = " << k << endl;

    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}