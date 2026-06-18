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

    long long a, b, c;
    cin >> a >> b >> c;

    // if ((a + b + c) % 2 ? cout << "First\n" : cout << "Second\n");

    // if (c & 1 && (a + b) & 1 || c % 2 == 0 && (a + b) % 2 == 0) cout<<"Second\n";

    // else cout<<"First\n";

    if(a > b) cout << "First\n";
    else if (b > a) cout << "Second\n";
    else if(a == b && c & 1) cout << "First\n";
    else cout << "Second\n";
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