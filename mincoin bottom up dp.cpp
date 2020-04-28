/*

*-----------------------------------------------------------*
|                                                           |
|                                                           |
|               AUTHOR: Himanshu Aswal                      |
|                       (himanshu010)                       |
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
#define R return

using namespace std;

int mincoin(int n) {
    int coins[] = {1, 4, 7, 10};
    int dp[100] = {0};
    for (auto x : coins) {
        // cout << x << endl;
        dp[x] = 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        if (dp[i] == 0) {
            int ans = INT_MAX;
            for (auto x : coins) {
                if (x < i) {
                    int m = i - x;
                    // cout << m << "----" << endl;
                    ans = min(ans, dp[m]);
                }
            }
            dp[i] = ans + 1;
        }
        // cout << i << " " << dp[i] << endl;
    }
    return dp[n];
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
    // int t;cin>>t;while(t--)
    {
        int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
        n = 15;
        cout << mincoin(n);



    }
}