#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    bool is_ok = false;
    for (int bit=0; bit<(1<<8); bit++) {
        vector<long long> nums = {1};
        for (int i=0; i<8; i++) {
            if (bit & (1<<i)) nums.back() *= (i+2);
            else nums.push_back(i+2);
        }
        long long ans = accumulate(nums.begin(), nums.end(), 0LL);
        if (ans == n) is_ok = true;
    }
    if (is_ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}