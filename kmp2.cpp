#include<bits/stdc++.h>
using namespace std;

int n[10000];

void prefix(string st)
{
    int i,j,x;

    x=st.size();

    for(i=1;i<x;i++)
    {
        j=n[i-1];

        while(j>0&&st[i]!=st[j]) j=n[j-1];

        if(st[i]==st[j]) j++;

        n[i]=j;
    }

    //return n;
}

int kmp(string st, string st2)
{
    int x,y,i=0,j=0,p,s=-1;

    x=st.size();
    y=st2.size();

    prefix(st2);

    while(i<x)
    {
        if(st[i]==st2[j]) i++,j++;
        else
        {
            if(j>0) j=n[j-1];
            else i++;
        }

        if(j==y)
        {
            s=i-y; break;
        }
    }

    for(i=0;i<y;i++) cout<<n[i]<< " ";

    cout<<endl;

    return s;
}

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

    string st,st2;

    cin>>st>>st2;

    int p;

    p=kmp(st,st2);

    cout<<p;
}
