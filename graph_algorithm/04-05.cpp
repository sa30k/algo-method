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
    dfs(graph, 0, seen);

    int num_nodes = 0;
    for (auto seen_i: seen) {
        if (seen_i) num_nodes++;
    }
    if (num_nodes == n) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}