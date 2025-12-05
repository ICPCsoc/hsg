#include "bits/stdc++.h"

using namespace std;

bool t (int n, int a[1000]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            sum ++;
        }
    }
    if (sum > 0) {
        return true;
    }
    return false;
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