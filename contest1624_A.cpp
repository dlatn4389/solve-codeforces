#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>

int maxVal(vector<int> &v) {
    int max = v[0];
    for (int i=1; i<v.size(); i++) {
        if (v[i]>max) max = v[i];
    }
    return max;
}

int minVal(vector<int> &v) {
    int min = v[0];
    for (int i=1; i<v.size(); i++) {
        if (v[i]<min) min = v[i];
    }
    return min;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) {
            cin >> nums[i];
        }
        cout << maxVal(nums)-minVal(nums) << endl;
    }
}