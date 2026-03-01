#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pi acos(-1)

const int N=1e6+10;
int q[N];
int n;

void quicksort(int q[],int l,int r)
{
    if(l>=r)return;
    int x=q[l+r>>1],i=l-1,j=r+1;
    while (i<j)
    {
        do i++;while (q[i]<x);
        do j--;while (q[j]>x);
        if(i<j)swap(q[i],q[j]); 
    }
    quicksort(q,l,j);
    quicksort(q,j+1,r);
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    scanf("%lld",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&q[i]);
    }
    quicksort(q,0,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%lld ",q[i]);
    }
    
    return 0;
}