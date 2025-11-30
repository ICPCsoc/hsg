#include "bits/stdc++.h"

using namespace std;

int a (int n, int b) {
    return n + b;
}

int main (void) {
    int n, b;
    cin >> n >> b;
    cout << a(n, b) << endl;
    return 0;
}