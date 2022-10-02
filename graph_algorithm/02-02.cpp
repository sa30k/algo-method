#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &G, int v, vector<bool> &seen, vector<int> &ans) {
    seen[v] = true;
    ans.push_back(v);

    for (auto next_v: G[v]) { 
        if (seen[next_v]) continue;
        dfs(G, next_v, seen, ans);
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
    vector<bool> seen(n, false);
    vector<int> ans;
    dfs(graph, 0, seen, ans);
    for (int i=0; i<n; i++) {
        if (i) cout << " ";
        cout << ans[i];
    }
    cout << endl;
    return 0;
}