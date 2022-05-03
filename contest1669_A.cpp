#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;

    while (t--) {
        int rating; cin >> rating;
        int rank;

        if (rating>=1900) rank = 1;
        else if (rating>=1600) rank = 2;
        else if (rating>=1400) rank = 3;
        else rank = 4;

        cout << "Division " << rank << endl;
    }
}