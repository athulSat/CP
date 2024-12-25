#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;  
    while (t--) {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int row1 = min(a, m);
        int row2 = min(b, m);

        int remaining = (m - row1) + (m - row2);

        int no_pref_filled = min(c, remaining);

        int result = row1 + row2 + no_pref_filled;

        cout << result << endl;
    }

    return 0;
}
