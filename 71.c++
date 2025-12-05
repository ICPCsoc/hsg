#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n; cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int t = a[i];
        int d = 0;
        for (int j = i + 1; j < n; j++) {
            if (a[j] == t) {
                d++;
            }
        }
        if (sum < d) {
            sum = a[i];
        }
    }
    cout << sum << endl;
    return 0;
}