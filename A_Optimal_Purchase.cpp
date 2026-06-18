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

    long long n, a, b, onep, threep,temp;
    cin >> n >> a >> b;

    onep = n * a;

    temp = ((n + 3 - 1)/ 3) * b;

    if (n > 3) threep = ((n / 3) * b) + (n - (n / 3) * 3) * a;
    else threep = b;


    cout << min({onep, threep, temp}) << endl;
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