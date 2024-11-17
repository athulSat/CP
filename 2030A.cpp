#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main() 
{
ios::sync_with_stdio(false), cout.tie(0);
    int t;
	cin >> t;
	while (t--) {
	    int n,maxi,mini,v;
	    cin>>n>>v;
	    mini=maxi=v;
	    for(int i=1;i<n;i++)
	    {
	        cin>>v;
	        mini=min(mini,v);
	        maxi=max(maxi,v);
	    }
	    cout<<(n-1)*(maxi-mini)<< endl;
	}

 return 0;
}