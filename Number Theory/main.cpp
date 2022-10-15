// BIJON SAHA DURJOY
//    SUST_SWE_19
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bitset<1000>bs;
vector<int>primes;

void sieve(long long upper_bound)
{
    bs.set();
    bs[0] = bs[1] = 0;
    primes.push_back(2);
    for(ll i =3; i<= upper_bound +1; i+=2)
    {
        if(bs[i] == 1)
        {
            for(ll j = i*i; j<= upper_bound+1; j+=i)
            {
                bs[j] = 0;
            }
            primes.push_back((int) i);
        }
    }
    cout<<bs<<" ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve(1000);
    return 0;
}