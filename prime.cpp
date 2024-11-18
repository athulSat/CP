/*#include<bits/stdc++.h>
using namespace std;
int count_frequency(int n,int arr[])
{
    map<int,int>m1;
    for(int i=0;i<n;i++)
    {
        m1[arr[i]]++;
    }
    for(auto i:m1)
    {
        cout<<i.first<<" ->"<<i.second<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    count_frequency(n,arr);

}*/
// #include <stdio.h>

// int main() {
//    int i=0;
//    printf("%d %d %d %d",i,++i,++i,--i);

//     return 0;
// }
// 
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
void sieve(int n) 
{
    bool primes[n+1];
    fill( primes, primes+n+1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i*i <= n; i++) 
    {
        if (primes[i]) {
        cout << i << endl;
        for (int j = i*i; j <= n; j += i) {
             primes[j] = false;
             }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (primes[i]) {
            cout << i << endl;
        }
    }
}
signed main() 
{
ios::sync_with_stdio(false), cout.tie(0);
int n;
cin>>n;
sieve(n);
 return 0;
}