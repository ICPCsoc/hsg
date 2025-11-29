#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a;
    cin >> a;
    if (a > 0) {
        cout << "dương" << endl;
        return 0;
    }
    if (a < 0) {
        cout << "âm" << endl;
        return 0;
    }
    cout << "bằng 0" << endl;
    return 0;
}