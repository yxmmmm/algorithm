#include <bits/stdc++.h>
using namespace std;

// 使用 ll 代替 long long，防止数据溢出导致报错
typedef long long ll;

void solve(int num[],int n) {
    // --- 在这里编写你的代码逻辑 ---
    int temp,min;
    for(int i=1;i<4;i++){
        min=0;
        for(int j=0;j<n;j++){
            if(num[min]>num[j])min=j;
        }
        printf("%d ",min+1);
        num[min]=10000;
    }
}

int main() {
    // 基础优化：加快输入输出速度，防止题目因为 cin/cout 导致超时
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // 如果题目说“包含多组测试数据”，就取消下面这一行的注释
    cin >> t; 
    int y[t+1],j=0,temp=t;
    while (temp--) {
        cin>>y[j];
        j++;
    }
    solve(y,t);

    return 0;
}