#include <bits/stdc++.h>
using namespace std;

vector<string> nums = {"1110111", "0100100", "1011101", "1101101", "0101110", "1101011", "1111011", "0100111", "1111111", "1101111"};

int main() {
    int n, m;
    cin >> n >> m;

    int n10 = bitset<7>(nums[n]).to_ulong();
    int m10 = bitset<7>(nums[m]).to_ulong();
	cout << (n10 ^ m10) << endl;
	return 0;
}