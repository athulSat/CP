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
    int n;
    cin>>n;
    int sumo(0),sume(0);
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(i%2)
        {
            sumo+=arr[i];
        }
        else{
            sume+=arr[i];
        }
    }
    int sumol=n/2,sumel=(n+1)/2;
    if(sumo%sumol==0 && sume%sumel==0 && sumo/sumol==sume/sumel)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;

    }


}
 return 0;
}