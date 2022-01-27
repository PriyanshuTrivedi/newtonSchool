#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,j,sd1,sd2,k;
    sd1=sd2=0;
    cin>>n;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        cin>>k;
        if(i==j)
        sd1+=k;
        if(i+j==n-1)
        sd2+=k;
    }
    cout<<"Primary Diagonal Sum "<<sd1<<"\n0";
    cout<<"Secondary Diagonal Sum "<<sd2<<"\n0";
    return 0;
}