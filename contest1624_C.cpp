#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> nums(n);
        for (int i=0; i<n; i++) {
            cin >> nums[i];
        }
        vector<int> radix(n+1);
        bool notAns = false;

        for (int i: nums) {
            while (i>n) i/=2;
            while (i>=1 and radix[i]==1) i/=2;

            if (i>=1) radix[i]++;
            else {
                notAns = true;
                break;
            }
        }

        if (notAns) {
            cout << "no" << endl;
        }
        else {
            cout << "yes" << endl;
        }
    }
}