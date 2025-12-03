#include "bits/stdc++.h"

using namespace std;

bool t (int n) {
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
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (t(a[i]) == true) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}