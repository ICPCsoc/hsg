#include "bits/stdc++.h"

using namespace std;

bool a (string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            sum++;
        }
    }
    if (sum >= 1 && s.length() >= 6) {
        return true;
    }
    else {
        return false;
    }
}

int main (void) {
    string n;
    cin >> n;
    if (a(n) == true) {
        cout << "ok" << endl;
        return 0;
    }
    cout << "no" << endl;
    return 0;
}