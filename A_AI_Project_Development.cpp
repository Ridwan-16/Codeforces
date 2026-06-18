#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
#define all(x) (x).begin(), (x).end()
#define rep(i,a,b) for (int i = (a); i < (b); i++)

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << x << "\n";
#else
#define dbg(x)
#endif

void solve() {
    long long n,x,y,z;

    cin>>n>>x>>y>>z;

    if(z>=n) cout<< (n + (x + y) - 1)/ (x + y)<<"\n";
    else {
        while (z!=0)
        {
            n -= x;
            z--;
        }
        cout<<(n + (x + y*10) - 1)/ (x + y*10)<<"\n";
        
    }
}

int main() {
    FAST_IO;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}