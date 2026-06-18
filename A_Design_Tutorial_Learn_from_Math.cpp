#include <bits/stdc++.h>
using namespace std;

#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = (a); i < (b); i++)

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << x << "\n";
#else
#define dbg(x)
#endif

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    long long n;
    cin >> n;

    long long a, b;

    a = n / 2;
    b = n - a;

    while (isPrime(a) || isPrime(b))
    {
        a--;
        b++;
    }

    cout << a << " " << b << "\n";
}

int main()
{
    FAST_IO;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}