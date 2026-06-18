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

    long long n;
    cin >> n;
    vll a(n); 
    vll b(n);
    long long sum = 0, maxa = -1e9, maxb = -1e9;

    for (auto &&i : a) cin >> i;
    for (auto &&i : b) cin >> i;

    for (ll i = 0; i < a.size(); i++)
    {
        if(a[i] > b[i]) swap(a[i],b[i]);
    }
    for (long long i = 0; i < a.size(); i++)
    {
        maxa = max(a[i], maxa);
        sum += b[i];
    }
    

    sum += maxa;

    cout << sum << endl;
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