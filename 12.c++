#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a, b;
    cin >> a >> b;
    if (a % b == 0) {
        cout << " chia hết" << endl; 
        return 0;
    }
    cout << "ko chia hết" << endl;
    return 0;
}