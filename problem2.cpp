#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void even(ll n)
{
    if(n<0)
    return;
    cout<<n<<" ";
    return even(n-2);
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >>n;
    n=(n/2*2);
    even(n);
    return 0;
}