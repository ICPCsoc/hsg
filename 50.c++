#include "bits/stdc++.h"

using namespace std;

bool a (int n) {
    if (n <= 1 || n % 2 == 0) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (i % n == 0) {
            return false;
        }
    }
    return true;
}

int main (void) {
    int n; cin >> n;
    a(n);
    if (a(n) == true) {
        cout << "yes" << endl;
        return 0;
    }
    cout << "no" << endl;
    return 0;
}