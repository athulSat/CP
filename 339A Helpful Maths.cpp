#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
signed main() 
{
ios::sync_with_stdio(false), cout.tie(0);
string s;
cin>>s;
map<int,int>mp;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='+')continue;
    else mp[s[i]-'0']++;
}
bool first = true;
for(auto it:mp)
{
    while (it.second != 0) 
        {
            if (!first) 
            {
                cout << "+";
            }
            cout << it.first;
            it.second--;
            first = false; 
        }
    }
 return 0;
}