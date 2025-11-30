#include "bits/stdc++.h"

using namespace std;

double n (double a, double b, double c) {
    return (a + b + c) / 3;
}

int main (void) {
    double a, b, c;
    cin >> a >> b >> c;
    cout << n(a, b, c) << endl;
    return 0;
}