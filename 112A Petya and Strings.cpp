#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main() 
{
ios::sync_with_stdio(false), cout.tie(0);
string a,b;
cin>>a>>b;
for(int i=0;i<a.length();i++){
    a[i]= tolower(a[i]);
    b[i]= tolower(b[i]);
}
if(a<b){
    cout<<"-1"<<endl;
}else if(a>b){
    cout<<"1"<<endl;
}else {
    cout<<"0"<<endl;
    }

 return 0;
}