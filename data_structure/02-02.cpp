#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    cin >> q;
    for (int i=0; i<q; i++) {
        int type, kv;
        cin >> type >> kv;
        if (!type) {
            if (kv < a.size()) cout << a[kv] << endl;
            else cout << "Error" << endl;
        }
        else a.push_back(kv);
    }
    return 0;
}