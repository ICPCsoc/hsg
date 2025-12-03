#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n, c, b;
    cin >> n >> c >> b;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= c && a[i] <= b) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}