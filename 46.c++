#include "bits/stdc++.h" 

using namespace std;

int n (int a, int b, int c) {
    int sum = 0;
    if (a < b && b > c) {
        sum = b;
    }
    else if (a < c && c > b) {
        sum = c;
    }
    else if (a > b && a > c) {
        sum = a;
    }
    return sum;
}

int main (void) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << n(a, b, c) << endl;
    return 0;
}