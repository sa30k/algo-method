#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    if (n & (1<<x)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}