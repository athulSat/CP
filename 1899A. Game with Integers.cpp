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
    cin >> n;
    if (n % 3) {
        cout << "First\n";
    } else {
        cout << "Second\n";
    }
}
 return 0;
}