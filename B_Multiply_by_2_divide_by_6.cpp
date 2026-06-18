#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vi = vector<int>;
using vll = vector<ll>;

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define sz(x) (int)(x).size()

#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define per(i,a,b) for(int i=(a); i>=(b); i--)

#define yes cout << "YES\n"
#define no cout << "NO\n"

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << x << '\n'
#else
#define dbg(x)
#endif

ll gcdll(ll a, ll b) {
    while(b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcmll(ll a, ll b) {
    return a / gcdll(a, b) * b;
}

ll modpow(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    a %= mod;
    while(b) {
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

template<typename T>
void read(vector<T>& v) {
    for(auto &x : v) cin >> x;
}

template<typename T>
void print(const vector<T>& v) {
    for(auto x : v) cout << x << ' ';
    cout << '\n';
}

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void solve() {
    vll arr(3);

    read(arr);

    print(arr);
}

int main() {
    FAST_IO;

    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}