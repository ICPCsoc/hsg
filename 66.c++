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
        if (a[i] > 0) {
            sum++;
        }
    }
    if (sum == n) {
        cout << "yes" << endl;
        return 0;
    }
    cout << "no" << endl;
    return 0;
}