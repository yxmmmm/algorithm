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

int n,m,k,y,num,op,cnt=0,mx=-1e9,mi=1e9;
void solve() {
    cin>>n>>m;
    vector<char>str(n+10);
    for(int i=0;i<n;i++)cin>>str[i];
    map<char,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[str[i]]++;
    }
    int sum=0;
    for(char ch='A';ch<='G';++ch)
    {
        if(mp[ch]>=m)continue;
        else sum+=m-mp[ch];
    }
    cout<<sum<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) {
        solve();
    }

    return 0;
}