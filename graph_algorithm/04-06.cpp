#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &G, int v, vector<bool> &seen) {
    seen[v] = true;

    for (auto next_v: G[v]) { 
        if (seen[next_v]) continue;
        dfs(G, next_v, seen);
    }
}

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

    vector<bool> seen(n, false);

    int v = 0, ans = 0;
    while (true) {
        bool is_finished = true;
        ans++;
        dfs(graph, v, seen);
        for (int i=0; i<n; i++) {
            if (!seen[i]) {
                v = i;
                is_finished = false;
                break;
            }
        }
        if (is_finished) break;
    }
    cout << ans << endl;
    return 0;
}