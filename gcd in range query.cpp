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

    ll x,k=17,i,j,p,s,q,L,R;
    mmp;

    cin>>x;

    ll dp[x][k+1],lg[x+1];

    for(i=0;i<x;i++) { cin>>dp[i][0]; mp[ dp[i][0] ]++; }

    lg[1]=0;

    for(i=2;i<=x;i++) lg[i]=lg[i/2]+1;

    for(j=1;j<=k;j++)
    {
        for(i=0;i+(1<<j)<=x;i++)
        {
            dp[i][j]=__gcd(dp[i][j-1],dp[i+(1<<(j-1))][j-1]);
            mp[ dp[i][j] ]++;
        }
    }

    cin>>q;

    while(q--)
    {
        cin>>p;

        ll cnt=0,d;
        for(i=0;i<x;i++)
        {
            for(d=i;d<x;d++)
            {
                L=i; R=d;
                j=lg[R-L+1];
                s=__gcd( dp[L][j], dp[R-(1<<j)+1][j] );

                if(s==p) cnt++;
                //else break;
            }
        }

        //cin>>L>>R;

        //j=lg[R-L+1];

        //s=__gcd( dp[L][j], dp[R-(1<<j)+1][j] );

        cout<<cnt; nl;
    }

}


