#include "bits/stdc++.h"

using namespace std;

int main (void) {
    string b, a;
    cin >> a >> b;
    if (a == "admin" && b == "123") {
        cout << "dang nhap thanh cong" << endl;
        return 0;
    }
    cout << "ko thanh cong" << endl;
    return 0;
}