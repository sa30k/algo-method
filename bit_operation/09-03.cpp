#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, ans=0;
    cin >> n >> k;
    for (int i=0; i<k; i++) {
        int v;
        cin >> v;
        ans |= (1<<v);
    }
    cout << ans << endl;
    return 0;
}