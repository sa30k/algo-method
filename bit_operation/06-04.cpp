#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i=0; i<n; i++) {
        int f;
        cin >> f;
        ans += (1<<f);
    }
    cout << ans << endl;
    return 0;
}