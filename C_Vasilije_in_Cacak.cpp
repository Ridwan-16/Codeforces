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
    long long n, k, x;
    cin >> n >> k >> x;

    long long min, total, max;

    min = k * (k + 1) / 2;
    total = n * (n + 1) / 2;
    max = total - (n - k) * (n - k + 1) / 2;

    if (x >= min && x <= max) cout<<"YES\n";
    else cout<<"NO\n";
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