#include<bits/stdc++.h>
using namespace std;
int n,c;
long long ans,a[200001];
map<long long,int>m;
long long read()
{
    long long x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9')
    {
        if(ch=='-')f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9')
    {
        x=(x<<1)+(x<<3)+(ch^48);
        ch=getchar();
    }
    return x*f;
}
int main()
{
    scanf("%d%d",&n,&c);
    for(int i=1;i<=n;i++)
    {
        a[i]=read();
        m[a[i]]++;
    }
    for(int i=1;i<=n;i++)ans+=m[a[i]-c];
    printf("%lld",ans);
    return 0;
}
