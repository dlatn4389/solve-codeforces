#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>

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

        if (n<3) {
            cout << -1 << endl;
            continue;
        }

        vector<int> radix(n+1);
        for (int i: nums) {
            radix[i]++;
        }

        int answer = -1;
        for (int i=1; i<=n; i++) {
            if (radix[i]>=3) {
                answer = i;
            }
        }

        cout << answer << endl;
    }
}
