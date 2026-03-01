#include <bits/stdc++.h>
using namespace std;

// 使用 ll 代替 long long，防止数据溢出导致报错
typedef long long ll;

int f(int l,int r,int s[]){
    set<int>st;
    int total=0;
    int count=0;
    for(int i=l;i<l+r;i++){
        if(!st.count(s[i])){
            st.insert(s[i]);
            count++;
        }
        total+=count;
    }
    return total;
}

void solve() {
    // --- 在这里编写你的代码逻辑 ---
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum+=f(i,j-i+1,s);
        }
    }
    cout<<sum<<endl;
}

int main() {
    // 基础优化：加快输入输出速度，防止题目因为 cin/cout 导致超时
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // 如果题目说“包含多组测试数据”，就取消下面这一行的注释
    cin >> t; 

    while (t--) {
        solve();
    }

    return 0;
}