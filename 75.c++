#include "bits/stdc++.h"

using namespace std;

bool g (int n) {
    if (n == 2) {
        return true;
    }
    if (n <= 1 || n % 2 == 0) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (i % n == 0) {
            return false;
        }
    }
    return true;
}

int t (int n, int a[1000]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (g(a[i]) == true) {
            sum += a[i];
        }
    }
    return sum;
}

int main (void) {
    int n; cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << t(n, a) << endl;
    return 0;
}