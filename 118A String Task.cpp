#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main() 
{
ios::sync_with_stdio(false), cout.tie(0);
string s;
cin>>s;
string t(s.size(),'A');
transform(s.begin(),s.end(),t.begin()+3,::toupper);
// transform(s.begin(), s.end(), s.begin(), ::tolower);
// cout << s << endl;
// for (auto it : s)
// {
//     if (!(it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u' || it == 'y'))
//         cout << "." << it;
// }
// cout << endl;
cout<<t<<endl;

return 0;
}