#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int t = a[i];
        for (int j = i + 1; j < n; j++) {
            if (t == a[j]) {
                sum++;
                break;
            }
        }
    }
    cout << sum << endl;
    return 0;
}