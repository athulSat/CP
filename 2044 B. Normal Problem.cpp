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
    string a,b;
    cin>>a;
    reverse(a.begin(),a.end());
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='p') b+="q";
        else if(a[i]=='q')b+="p";
        else b+=a[i];
    }
    cout<<b<<endl;
}
 return 0;
}