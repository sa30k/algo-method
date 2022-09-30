#include <bits/stdc++.h>
using namespace std;

void move(vector<vector<int>>& state, int i, int j) {
    int height = state.size();
    int width = state[0].size();

    state[i][j] *= -1;
    if (i-1>=0) state[i-1][j] *= -1;
    if (j-1>=0) state[i][j-1] *= -1;
    if (i+1<height) state[i+1][j] *= -1;
    if (j+1<width) state[i][j+1] *= -1;
}

bool is_white(vector<vector<int>>& state) {
    int height = state.size();
    int width = state[0].size();

    for (int i=0; i<height; i++) {
        for (int j=0; j<width; j++) {
            if (state[i][j]==1) return false; 
        }
    }
    return true;
}

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<int>> state_ini(h, vector<int>(w, 1)); // 1: B(#), -1: W(.)
    bool ans = false;

    for (int i=0; i<h; i++) {
        string s;
        cin >> s;
        for (int j=0; j<s.size(); j++) {
            if (s[j]=='.') state_ini[i][j] *= -1;
        }
    }
    for (int bit=0; bit<(1<<h*w); bit++) {
        vector<vector<int>> state = state_ini;
        for (int i=0; i<h*w; i++) {
            if (bit & (1<<i)) move(state, i/w, i%w);
        }
        if (is_white(state)) {
            ans = true;
            break;
        }
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}