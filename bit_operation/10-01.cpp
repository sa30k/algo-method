#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int ans = 0;
    for (int i=0; i<n; i++) {
        int a;
        cin >> a;
        if (x & (1<<i)) ans += a;
    }
    cout << ans << endl;
    return 0;
}