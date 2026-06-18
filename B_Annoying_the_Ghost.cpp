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

    long long n,mn = 0,mx = 0;
    cin >> n;

    vector<long long> arr1(n);
    vector<long long> arr2(n);

    for (auto &&i : arr1)
    {
         cin >> i;

    }
   
    for (auto &&i : arr2)
    {
        cin >> i;
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