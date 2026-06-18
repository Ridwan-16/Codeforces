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

    long long n, sum = 0, mn = 1e9, mx = -1e9;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        mn = min(x, mn);
        mx = max(x, mx);
    }

    cout << ((mx + mn) + 2 - 1) / 2 - mn << endl;
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