#include<bits/stdc++.h>
using namespace std;

int prefix(string st)
{
    int x,i,j,s=0;
    x=st.size();
    int n[x+1]={0};

    for(i=1;i<x;i++)
    {
        j=n[i-1];

        while(j>0&&st[i]!=st[j]) j=n[j-1];

        if(st[i]==st[j]) j++;

        n[i]=j;

        if(n[i]>s) s=n[i];
    }

    return s;
}

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

    string st;

    int x,i,j,k,p;

    cin>>st;

    p=prefix(st);

    cout<<p;


}
