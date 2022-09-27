#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, q;
    cin >> n >> s >> q;
    int state = s;
    for (int i=0; i<q; i++) {
        int type, x;
        cin >> type >> x;
        if (type == 0) {
            state |=  (1<<x);
        }
        else if (type == 1){
            state &= ~(1<<x);
        }
        else {
            if (state & (1<<x)) cout << "on" << endl;
            else cout << "off" << endl;
        }
    }
    return 0;
}