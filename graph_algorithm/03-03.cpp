#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> DIRS = {{-1,0}, {1,0}, {0,-1}, {0, 1}};

int main() {
    int h, w, x0, y0, x1, y1;
    cin >> h >> w >> x0 >> y0 >> x1 >> y1;
    vector<string> maze;
    for (int i=0; i<h; i++) {
        string s;
        cin >> s;
        maze.push_back(s);
    }

    vector<vector<int>> dist(h, vector<int>(w, -1));
    queue<pair<int, int>> que;
    dist[x0][y0] = 0;
    que.push(pair<int,int>(x0, y0));

    while (!que.empty()) {
        int x = que.front().first;
        int y = que.front().second;

        que.pop();

        for (auto dir: DIRS) {
            int nxt_x = x + dir[0];
            int nxt_y = y + dir[1];
            if (nxt_x<0 || nxt_x>=h || nxt_y<0 || nxt_y>=w) continue;
            if (maze[nxt_x][nxt_y]=='B') continue;
            if (dist[nxt_x][nxt_y] != -1) continue;

            dist[nxt_x][nxt_y] = dist[x][y]+1;
            que.push(pair<int,int>(nxt_x, nxt_y));
        }
    }

    cout << dist[x1][y1] << endl;
}