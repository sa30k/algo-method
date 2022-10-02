#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> DIRS = {{-1,0}, {1,0}, {0,-1}, {0, 1}};

void dfs(vector<string> &G, int i, int j, vector<vector<bool>> &seen) {
    int h = G.size(), w = G[0].size();
    seen[i][j] = true;

    for (auto dir: DIRS) {
        int nxt_i = i + dir[0];
        int nxt_j = j + dir[1];

        if (nxt_i<0 || nxt_i>=h || nxt_j<0 || nxt_j>=w) continue;
        if (G[nxt_i][nxt_j]=='.') continue;
        if (seen[nxt_i][nxt_j]) continue;
        dfs(G, nxt_i, nxt_j, seen);
    }
}

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> maze;
    for (int i=0; i<h; i++) {
        string s;
        cin >> s;
        maze.push_back(s);
    }

    vector<vector<bool>> seen(h, vector<bool>(w, false));
    int ans = 0;
    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            if (maze[i][j] == '.') continue;
            if (seen[i][j]) continue;
            dfs(maze, i, j, seen);
            ans++;
        }
    }

    cout << ans << endl;
}