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
    long long n, group, size;
    cin >> n;

    if (n / 1111 > 0)
    {
        group = n / 1111;
        size = 4;
    }
    else if (n / 111 > 0)
    {
        group = n / 111;
        size = 3;
    }
    else if (n / 11 > 0)
    {
        group = n / 11;
        size = 2;
    }
    else
    {
        group = n / 1;
        size = 1;
    }

    long long result = ((group - 1) * (4 * 5) / 2) + (size * (size + 1)) / 2;

    cout << result << "\n";
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