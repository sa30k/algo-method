#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, front_num = 0, back_num = 0;
    cin >> n;
    vector<int> a(n), front_a, back_a;
    for(int i=0; i<n; i++) cin >> a[i];
    cin >> q;
    for(int i=0; i<q; i++) {
        int type;
        cin >> type;
        if (type==0) {
            int v;
            cin >> v;
            front_a.push_back(v);
            front_num++;
        }
        else if (type==1) {
            int v;
            cin >> v;
            back_a.push_back(v);
            back_num++;
        }
        else {
            int k;
            cin >> k;
            if (k<front_num){
                cout << front_a[front_a.size()-1-k] << endl;
                continue;
            }
            k -= front_num;
            if (k<n){
                cout << a[k] << endl;
                continue;
            }
            k -= n;
            if (k<back_num) {
                cout << back_a[k] << endl;
                continue;
            }
            cout << "Error" << endl;
        }
    }
    return 0;
}