#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &G, int v, vector<bool> &seen, int cnt) {
    seen[v] = true;
    if (v==0) {
        cout << cnt << endl;
        return;
    }

    for (auto next_v: G[v]) { 
        if (seen[next_v]) continue;
        dfs(G, next_v, seen, cnt+1);
    }
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<vector<int>> graph(n, vector<int>());
    for (int i=1; i<n; i++) {
        int a;
        cin >> a;
        graph[i].push_back(a);
        graph[a].push_back(i);
    }

    vector<bool> seen(n, false);
    dfs(graph, x, seen, 0);
    return 0;
}