#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
//#define MAXE 300*300*2
#define MAXN 1010
#define SET(a,b) memset(a,b,sizeof(a))
deque<int> Q;
//g[i][j]存放关系图：i,j是否有边,match[i]存放i所匹配的点
bool g[MAXN][MAXN],inque[MAXN],inblossom[MAXN];
int match[MAXN],pre[MAXN],base[MAXN];

//找公共祖先
int findancestor(int u,int v)
{
        bool inpath[MAXN]={false};
        while(1)
        {
                u=base[u];
                inpath[u]=true;
                if(match[u]==-1)break;
                u=pre[match[u]];
        }
        while(1)
        {
                v=base[v];
                if(inpath[v])return v;
                v=pre[match[v]];
        }
}

//压缩花
void reset(int u,int anc)
{
        while(u!=anc)
        {
                int v=match[u];
                inblossom[base[u]]=1;
                inblossom[base[v]]=1;
                v=pre[v];
                if(base[v]!=anc)pre[v]=match[u];
                u=v;
        }
}

void contract(int u,int v,int n)
{
        int anc=findancestor(u,v);
        SET(inblossom,0);
        reset(u,anc);reset(v,anc);
        if(base[u]!=anc)pre[u]=v;
        if(base[v]!=anc)pre[v]=u;
        for(int i=1;i<=n;i++)
                if(inblossom[base[i]])
                {
                        base[i]=anc;
                        if(!inque[i])
                        {
                                Q.push_back(i);
                                inque[i]=1;
                        }
                }
}

bool dfs(int S,int n)
{
        for(int i=0;i<=n;i++)pre[i]=-1,inque[i]=0,base[i]=i;
        Q.clear();Q.push_back(S);inque[S]=1;
        while(!Q.empty())
        {
                int u=Q.front();Q.pop_front();
                for(int v=1;v<=n;v++)
                {
                        if(g[u][v]&&base[v]!=base[u]&&match[u]!=v)
                        {
                                if(v==S||(match[v]!=-1&&pre[match[v]]!=-1))contract(u,v,n);
                                else if(pre[v]==-1)
                                {
                                        pre[v]=u;
                                        if(match[v]!=-1)Q.push_back(match[v]),inque[match[v]]=1;
                                        else
                                        {
                                                u=v;
                                                while(u!=-1)
                                                {
                                                        v=pre[u];
                                                        int w=match[v];
                                                        match[u]=v;
                                                        match[v]=u;
                                                        u=w;
                                                }
                                                return true;
                                        }
                                }
                        }
                }
        }
        return false;
}

int solve(int n)
{
        SET(match,-1);
        int ans=0;
        for(int i=1;i<=n;i++)
                if(match[i]==-1&&dfs(i,n))
                        ans++;
        return ans;
}
