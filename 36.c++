#include "bits/stdc++.h"

using namespace std;

void a (int n) {
    for (int i = 1; i <= 10; i++) {
        cout << i * n << endl;
    }
}

int main (void) {
    int n;
    cin >> n;
    a(n);
    return 0;
}