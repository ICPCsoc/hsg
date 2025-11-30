#include "bits/stdc++.h"

using namespace std;

int a (int n) {
    int sum = 1;
    for (int i = 1; i <= n; i++) {
        sum *= i;
    }
    return sum;
}

int main (void) {
    int n;
    cin >> n;
    cout << a(n) << endl;
    return 0;
}