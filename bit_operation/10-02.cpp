#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin >> n >> v;
    vector<int> a(n);
    for (int i=0; i<n; i++) cin >> a[i];

    bool ans = false;

    for (int bit=0; bit<(1<<n); bit++) {
        int sumA = 0;
        for (int i=0; i<n; i++) {
            if (bit & (1<<i)) sumA += a[i];
        }
        if (sumA == v) {
            ans = true;
            break;
        }
    }
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}