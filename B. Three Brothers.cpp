#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main() 
{
ios::sync_with_stdio(false), cout.tie(0);
int a,b;
cin>>a>>b;
int arr[4]={0};
for(int i=1;i<=3;i++)
{
    arr[a]++;
    arr[b]++;
}
for(int i=1;i<=3;i++)
{
    if(arr[i]==0) cout<<i<<endl;
}

 return 0;
}