#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n; cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[j] < a[i]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}