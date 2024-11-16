#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
  
    while (t--) {
        int n;
        cin >> n;  
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >>arr[i];
        }
        int count(0);
        map<int,int>mpp;

        for (auto it:arr) {
            mpp[it]++;
                count=max(count,mpp[it]); 
        }
        cout << n- count << endl;
    }
    
    return 0;
}
