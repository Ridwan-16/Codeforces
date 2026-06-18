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

    long long x, y;
    cin >> x >> y;

    long long mx = max(x, y);

    long long roll = 6 - mx + 1;

    long long prob = (roll + 6 - 1) / 6;

    if (roll % 6 == 0 && 6 % 6 == 0)
    {
        cout << roll / 6 << "/" << 6 / 6 << endl;
    }
    else if (roll % 3 == 0 && 6 % 3 == 0)
    {
        cout << roll / 3 << "/" << 6 / 3 << endl;
    }
    else if (roll % 2 == 0 && 6 % 2 == 0)
    {
        cout << roll / 2 << "/" << 6 / 2 << endl;
    }
    else
    {
        cout << roll << "/" << 6 << endl;
    }
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