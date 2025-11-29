#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a,b;
    cin >> a >> b;
    if (a > b) {
        cout << "bạn" << endl;
        return 0;
    }
    if (a < b) {
        cout << "bạn của bn" << endl;
        return 0;
    }
    cout << "bằng nhau" << endl;
    return 0;
}