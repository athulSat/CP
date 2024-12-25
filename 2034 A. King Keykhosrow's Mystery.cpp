#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int gcd(int a,int b)
{
  if(a==0) return b;
  return gcd(b%a,a);
};
signed main() 
{
ios::sync_with_stdio(false), cout.tie(0);
int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int lcm=(a*b)/gcd(a,b);
        cout<<lcm<<endl;
        
    }
 return 0;
}