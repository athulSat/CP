#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main() 
{
ios::sync_with_stdio(false), cout.tie(0);
 int n,m,count(0);
cin>>n>>m;
for(int a=0; a*a <=n; a++)
{
    for( int b=0; b*b <=m; b++)
    {
        if((((a*a)+b)==n) && ((a+ (b*b))==m)) count++;

    }
}
cout<<count << endl;
 return 0;
}