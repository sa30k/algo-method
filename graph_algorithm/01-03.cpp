#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> friends(n, vector<int>());

    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        friends[a].push_back(b);
        friends[b].push_back(a);
    }

    int ansIdx, maxFriends = 0;

    for (int i=0; i<n; i++) {
        if (friends[i].size() > maxFriends) {
            maxFriends = friends[i].size();
            ansIdx = i;
        }
    }

    sort(friends[ansIdx].begin(), friends[ansIdx].end());
    for (int i=0; i<friends[ansIdx].size(); i++) {
        if (i) cout << " ";
        cout << friends[ansIdx][i];
    }
    cout << endl;
    return 0;
}