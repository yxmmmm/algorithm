#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;

    bool found_67 = false;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val == 67)
        {
            found_67 = true;
        } // 读完再判断
    }

    if (found_67)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}