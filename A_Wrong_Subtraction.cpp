#include <bits/stdc++.h>
using namespace std;

#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define endl "\n"
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

    ll n, k;
    cin >> n >> k;

    while (k > 0)
    {

        if (n % 10)
        {
            ll op = n % 10;

            if (op >= k)
            {
                n -= k;
                k = 0;
            }
            else
            {
                k -= op;
                n -= op;
            }
        }
        else
        {
            n /= 10;
            k--;
        }
    }

    cout << n << endl;
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