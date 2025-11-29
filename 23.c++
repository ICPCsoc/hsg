#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a;
    cin >> a;
    int sum = 0;
    if (a >= 50) {
        sum += 50 * 1700;
        a -= 50;
        if (a >= 50) {
            sum += 50 * 2000;
            a -= 50;
            if (a >= 0) {
                sum += a * 2500;
            }
        }
        else {
            sum += a * 2000;
        }
    }
    else {
        sum += a * 1700;
    }
    cout << sum << endl;
    return 0;
}