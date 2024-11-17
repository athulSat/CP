#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define mode 1e+9

signed main() 
{
ios::sync_with_stdio(false), cout.tie(0);
int t;
cin>>t;
while(t--)
{
    int x,y,n;
    cin>>x>>y>>n;
    int rem=n%x;
    if(rem>=y)
    {
        int diff =rem-y;
        cout<<n-diff<<endl;
        continue;
    }
    n=n-(rem+1);
    rem=n%x;
    if(rem>=y)
    {
        int diff =rem-y;
        cout<<n-diff<<endl;
    }
}

 return 0;
}