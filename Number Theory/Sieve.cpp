// BIJON SAHA DURJOY
//    SUST_SWE_19
#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int>isPrime;
void seive(ll n)
{
    ll primes[n+3];
    memset(primes,0,sizeof(primes));
    for(ll i=2; i*i<=n; i++)
    {
        if(primes[i] == 0)
        {
            for(ll j=i*i; j<=n; j+=i)
            {
                primes[j] = 1;
            }
        }
    }
    for(ll i =0; i<=n; i++)
    {
        if(primes[i] == 0)
        {
            cout<<i<<"-> "<<"Prime"<<endl;
        }
        else
        {
            cout<<i<<"-> "<<"Not Prime"<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll int m;
    cin>>m;
    seive(m);
    return 0;
}