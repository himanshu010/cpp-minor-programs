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


processing(int cur, int fin, int choosed) {

    bool ans = 0;
    done[canChoose[cur].F] = 1;
    ans = processing(cur + 1, fin - 1);

    if (ans == 0 and ) {

    }
}


void solve(int tc) {
    int i, j, k, n, m, ans = 0, cnt = 0, sum = 0;
    cin >> n >> m;
    vector<bool> done(n + 1);
    vector<P> a(m);
    for (int i = 0; i < ; ++i)
    {
        int l, r;
        cin >> l >> r;
        a[i] = {l, r};
    }

    cin >> k;
    vector<P>canChoose(k);
    for (int i = 0; i < k; ++i)
    {
        int l, r;
        cin >> l >> r;
        canChoose[i] = {l, r};
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
    // int t;cin>>t;while(t--)
    {
        solve(tc);
        tc++;
    }
}