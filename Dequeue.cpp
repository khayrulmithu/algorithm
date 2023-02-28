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







int main()
{
    IOS

    ll x,q,i,j,k,p,s,d;

    cin>>x>>q;

    ll n[x];

    for(i=0;i<x;i++)
        cin>>n[i];

    while(q--)
    {
        cin>>d;

        deque<ll> qu,qu2;

        s=1e18;
        for(i=0;i<d;i++)
        {
            while(!qu.empty() && n[i]>qu.back()) qu.pop_back();

            qu.push_back(n[i]);
        }

        k=qu.front();
        s=min(s,k);

        for(i=d;i<x;i++)
        {
            k=qu.front();

            if(k==n[i-d]) qu.pop_front();

            while(!qu.empty() && n[i]>qu.back()) qu.pop_back();

            qu.push_back(n[i]);

            k=qu.front();
            s=min(s,k);
        }

        cout<<s<<endl;
    }

}

