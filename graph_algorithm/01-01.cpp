#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    bool is_friend = false;
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        if (i==a && s[b]=='o') is_friend = true;
    }
    if (is_friends) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}