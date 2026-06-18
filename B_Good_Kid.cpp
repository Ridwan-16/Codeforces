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
    long long n, mn = 1e9, mul = 1, id;
    cin >> n;

    vector<long long> arr(n);

    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        arr[i] = x;

        if (x < mn)
        {
            mn = x;
            id = i;
        }

        // if (x > 0) mul = mul * x;
        // // if(x == mn)

        // mn = min(mn, x);
    }

    arr[id]++;

    for (auto &&i : arr)
    {
        mul = mul * i;
    }

    // if (mn > 0) cout << (mul / mn) * (mn + 1) << "\n";
    // else
    cout << mul << "\n";
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