#include <bits/stdc++.h>
using namespace std;


const int N=1e6+10;
long long cnt=0;//注意ll
int n,q[N],tmp[N];

void solve(int q[],int l,int r)
{
    if(l>=r)return;
    int mid=(l+r)>>1;
    solve(q,l,mid);solve(q,mid+1,r);
    int i=l,j=mid+1,k=0;
    while(i<=mid&&j<=r)
    if(q[i]<=q[j])tmp[k++]=q[i++];//注意<=，=不可放在else里
    else {
        tmp[k++]=q[j++];
        cnt+=mid-i+1;
    }
    while(i<=mid)tmp[k++]=q[i++];
    while(j<=r)tmp[k++]=q[j++];
    
    for(int i=l,j=0;i<=r;i++,j++)q[i]=tmp[j];
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin>>n;
    for(int i=0;i<n;i++)cin>>q[i];

    while (t--) {
        solve(q,0,n-1);
        cout<<cnt<<endl;
    }

    return 0;
}