#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<vector<int>> friends(n, vector<int>());

    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        friends[a].push_back(b);
        friends[b].push_back(a);
    }

    set<int> common_friends;
    for (auto x_friend: friends[x]) {
        for (auto y: friends[x_friend]) {
            if (y!=x) common_friends.insert(y);
        }
    }

    set<int> x_friends(friends[x].begin(), friends[x].end());
    vector<int> ans;
    set_difference(
        common_friends.begin(), common_friends.end(),
        x_friends.begin(), x_friends.end(), back_inserter(ans)
    );

    cout << ans.size() << endl;
    return 0;
}