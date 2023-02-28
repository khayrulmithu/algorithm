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

    ll x,k=25,i,j,p,s,q,L,R,mx=0;

    cin>>x;

    ll dp[x][k+1],lg[x+1],dp2[x][k+1];

    for(i=0;i<x;i++) { cin>>dp[i][0]; dp2[i][0]=dp[i][0]; }

    lg[1]=0;

    for(i=2;i<=x;i++) lg[i]=lg[i/2]+1;

    for(j=1;j<k;j++)
    {
        for(i=0;i+(1<<j)<=x;i++)
        {
            dp[i][j]=min(dp[i][j-1],dp[i+(1<<(j-1))][j-1]);
            dp2[i][j]=max(dp2[i][j-1],dp2[i+(1<<(j-1))][j-1]);
        }
    }

    cin>>q;

    double dd=0.0,dw=0.0,d=0.0,ww=0.0,ans=0.0;

    s=0;
    while(q--)
    {
        cin>>L>>R;

        //p=dp[L-1][0];

        //if(R<L) swap(R,L);


        j=lg[R-L+1];

        ww=min( dp[L][j], dp[R-(1<<j)+1][j] );

        ans=( (double) max( dp2[L][j], dp2[R-(1<<j)+1][j] )-ww)/2;

        if(L>0) {
        j=lg[L];

        ans= max( ans, (double) max( dp2[0][j], dp2[(L-1) - (1<<j)+1][j] )); dd=dd*1.0; }

        if(R<x-1){
        j=lg[(x-1)-(R)];

        ans = max(ans, (double) max( dp2[R+1][j], dp2[(x-1)-(1<<j)+1][j] )); dw=dw*1.0; }

        ans+=ww;

        //cout<<d<< " "<<i<< " "<<dd<< " "<<dw<<endl;
        //cout << fixed << setprecision(1);
        cout<<ans<<endl;
    }

    //cout<<s<<endl;

}


