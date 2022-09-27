#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> pos;
    for (int i=0; i<31; i++) {
        if (n & (1<<i)) pos.push_back(i);
    }
    cout << pos.size() << endl;
    for (int i=0; i<pos.size(); i++) {
        if (i) cout << " ";
        cout << pos[i];
    }
    cout << endl;
    return 0;
}