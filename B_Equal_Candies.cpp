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
    long long n,sum = 0;
    cin >> n;

    vector<long long> arr(n);

    for (auto &&i : arr) cin >> i;

    sort(arr.begin(), arr.end());

    for (long long i = 1; i < n; i++)
    {
        if (arr[i] > arr[0]) sum += arr[i] - arr[0];
    }

    cout << sum <<"\n";
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