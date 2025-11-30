#include "bits/stdc++.h"

using namespace std;

void a (int n) {
    if (n % 2 == 0) {
        cout << "chẵn" << endl;
    }
    else {
        cout << "lẻ" << endl;
    }
}

int main (void) {
    int n;
    cin >> n;
    a(n);
    return 0;
}