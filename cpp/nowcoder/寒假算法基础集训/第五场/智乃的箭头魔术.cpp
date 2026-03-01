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

int n=0,m,k,x,y,num,op,cnt=0,mx=-1e9,mi=1e9;


int a(int p)//0
{
    if(p==0)return 3;
    if(p==1)return 2;
    if(p==2)return 1;
    if(p==3)return 0;
}
int b(int p)//1
{
    if(p==0)return 0;
    if(p==1)return 3;
    if(p==2)return 2;
    if(p==3)return 1;
}
int c(int p)//2
{
    if(p==0)return 1;
    if(p==1)return 0;
    if(p==2)return 3;
    if(p==3)return 2;
}
int d(int p)//3
{
    if(p==0)return 2;
    if(p==1)return 1;
    if(p==2)return 0;
    if(p==3)return 3;
}
int e(int p)
{
    if(p==0)return 1;
    if(p==1)return 2;
    if(p==2)return 3;
    if(p==3)return 0;
}
int f(int p)
{
    if(p==0)return 3;
    if(p==1)return 0;
    if(p==2)return 1;
    if(p==3)return 2;
}


int (*func_list[])(int) = {a, b, c, d, e, f};//映射方法

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
       for(int i=0;i<100;i++)
       {
        char ch;//注意大数读取
        cin>>ch;
        num=ch-'0';
        n=func_list[num](n);
        cout<<n;
       }

    }

    return 0;
}