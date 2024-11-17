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
    string s;
    cin>>s;
    if(s.length()>10)
    {
        cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
    }
    else 
    {
        cout<<s<<endl;
    }

}
 return 0;
}