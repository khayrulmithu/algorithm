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


ll tree[300005],prop[300005];

ll query(ll node, ll b, ll e, ll i, ll j, ll carry=0){
    if(i>e ||j<b) return 0;

    if(b>=i && e<=j) return tree[node]+(e-b+1)*carry;

    ll left = node<<1;
    ll right = (node<<1)+1;
    ll mid=(b+e)>>1;

    ll p1=query(left,b,mid,i,j,carry+prop[node]);
    ll p2=query(right,mid+1,e,i,j,carry+prop[node]);

    return p1+p2;
}

void update(ll node, ll b, ll e, ll i, ll j, ll v){

    if(i>e || j<b) return;

    if(b>=i && e<=j){ tree[node]+=(e-b+1)*v; prop[node]+=v; return; }

    ll left = node<<1;
    ll right = (node<<1)+1;
    ll mid = (b+e)>>1;

    update(left,b,mid,i,j,v);
    update(right,mid+1,e,i,j,v);

    tree[node ]=tree[left]+tree[right]+(e-b+1)*prop[node];
}




int main()
{
    IOS

        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);

    ll t,x,q,i,j,k,s,v,cas=1;

    TST
    {
        cin>>x>>q;

        //cout<< "Case "<<cas++<<":"<<endl;;

        while(q--){
            cin>>k>>i>>j;

            //i++; j++;

            if(k==0){
                cin>>v;
                update(1,1,x,i,j,v);
            }
            else {
                s=query(1,1,x,i,j);
                cout<<s<<endl;
            }
        }

        for(i=1;i<=300005;i++) tree[i]=0,prop[i]=0;
    }

}
