#include <bits/stdc++.h>
using namespace std;

map<char, int> usr2idx = {
    {'o', 0},
    {'g', 1},
    {'u', 2}
};

map<char, int> action2idx = {
    {'r', 2},
    {'w', 1},
    {'x', 0}
};

int main() {
    string x;
    char p, q;
    cin >> x >> p >> q;
    if ((x[usr2idx[p]]-'0') & (1<<action2idx[q])) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}