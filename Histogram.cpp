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

        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);

    ll t,x,i,j,k,s,cas=1;

    TST
    {
        cin>>x;
        stack<ll> stk1,stk2;
        ll n[x],p[x],q[x];

        for(i=0;i<x;i++){
            cin>>n[i];

            if(!stk1.empty())
            k=stk1.top();

            while(stk1.size()>0&&n[k]>=n[i]) { stk1.pop(); if(!stk1.empty()) k=stk1.top(); }

            if(stk1.empty()) { p[i]=-1;  }
            else p[i]=stk1.top();

            stk1.push(i);
        }


        for(i=x-1;i>=0;i--){

            if(!stk2.empty())
            k=stk2.top();
            
            while(stk2.size()>0&&n[k]>=n[i]) { stk2.pop(); if(!stk2.empty()) k=stk2.top(); }

            if(stk2.empty()) { q[i]=x;  }
            else q[i]=stk2.top();

            stk2.push(i);
        }

        cout<< "s="<<s<<endl;

        s=0;
        for(i=0;i<x;i++){

            k=( q[i]-p[i] -1 )*n[i];

            s=max(s,k);
        }

        cout<< "Case "<<cas++<< ": "<<s<<endl;

    }

}
