#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool check(vector<int> &nums, int start) {
    bool isOdd = nums[start]%2;

    for (int i=start; i<nums.size(); i+=2) {
        if (isOdd!=nums[i]%2) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) {
            cin >> nums[i];
        }

        bool isOddIndexSameParity = check(nums, 0);
        bool isEvenIndexSameParity = check(nums, 1);

        if (isOddIndexSameParity and isEvenIndexSameParity) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}