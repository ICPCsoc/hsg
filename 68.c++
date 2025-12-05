#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (a[0] % 2 == 0) {
        cout << "chan" << endl;
        return 0;
    }
    cout << "le" << endl;
    return 0;
}