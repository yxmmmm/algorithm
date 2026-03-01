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

int n,m,k,x,y,num,op,cnt=0,mx,mi=1e9;

void solve() {
    int a,b;
    cin>>n>>a>>b;
    if(n<2)x=0;
    if(n>=2&&n<=6)x=n%2*b;
    if(n==7){
        if(a>3*b)x=a;
        else x=3*b;
    }
    if(n>=8){
        mx=max({(a+b)*(n/8),b*(n/2),n/7*a});
        if(mx==b*(n/2))x=mx;
        if(mx==n/7*a)x=n/7*a+n%7/2*b;
        if(mx==(a+b)*(n/8)){
            if(n%8==7&&a>=3*b)x=n/8*(a+b)+a;
            else x=n/8*(a+b)+n%8/2*b;
        }
    }
    cout<<x<<endl;
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