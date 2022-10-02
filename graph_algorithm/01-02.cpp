#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> follows(n, vector<int>());

    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        follows[a].push_back(b);
    }

    for (int i=0; i<n; i++) {
        sort(follows[i].begin(), follows[i].end());
        for (int j=0; j<follows[i].size(); j++) {
            if (j) cout << " ";
            cout << follows[i][j];
        }
        cout << endl;
    }

    return 0;
}