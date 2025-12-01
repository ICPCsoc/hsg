#include "bits/stdc++.h"

using namespace std;

bool a (string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'A') {
            sum++;
        }
    }
    if (sum == s.length()) {
        return true;
    }
    else {
        return false;
    }
}

int main (void) {
    string s;
    cin >> s;
    a(s);
    if (a(s) == 1) {
        cout << "yes" << endl;
        return 0;
    }
    cout << "no" << endl;
    return 0;
}