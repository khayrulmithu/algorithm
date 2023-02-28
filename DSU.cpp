#include<bits/stdc++.h>
using namespace std;

                /* KHAYRUL ...... ICT(10) 13th Batch Comilla University */

#define     ll              long long int
#define     IOS             ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define     TST             cin>>t; while(t--)

#define     vt(v)           vector<ll>v;
#define     vtp(v)          vector<pair<ll,ll>> v;
#define     pb              push_back

#define     cn              cin>>
#define     co              cout<<
#define     cot(a)          cout<<a<< "\n"
#define     nl              cout<< "\n"
#define     spc             cout<< " "
#define     spc2            << " " <<

#define     for1(a,b)       for(i=a;i<b;i++)
#define     for2(a,b)       for(j=a;j<b;j++)

#define     sst             string st
#define     st(i)           string i
#define     stz             st.size()
#define     sz(st)          st.size()
#define     rev(st)         reverse(st.begin(),st.end())

#define     mmp             map<ll,ll>mp
#define     mp(i)           map<ll,ll>i

#define     YES             cout<< "YES";
#define     Yes             cout<< "Yes";
#define     yes             cout<< "yes";
#define     NO              cout<< "NO";
#define     No              cout<< "No";
#define     no              cout<< "no";

#define     max2(a,b)       a>b?a:b
#define     max3(a,b,c)     a>(max2(b,c))?a:max2(b,c)
#define     max4(a,b,c,d)   a>( max3(b,c,d) )?a:max3(b,c,d)
#define     min2(a,b)       a<b?a:b
#define     min3(a,b,c)     a<(min2(b,c))?a:min2(b,c)
#define     min4(a,b,c,d)   a<( min3(b,c,d) )?a:min3(b,c,d)
#define     swp(a,b)        a=a+b,b=a-b,a=a-b;


int parent[100005],Size[100005];
vector<pair<int,int>>dnode;
vector<int>addNode;

void make(int v)
{
    parent[v]=v;
    Size[v]=1;
}

int find(int v)
{
    if(v==parent[v]) return v;

    return parent[v] = find(parent[v]);
}

void Union(int i, int j)
{
    int a=find(i);
    int b=find(j);

    if(a!=b)
    {
        if(Size[a]<Size[b]) swap(a,b);

        parent[b]=a;
        Size[a]+=Size[b];
    }

    else
    {
        dnode.pb(make_pair(i,j));
    }
}



int main()
{
    IOS

    int t,x,u,v,i,j,s,p,k,a,b;

    cin>>x;

    for(i=1;i<=x;i++)
    {
        make(i);
    }

    for(i=1;i<x;i++)
    {
        cin>>u>>v;

        Union(u,v);
    }

    s=0;
    for(i=1;i<=x;i++)
    {
        //if(parent[i]==i)
        {
            addNode.pb(i);

            cout<< "parent: "<<parent[i]<<endl;
        }
    }

    k=addNode.size();

    cout<<k-1<<endl;

    map<int,int>mp;

    b=addNode[0];
    for(i=1;i<k;i++)
    {
        cout<<dnode[i-1].first<< " "<<dnode[i-1].second<<" ";

        a=addNode[i];

        cout<<a<< " "<<b<<endl;
    }

}

