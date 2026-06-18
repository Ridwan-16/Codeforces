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

    ll n, sum = 0;
    cin >> n;

    vll arr(n);

    for (auto &&i : arr)
    {
        cin >> i;
    }

    sort(arr.begin(), arr.end());

    for (auto &&i : arr)
    {
        sum += arr[n - 1] - i;
    }

    cout << sum << endl;
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