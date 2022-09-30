#include <bits/stdc++.h>
using namespace std;

int NUM_ALPHABETS = 26;

int main() {
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i=0; i<n; i++) {
        cin >> words[i];
    }

    int ans = 1000;
    bool is_ok = false;
    for (int bit=0; bit<(1<<n); bit++) {
        int cnt = 0;
        set<char> alphabets;
        for (int i=0; i<n; i++) {
            if (bit & (1<<i)) {
                cnt++;
                for (auto c: words[i]){
                    alphabets.insert(c);
                }
            }
        }
        if (alphabets.size() == NUM_ALPHABETS) {
            is_ok = true;
            ans = min(ans, cnt);
        }
    }
    if (is_ok) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}