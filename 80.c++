#include "bits/stdc++.h"

using namespace std;

int t (int n, int a[1000]) {
    int b[1000];
    for (int i = 0; i < n; i++) {
        b[n - i - 1] = a[i];
    }
    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }
}

int main (void) {
    int n; cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    t(n, a);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}