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


ll tree[300005],ara[100005];

void build(ll node, ll b, ll e){
    if(b==e) { tree[node]=ara[b]; return; }

    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;

    build(left,b,mid);
    build(right,mid+1,e);

    tree[node]=min(tree[left],tree[right]);

}

ll query(ll node, ll b, ll e, ll i, ll j){
    if(i>e || j<b) return 1e9;

    if(b>=i && e<=j) return tree[node];

    ll left=node*2;
    ll right=node*2+1;
    ll mid=(b+e)/2;

    ll a=query(left,b,mid,i,j);
    ll d=query(right,mid+1,e,i,j);

    return (a+d);
}

void update(ll node, ll b, ll e, ll i, ll j){
    if(i>e || j<b) return;

    if(i>=b && i<=e) tree[node]++;

    ll left = node*2;
    ll right = node*2+1;
    ll mid=(b+e)/2;

    update(left,b,mid,i,j);
    update(right,mid+1,e,i,j);

    tree[node]=tree[left]/3+tree[right]/3;
}




int main()
{
    IOS

        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);

    ll t,x,i,j,p,s,q,cas=1;

    //TST
    {
        cin>>x>>q;

        while(q--)
        {
            cin>>p>>i>>j;

            if(p==0) update(1,1,x,i,j);
            else {
                s=query(1,1,x,i,j);
                cout<<s<<endl;
            }

        }
    }

}

