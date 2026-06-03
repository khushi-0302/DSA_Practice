#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, k = 0;

        vector<int> arr(m + n);

        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                arr[k++] = nums1[i++];
            } else {
                arr[k++] = nums2[j++];
            }
        }

        while (i < m) {
            arr[k++] = nums1[i++];
        }

        while (j < n) {
            arr[k++] = nums2[j++];
        }

        int z = 0;
        for (int t = 0; t < m + n; t++) {
            nums1[z++] = arr[t];
        }
    }
};

int main() {
    Solution obj;

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};

    int m = 3;
    int n = 3;

    obj.merge(nums1, m, nums2, n);
    for (int x : nums1) {
        cout << x << " ";
    }

    return 0;
}