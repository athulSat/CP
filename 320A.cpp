#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main() 
{
ios::sync_with_stdio(false), cout.tie(0);
int i(0);
string n;
cin>>n;
bool flag=0;
while(i<n.length())
{
    if(n.substr(i,3)== "144" )i+=3;
    else if(n.substr(i,2)=="14")i+=2;
    else if(n[i]=='1')i+=1;
    else
    {
        flag=1;
        break;
    }
}
if(!flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
 return 0;
}