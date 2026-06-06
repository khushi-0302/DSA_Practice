#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;

        if (n < 0) {
            x = 1 / x;
            N = -N;
        }

        double ans = 1;

        while (N > 0) {
            if (N % 2 == 1) {
                ans = ans * x;
                N--;
            }
            else {
                x = x * x;
                N = N / 2;
            }
        }

        return ans;
    }
};

int main() {
    double x;
    int n;

    cout << "Enter x and n: ";
    cin >> x >> n;

    Solution obj;

    cout << obj.myPow(x, n) << endl;

    return 0;
}