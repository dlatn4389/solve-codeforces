#include <iostream>
#include <algorithm>
using namespace std;

bool checkFirst(int a, int b, int c) {
    int temp = 2*b-c;
    if (temp<=0) return false;
    if (temp%a==0) return true;
    return false;
}

bool checkSecond(int a, int b, int c) {
    int sum = a+c;
    int doubled_b = 2*b;
    if (sum<doubled_b) return false;
    if (sum%doubled_b==0) return true;
    return false;
}

bool checkThird(int a, int b, int c) {
    int temp = 2*b-a;
    if (temp<=0) return false;
    if (temp%c==0) return true;
    return false;
}

bool check(int a, int b, int c) {
    return checkFirst(a, b, c) or checkSecond(a, b, c) or checkThird(a, b, c);
}

int main() {
    int t; cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (check(a, b, c)) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
}