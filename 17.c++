#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a;
    cin >> a;
    if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)) {
        cout << "năm nhuận" << endl;
        return 0;
    }
    cout << "năm thường" << endl;
    return 0;
}