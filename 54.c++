#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (sum > a[i]) {
            sum = a[i];
        }
    }
    cout << sum << endl;
    return 0;
}