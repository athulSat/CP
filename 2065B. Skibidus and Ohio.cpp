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
        string s;
        cin >> s;
        int length = s.length();
        bool has_consecutive = false;
        for (int i = 1; i < length; i++) {
            if (s[i] == s[i - 1]) {
                has_consecutive = true;
                break;
            }
        }
        int result = has_consecutive ? length / 2 : length;

        cout << result << endl;

}
 return 0;
}