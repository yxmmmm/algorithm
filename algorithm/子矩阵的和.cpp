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

const int N = 1010;
// const int mod=998244353;
// const int mod=1e9+7;

int n, m, k, x, y, num, op, cnt = 0, mx = -1e9, mi = 1e9, x1, x2, yy1, yy2;
int a[N][N], s[N][N];
void solve()
{
    cin >> x1 >> yy1 >> x2 >> yy2;
    cout << s[x2][yy2] - s[x1 - 1][yy2] - s[x2][yy1 - 1] + s[x1 - 1][yy1 - 1] << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> n >> m >> t;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];

    while (t--)
    {
        solve();
    }

    return 0;
}