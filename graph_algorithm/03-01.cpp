#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n, vector<int>());
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<int> dist(n, -1);
    queue<int> que;
    dist[0] = 0;
    que.push(0);

    while (!que.empty()) {
        int v = que.front();
        que.pop();

        for (int next_v: graph[v]) {
            if (dist[next_v] != -1) continue;

            dist[next_v] = dist[v]+1;
            que.push(next_v);
        }
    }
    vector<vector<int>> dist2idxes(n, vector<int>());
    for (int i=0; i<n; i++) {
        if (dist[i]>=0) dist2idxes[dist[i]].push_back(i);
    }
    for (int d=0; d<n; d++) {
        for (int j=0; j<dist2idxes[d].size(); j++) {
            if (j) cout << " ";
            cout << dist2idxes[d][j];
        }
        cout << endl;
    }
}