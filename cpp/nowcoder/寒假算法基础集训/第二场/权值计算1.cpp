#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pi acos(-1)

void solve() {
    int n;
    cin>>n;
    map<int,vector<int>>mp;//定义map即初始化了一个数组
    for(int i=1;i<n+1;i++){
        int x;cin>>x;
        mp[x].push_back(i);
    }//将数字和对应的位置存入map中

    int ans=0;
    for(auto &[x,y] :mp){
        y.insert(y.begin(),0);//补0方便首项也套公式
        for(int i=1;i<y.size();i++){
            int l=y[i-1];
            int r=n-y[i]+1;
            ans+=(y[i]-l)*r*(r+1)/2;
        }
    }
    cout<<ans<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}