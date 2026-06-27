#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl "\n"
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

    string m = "Timur";

    sort(m.begin(),m.end());

    ll n;cin>>n;

    string s;cin>>s;

    if(n != m.size()) cout<<"NO"<<endl;
    else {
        sort(s.begin(),s.end());
        if(m == s) cout <<"YES"<<endl;
        else cout<<"NO"<<endl;
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