//
// Created by 梁化祥19210134 on 2022/4/7.
//

#include<iostream>
using namespace std;
int aa[100010];

int find(int x)
{
    if(aa[x] == x)
        return x;
    else
        return find(aa[x]);
}
void dele(int a,int b)
{
    int tmp= find(b+1);
    for(int i=a;i<=b;i++)
    {
        aa[i]=tmp;
    }
}
//12345
void init(int n)
{
    for(int i=1;i<=n;i++)
    {
        aa[i]=i;
    }
}
int main()
{

    int n,m;
    cin>>n>>m;
    init(n);
    char flag;
    for(int k=0;k<m;k++)
    {
        cin>>flag;
        if(flag=='D')
        {
            int a,b;
            scanf("%d%d",&a,&b);
            dele(a,b);
        }
        if(flag=='Q')
        {
            int a;
            scanf("%d",&a);
            int ans= find(a);
            printf("%d\n",ans);
        }
    }

    return 0;
}