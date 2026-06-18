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

    long long n, sumEven = 0, sumOdd = 0, e = 2, o = 1;

    cin >> n;

    vector<long long> arr;

    for (long long i = 0; i < n / 2; i++)
    {
        arr.push_back(e);
        sumEven += e;
        e += 2;
    }
    for (long long i = 0; i < (n / 2) - 1; i++)
    {
        arr.push_back(o);
        sumOdd += o;
        o += 2;
    }

    arr.push_back(sumEven - sumOdd);

    if (arr[n - 1] & 1)
    {
        cout << "YES\n";
        for (auto &&i : arr) cout << i << " ";

        cout << "\n";
    }
    else
    {
        cout << "NO\n";
    }
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