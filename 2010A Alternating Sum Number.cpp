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
    int  n,maxsum(0),minsum(0);
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i=i+2)
    {
        maxsum+=arr[i];
    }
    for(int i=1;i<n;i=i+2)
    {
        minsum+=arr[i];
    }
    cout<<(maxsum-minsum)<<endl;
}
 return 0;
}