#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> w(n), v(n);
    for (int i=0; i<n; i++) cin >> w[i];
    for (int i=0; i<n; i++) cin >> v[i];

    long long ans = 0;

    for (int bit=0; bit<(1<<n); bit++) {
        long long valSum = 0, weightSum = 0;
        for (int i=0; i<n; i++) {
            if (bit & (1<<i)) {
                weightSum += w[i];
                valSum += v[i];
            }
            if (weightSum <= m) ans = max(ans, valSum);
        }
    }
    cout << ans << endl;
    return 0;
}