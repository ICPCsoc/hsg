#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    if (n <= 50 && n >= 10) {
        cout << "yes" << endl;
        return 0;
    }
    cout << "no" << endl;
    return 0;
}