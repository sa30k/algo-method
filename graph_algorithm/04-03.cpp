#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &G, int v, vector<bool> &seen) {
    seen[v] = true;
    if (v>0) cout << " ";
    cout << v;

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
    }
    for (int i=0; i<n; i++) {
        sort(graph[i].begin(), graph[i].end());
    } 

    vector<bool> seen(n, false);
    dfs(graph, 0, seen);
    return 0;
}