#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    
    int n = a.size();
    int m = b.size();

    vector<int> sortedArray1;
    int i = 0, j = 0;

    while(i < n && j < m) {

        if(a[i] < b[j]) {

            if(sortedArray1.empty() || sortedArray1.back() != a[i]) {
                sortedArray1.push_back(a[i]);
            }
            i++;
        }

        else if(a[i] == b[j]) {

            if(sortedArray1.empty() || sortedArray1.back() != a[i]) {
                sortedArray1.push_back(a[i]);
            }
            i++;
            j++;
        }

        else {

            if(sortedArray1.empty() || sortedArray1.back() != b[j]) {
                sortedArray1.push_back(b[j]);
            }
            j++;
        }
    }

    while(i < n) {

        if(sortedArray1.empty() || sortedArray1.back() != a[i]) {
            sortedArray1.push_back(a[i]);
        }
        i++;
    }

    while(j < m) {

        if(sortedArray1.empty() || sortedArray1.back() != b[j]) {
            sortedArray1.push_back(b[j]);
        }
        j++;
    }

    return sortedArray1;
}

int main() {

    vector<int> a = {1, 1, 2, 3, 4};
    vector<int> b = {2, 3, 4, 4, 5};

    vector<int> ans = sortedArray(a, b);

    cout << "Union Array: ";

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}

//