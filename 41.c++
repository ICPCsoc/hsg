#include "bits/stdc++.h"

using namespace std;

int a (void) {
    return arc4random_uniform(10) + 1;
}

int main (void) {
    cout << a()<< endl;
    return 0;
}