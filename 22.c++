#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string a;
    cin >> a;
    int sum = 0;
    if (a.length() <= 6) {
        cout << "wrong" << endl;
        return 0;
    }
    for (int i = 0; i < a.length(); i++ ) {
        if (a[i] >= 48 && a[i] <= 57) {
            sum++;
        }
    }
    if (sum == 0) {
        cout << "wrong" << endl;
        return 0;
    }
    cout << "right" << endl;
    return 0;
}