#include <bits/stdc++.h>
using namespace std;

#define sc second 
#define fr first 
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair(int,int)
#define endl '\n'
#define ui unordered_map<int,int>
#define pri priority_queue
#define int long long
#define pi acos(-1)
#define all(a) a.begin(),a.end()

const int N=1e6+10;
// const int mod=998244353;
// const int mod=1e9+7;

int l,n,m,k,x,y,num,op,mx=-1e9,mi=1e9,sumx=0,sumy=0;

void solve() {
    cin>>n>>m>>l;
    vector<int> cntx(n,0), cnty(m+1,0);
    vector<int> x(n),y(m);
    cnty[0]=0;
    for(int i=0;i<n;i++){
        cin>>x[i];
        sumx+=x[i];
        cntx[i]=sumx;
    }
    for(int i=1;i<m;i++){
        cin>>y[i];
        sumy+=y[i];
        cnty[i]=sumy;
    }
   int i = 0; // 缝隙指针
    for (int j = 0; j <= m; j++) {
        // 找到第一个可能被当前脚掌覆盖的缝隙
        // 如果缝隙在脚后跟或之前，直接跳过
        while (i < n && cntx[i] <= cnty[j]) {
            i++;
        }
        
        // 检查这个缝隙是否在脚掌内 (小于脚尖)
        if (i < n && cntx[i] < cnty[j] + l) {
            cout << "YES" << endl;
            return;
        }
    }
    printf("NO");
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}