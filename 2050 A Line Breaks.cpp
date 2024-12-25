#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main() 
{
ios::sync_with_stdio(false), cout.tie(0);
int t;
cin>>t;
while(t--)
{
    int n,m;
    int x,sum(0),count(0);
    cin>>n>>m;
    while(n--)
    {
        string s;
        cin>>s;
        x=s.length();
        m=(m-x);
        if(m>=0) count++;
    } 
     cout<<count<<endl;
    
}
 return 0;
}