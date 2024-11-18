#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int n=1e6;
int primes[n+1];
void sieve()
{
    fill(primes,primes+n+1,1);
    primes[0]=primes[1]=0;
    for(int i=2;i*i<=n;i++)
    {
        if(primes[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                primes[j]=0;
            }
        }
    }
}
signed main() 
{
ios::sync_with_stdio(false), cout.tie(0);
sieve();
    int i,x;
    while(cin>>x)
    {
    	for(i=4;i<=x-4;i++){
			if(primes[i]==0 && primes[x-i]==0)
			{
				cout<<i<<" "<<x-i<<endl;
				break;
			}
    	}
    }

 return 0;
}