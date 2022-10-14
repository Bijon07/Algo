// BIJON SAHA DURJOY
//    SUST_SWE_19
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sieve(int n)
{
    ll int prime[n+3];
    memset(prime,0,sizeof(prime));
    for(int i = 2; i*i <= n; i++)
    {
        if(prime[i] == 0)
        {
            for(int j = i*i; j<n; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    for(int i = 2; i<= n; i++)
    {
        if(prime[i] == 0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll int n;
    cin>>n;
    sieve(n);
    return 0;
}