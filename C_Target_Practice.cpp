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

    // long long sum = 0, m = 1;

    // for (long long i = 1; i <= 10; i++)
    // {
    //     string s;
    //     cin >> s;

    //     long long x = 0;

    //     for (long long j = 0; j < s.size(); j++)
    //     {
    //         if (s[j] == 'X')
    //             x++;
    //     }

    //     if (i <= 5)
    //     {
    //         sum += x * i;
    //     }
    //     else
    //     {
    //         sum += x * (i - m);
    //         m += 2;
    //     }
    // }

    // cout << sum << endl;

    vector<vector<long long>> arr(10);

    for (long long i = 0; i < 10; i++)
    {
        string s;
        cin >> s;
        for (long long j = 0; j < 10; j++)
        {
            arr[i][j] = s[j];
        }
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