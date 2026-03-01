#include<iostream>
using namespace std;
const int N = 1e6+10;

//head 表示头节点下标
//e[i]表示节点i的值
//ne[i]表示节点i的next指针是多少
//idx表示当前用到那个点
int head,e[N],ne[N],idx;

//初始化
void init()
{
    head=-1;
    idx=0;
}
//将x插入头节点
void add_to_head(int x)
{
    ne[idx]=head;
    e[idx]=x;
    head=idx;
    idx++;
}
//平凡插入（将x插到下标是k的点后面）
void add(int k,int x)
{
    e[idx]=ne[k];
    ne[k]=idx;
    e[idx]=x;
    idx++; 
}
//单链表删除（将下标k后的点删掉）
void remove(int k)
{
    ne[k]=ne[ne[k]];
}