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
    long long n, a = 0, b = 0, f = 1, count = 1;
    cin >> n;

    vector<long long> arr(n);

    for (auto &&i : arr)
        cin >> i;

    while (n != f + 1)
    {
        if (arr[f - 1] > arr[n - f])
        {
            if (count & 1)
            {
                a += arr[f - 1];
                count++;
                f++;
            }
            else
            {
                b += arr[f - 1];
                count++;
                f++;
            }
        }
        else
        {

            if (arr[f - 1] < arr[n - f])
            {
                if (count & 1)
                {
                    a += arr[n - f];
                    count++;
                    n--;
                }
                else
                {
                    b += arr[n - f];
                    count++;
                    n--;
                }
            }
        }

        // sort(arr.begin(), arr.end());

        // if (n & 1)
        // {
        //     for (long long i = 1; i < n; i += 2)
        //     {
        //         a += arr[i - 1];
        //         b += arr[i];
        //     }

        //     a += arr[n - 1];
        // }
        // else
        // {

        //     for (long long i = 1; i <= n; i += 2)
        //     {
        //         a += arr[i];
        //         b += arr[i - 1];
        //     }
        // }

        cout << a << " " << b;
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