#include <bits/stdc++.h>
using namespace std;

// 使用 ll 代替 long long，防止数据溢出导致报错
typedef long long ll;

void solve() {
    // --- 在这里编写你的代码逻辑 ---
    int a[3];
    for(int i=0;i<3;i++)cin>>a[i];
    if(max(a[0],max(a[1],a[2]))-min(a[0],min(a[1],a[2]))<2)cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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