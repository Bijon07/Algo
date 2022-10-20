// BIJON SAHA DURJOY
//    SUST_SWE_19
#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define Max 32000
vector<int> primes;

void sieve()
{
    bool isPrime[Max];
    for (int i = 0; i < Max; i++)
    {
        isPrime[i] = true;
    }
    for (int i = 3; i * i <= Max; i += 2)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= Max; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= Max; i += 2)
    {
        if (isPrime[i] == true)
        {
            primes.push_back(i);
        }
    }
}

void segSieve(ll  l, ll r)
{
    bool isPrime[r - l + 1];
    for (int i = 0; i < r - l + 1; i++)
    {
        isPrime[i] = true;
    }
    if (l == 1)
    {
        isPrime[0] = false;
    }
    for (int i = 0; primes[i] * primes[i] <= r; i++)
    {
        int currentPrime = primes[i];
        ll base = (l / currentPrime) * currentPrime;
        if (base < l)
        {
            base += currentPrime;
        }
        for (ll j = base; j <= r; j += currentPrime)
        {
            isPrime[j - l] = false;
        }
        if (base == currentPrime)
        {
            isPrime[base - l] = true;
        }
    }

    for (int i = 0; i < r - l + 1; i++)
    {
        if (isPrime[i] == true)
        {
            cout << i + l << endl;
        }
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        segSieve(l, r);
    }
    return 0;
}