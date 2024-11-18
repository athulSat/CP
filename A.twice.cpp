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
    int n,count(0),i(0);
    cin>>n;
    int arr[n];
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(i<=n)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
            i=i+2;
        }
        else
        {
            i=i+1;
        }
    }
cout<<count<<endl;
}

 return 0;
}