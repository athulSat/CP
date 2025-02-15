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
    int arr[6];
    cin>>arr[1]>>arr[2]>>arr[4]>>arr[5];
    int brr[]={arr[1]+arr[2],arr[4]-arr[2],arr[5]-arr[4]};
    sort(brr,brr+3);
    if(brr[2]==brr[0])cout<<3<<endl;
    else if(brr[0]==brr[1]||brr[1]==brr[2]) cout<<2<<endl;
    else cout<<1<<endl;
}
 return 0;
 }