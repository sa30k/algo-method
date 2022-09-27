#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    cin >> q;
    for(int i=0; i<q; i++) {
        int type;
        cin >> type;
        if (type==0) {
            reverse(a.begin(), a.end());
        }
        else if (type==1) {
            int v;
            cin >> v;
            a.push_back(v);
        }
        else {
            if (a.size()) {
                cout << a.back() << endl;
                a.pop_back();
            }
            else cout << "Error" << endl;
        }
    }
    return 0;
}