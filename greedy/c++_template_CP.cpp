#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define ll long long int
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vp vector<pair<int,int>> 
#define p pair <int,int>
#define mii unordered_map<int, int>
#define MAX 2000002
#define setbits(x) __builtin_popcount(x)
#define zrobits(x) __builtin_ctz(x)
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define inf 1e18
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define bakchodi                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

//prime sieve
vector<bool> primes(100006, true);
void sieve()
{
    for (int i = 3; i <= 100006; i += 2)
    {
        primes[i] = 1;
    }
    //Sieve
    for (int i = 3; i <= 100006; i++)
    {
        if (primes[i] == 1)
        {
            for (int j = i * i; j <= 100006; j += i)
            {
                primes[j] = 0;
            }
        }
    }
    primes[2] = 1;
    primes[0] = primes[1] = 0;
}

int recpow(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0) //n is even
        return recpow((x * x), n / 2);
    else //n is odd
        return (x * recpow((x * x), (n - 1) / 2));
}

//Euler Totient Function for no of coprimes with n from 1 to n-1
int phi(int n) 
{
    int result = n;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main()
{
    bakchodi;
    w(x)
    {

    }
 
 return 0;
}