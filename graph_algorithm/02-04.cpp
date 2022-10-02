#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &G, int v, vector<int> &depths, int depth) {
    depths[v] = depth;

    for (auto next_v: G[v]) { 
        if (depths[next_v]>=0) continue;
        dfs(G, next_v, depths, depth+1);
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> graph(n, vector<int>());
    for (int i=1; i<n; i++) {
        int p;
        cin >> p;
        graph[i].push_back(p);
        graph[p].push_back(i);
    }
    vector<int> depths(n, -1);
    dfs(graph, 0, depths, 0);

    int ans = 0;
    for (int i=0; i<n; i++) {
        ans = max(ans, depths[i]);
    }
    cout << ans << endl;
    return 0;
}