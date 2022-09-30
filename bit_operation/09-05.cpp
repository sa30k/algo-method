#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    string strX = bitset<30>(x).to_string();
    int ans = count(strX.begin(), strX.end(), '1');
    cout << ans << endl;
    return 0;
}