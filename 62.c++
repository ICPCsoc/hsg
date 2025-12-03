#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, x;
    cin >> n >> x;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (x < a[i]) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}