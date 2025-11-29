#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a;
    cin >> a;
    if (a >= 8) {
        cout << "giỏi" << endl;
    }
    else if (a <= 8 && a >= 6.5) {
        cout << "khá" << endl;
    }
    else if (a >= 5 && a <= 6.5) {
        cout << "trung bình" << endl;
    }
    else {
        cout << "yếu" << endl;
    }
    return 0;
}