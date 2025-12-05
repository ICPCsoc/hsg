#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, k; cin >> n >> k;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    a[n] = a[k - 1];
    for (int i = k; i < n; i++) {
        a[i - 1] = a[i];
    }
    n--;
    for (int i = 0; i < n ; i++) {
        cout << a[i] << endl;
    }
    return 0;
}