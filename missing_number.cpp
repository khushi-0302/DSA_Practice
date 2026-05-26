#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum;
    sum = (n * (n + 1)) / 2;

    int add = 0;
    int a = 0;

    for (int i = 0; i < n; i++) {
        add = add + nums[i];
    }

    if (sum > add) {
        a = a + (sum - add);
    }
    else {
        a = 0;
    }

    return a;
}

int main() {
    vector<int> nums = {0, 2, 3, 1, 4};

    int result = missingNumber(nums);
    cout << result;

    return 0;
}