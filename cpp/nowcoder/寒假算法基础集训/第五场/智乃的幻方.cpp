#include <bits/stdc++.h>
using namespace std;

#define sc second 
#define fr first 
#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define aii aair(int,int)
#define endl '\n'
#define ui unordered_maa<int,int>
#define ari ariority_queue
#define ai acos(-1)
#define all(a) a.begin(),a.end()

const int N=1e6+10;
// const int mod=998244353;
// const int mod=1e9+7;

int n=3,m=0,k,x=0,y,num,oa,cnt[8]={0},mx=-1e9,mi=1e9;
vvi q(3,vi(3));    vector<int> a(9);
void solve() {
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)cin>>q[i][j];
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)a[m++]=q[i][j];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<8;i++)if(a[i]==a[i+1]){cout<<"No";return;}

    cnt[0]=q[1][1]+q[2][2]+q[0][0];
    cnt[1]=q[2][0]+q[1][1]+q[0][2];
    x=2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cnt[x]+=q[i][j];
        x++;
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++)cnt[x]+=q[i][j];
        x++;
    }
    if(cnt[0]==cnt[1]&&cnt[0]==cnt[2]&&cnt[0]==cnt[3]&&cnt[0]==cnt[4]&&cnt[0]==cnt[5]&&cnt[0]==cnt[6]&&cnt[0]==cnt[7])cout<<"Yes";
    else cout<<"No";
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