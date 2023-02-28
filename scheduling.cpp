#include<bits/stdc++.h>
using namespace std;

#define ll long long

/*

4 6
1 3 3
2 3 3
4 12 1
3 3 2
10 9 3 1 5 11

*/

map<ll,ll>mp;

struct pst
{
    ll pid,pat,pbt,ct,st;

}ps[3000005];

bool compat(struct pst a, struct pst b)
{
    ll x=a.pat;
    ll y=b.pat;

    if(x!=y) return x<y;



        x=a.pbt;
        y=b.pbt;
        if(x!=y) return x<y;


            x=a.pid;
            y=b.pid;

            return x<y;

}

bool compid(struct pst a, struct pst b)
{
    ll x=a.pid;
    ll y=b.pid;

    if(x!=y) return x<y;
    return x>y;
}

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    ll x,q,i,k,p,j;

    cin>>x>>q;

    for(i=0;i<x;i++)
        cin>>ps[i].pid>>ps[i].pat>>ps[i].pbt;

    sort(ps,ps+x,compat);
    //sort(ps,ps+x,compid);

    ll a,b,c,d;
    for(i=0;i<x;i++)
    {
        if(i==0) ps[i].st=ps[i].pat;
        else
        {
            ps[i].st=max(ps[i].pat,(ps[i-1].ct)+1);
        }


        ps[i].ct=ps[i].st+(ps[i].pbt)-1;

        //ps[i].tar=ps[i].ct-ps[i].pat;

        //ps[i].wt=ps[i].tar-ps[i].pbt;

        //cout<<ps[i].ct<< " ";

    }

    p=ps[x-1].ct;

    while(q--)
    {
        cin>>k;

        if(k>p) { cout<<-1<< " "; continue; }

        i=0; j=x-1; d=0;

        while(i<=j)
        {
            a=(i+j)/2;

            b=ps[a].ct;

            c=ps[a].st;

            if(k<=b)
            {
                if(k>=c) { d=ps[a].pid; break; }
                else j=a-1;
            }
            else
            {
                i=a+1;
            }
        }

        if(d==0) cout<<-1<< " ";
        else cout<<d<< " ";
    }


    cout<<endl;

    //for(i=0;i<x;i++)
        //cout<<ps[i].pid<<" "<<ps[i].pat<< " "<<ps[i].pbt<<endl;
}

