#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &G, int v, int p, vector<bool> &seen, vector<int> &childs) {
    seen[v] = true;

    for (auto next_v: G[v]) { 
        if (seen[next_v]) continue;
        dfs(G, next_v, v, seen, childs);
    }
    childs[v] = 1;
    for (auto child: G[v]) childs[v] += childs[child];
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
    vector<bool> seen(n, false);
    vector<int> childs(n, 0);
    dfs(graph, 0, -1, seen, childs);

    for (int i=0; i<n; i++) {
        cout << childs[i]-1 << endl; // 自分自身を引く
    }
    return 0;
}