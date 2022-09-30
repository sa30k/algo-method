#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, q;
    cin >> n >> x >> q;
    for (int i=0; i<q; i++) {
        int type, v;
        cin >> type >> v;
        if (type==0) x |= (1<<v);
        else if (type==1) x &= ~(1<<v);
        else {
            if (x & (1<<v)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}