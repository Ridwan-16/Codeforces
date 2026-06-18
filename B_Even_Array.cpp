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
    long long n, eCount = 0, oCount = 0;
    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        long long ai;
        cin >> ai;

        if (i % 2 == 0 && ai & 1) oCount++;
        else if (i & 1 && ai % 2 == 0) eCount++;
    }

    if (eCount != oCount) cout << -1 << "\n";
    else cout << (eCount + oCount) / 2 << "\n";
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