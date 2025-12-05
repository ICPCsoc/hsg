#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    double a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    double x = sum / n;
    int t = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > x) {
            t++;
        }
    }
    cout << t << endl;
    return 0;
}