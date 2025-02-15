#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main() 
{
ios::sync_with_stdio(false), cout.tie(0);
int t;
cin>>t;
string s,res="";
while(t--)
{
    cin>>s;
    int length=s.length();
    if (length > 1) 
    {
        res = s.substr(0, length - 2) + "i"; 
    }
    else
    {
        res= "i";

    }
    cout<<res<<endl;
    
}
 return 0;
}