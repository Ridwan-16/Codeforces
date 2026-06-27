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

    ll n, k, sum = 0;
    cin >> n >> k;

    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        sum += x;
    }

    if (sum & 1) cout << "YES" << endl;
    else if (sum % 2 == 0 && k*n % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}