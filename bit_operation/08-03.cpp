#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> ans;
    for (int i=0; i<8; i++) {
        int xi;
        string ansi;
        cin >> xi;
        string state = bitset<16>(xi).to_string();
        for (int j=0; j<16; j+=2) {
            if (state[j]=='0' && state[j+1]=='0') ansi += '.';
            else if (state[j]=='0' && state[j+1]=='1') ansi += 'o';
            else ansi += 'x';
        }
        cout << ansi << endl;
    }
    return 0;
}