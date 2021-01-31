/*
*-----------------------------------------------------------*
|                                                           |
|                                                           |
|               AUTHOR: Himanshu Aswal                      |
|     ( website: himanshu010.github.io/Portfolio_website )  |
|                                                           |
|                                                           |
*-----------------------------------------------------------*
*/
#include<bits/stdc++.h>
#define moduli 998244353
#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define um unordered_map
#define PQ priority_queue
using namespace std;

void solve(int tc) {
    int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
    unordered_map<char, int>mp, pr;
    string s;
    cin >> s;
    n = s.size();
    for (int i = 0; i < n; ++i)
    {
        mp[s[i]]++;
    }

    int mx = INT_MIN;

    for (auto x : mp) {
        mx = max(x.S, mx);
    }

    if (n & 1) {
        if (mx <= ((n + 1) / 2)) {
            cout << 1 << endl;
            return;
        }
        cout << 0 << endl;
        return;
    }
    else {
        if (mx <= n / 2) {
            cout << 1 << endl;
            return;
        }
        cout << 0 << endl;
        return;
    }
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    int t; cin >> t; while (t--)
    {
        solve(tc);
        tc++;
    }
}