// BIJON SAHA DURJOY
//    SUST_SWE_19
#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define Max 32000
vector<int>primes;

void seive()
{
    bool isprimes[Max];
    memset(isprimes,true,sizeof(isprimes));
    for(int i =3; i*i<=Max; i+=2)
    {
        if(isprimes[i] == true)
        {
            for(int j =i*i; j<=Max; j+=i)
            {
                isprimes[j]= false;
            }
        }
    }
    primes.push_back(2);
    for(int i =3; i<=Max; i+=2)
    {
        if(isprimes[i] == true)
        {
            primes.push_back(i);
        }
    }
    for(int i=0; i<10 ;i++)
    {
        cout<<primes[i]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    seive();
    return 0;
}