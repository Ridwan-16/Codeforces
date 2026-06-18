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

void solve()
{
    long long n, count = 0;
    cin >> n;

    while (n > 0)
    {
        if (n >= 100)
        {
            if (n % 100 != 0)
            {
                count += n / 100;
                n = n % 100;
            }
            else
            {
                count += n / 100;
                n = 0;
            }
        }
        else if (n >= 20)
        {
            if (n % 20 != 0)
            {
                count += n / 20;
                n = n % 20;
            }
            else
            {
                count += n / 20;
                n = 0;
            }
        }
        else if (n >= 10)
        {
            if (n % 10 != 0)
            {
                count += n / 10;
                n = n % 10;
            }
            else
            {
                count += n / 10;
                n = 0;
            }
        }
        else if (n >= 5)
        {
            if (n % 5 != 0)
            {
                count += n / 5;
                n = n % 5;
            }
            else
            {
                count += n / 5;
                n = 0;
            }
        }
        else if (n >= 1)
        {
            count += n;
            n = 0;
        }
    }

    cout << count << endl;
}

int main()
{
    FAST_IO;
    int t = 1;
    // cin >> t
    while (t--)
    {
        solve();
    }
    return 0;
}