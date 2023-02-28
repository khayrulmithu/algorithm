#include<bits/stdc++.h>
using namespace std;

                /* KHAYRUL ...... ICT(10) 13th Batch Comilla University */

#define     ll              unsigned long long int
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

ll mod=1000000007;

pair<ll,ll> fibo(ll x)
{
    if(x==0) return {0ll,1ll};

    auto p=fibo(x>>1);

    ll a=((p.first%mod)*(((2*(p.second%mod))%mod - (p.first%mod)+mod))%mod)%mod;
    ll b=(((p.first%mod)*(p.first%mod))%mod + ((p.second%mod)*(p.second%mod))%mod)%mod;

    if(x&1) return {b%mod,(b+a)%mod};
    else return {a%mod,b%mod};
}



int main()
{
    IOS

    ll t,x,i,j,k,y;

    TST
    {
        cin>>x;

        if(x==0) { cout<<0<<endl; continue; }
        else if(x==1) { cout<<2<<endl; continue; }

        auto j = fibo(x);
        //auto k = fibo(y+2);

        i=(j.first)%mod;

        //cout<<k.first<< " "<<j.first<<endl;

        //if(i<0) i=i*-1;

        cout<<i<<endl;
    }

}

