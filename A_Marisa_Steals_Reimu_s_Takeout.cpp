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

    long long n, cont = 0, sum = 0,cont1 = 0,cont2 = 0;
    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        if (x == 0) cont++;
        else if (x == 1) cont1++;
        else if (x == 2) cont2++;
    
    }
    
    
    while (cont1 > 0 && cont2 > 0)
    {
        cont1--;
        cont2--;
        
        cont++;
    }
    
    if(cont1 == 0) cont+= cont2 / 3;
    if(cont2 == 0) cont+= cont1 / 3;

    

    cout << cont << endl;
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