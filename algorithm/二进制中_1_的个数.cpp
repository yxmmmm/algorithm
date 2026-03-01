#include <bits/stdc++.h>
using namespace std;

#define sc second
#define fr first
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair(int, int)
#define endl '\n'
#define ui unordered_map<int, int>
#define pri priority_queue
#define int long long
#define pi acos(-1)
#define all(a) a.begin(), a.end()

const int N = 1e6 + 10;
// const int mod=998244353;
// const int mod=1e9+7;

int n, m, k, x, y, num, op, cnt = 0, mx = -1e9, mi = 1e9;

int lowbit(int x)
{
    return x & -x;
}

void solve()
{
    cin >> n;
    cnt = 0;
    while (n)
    {
        n -= lowbit(n);
        cnt++;
    }
    cout << cnt << " ";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}