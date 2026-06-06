#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int s = 0, e = m * n - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            int row = mid / n;
            int column = mid % n;

            if (matrix[row][column] < target) {
                s = mid + 1;
            }
            else if (matrix[row][column] == target) {
                return true;
            }
            else {
                e = mid - 1;
            }
        }

        return false;
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target;
    cout << "Enter target: ";
    cin >> target;

    Solution obj;

    if (obj.searchMatrix(matrix, target))
        cout << "Target Found" << endl;
    else
        cout << "Target Not Found" << endl;

    return 0;
}