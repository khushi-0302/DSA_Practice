#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n = arr.size();

        long long Sn = (n * (n + 1)) / 2;
        long long S2n = (n * (n + 1) * (2 * n + 1)) / 6;

        long long S = 0, S2 = 0;

        for (int i = 0; i < n; i++) {
            S += arr[i];
            S2 += 1LL * arr[i] * arr[i];
        }

        long long val1 = S - Sn;          // x - y
        long long val2 = (S2 - S2n) / val1; // x + y

        long long repeating = (val1 + val2) / 2;
        long long missing = repeating - val1;

        return {(int)repeating, (int)missing};
    }
};

int main() {
    vector<int> arr = {1, 3, 3};

    Solution obj;
    vector<int> ans = obj.findTwoElement(arr);

    cout << "Repeating Number: " << ans[0] << endl;
    cout << "Missing Number: " << ans[1] << endl;

    return 0;
}