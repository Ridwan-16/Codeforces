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

    ll n,c,k;
    cin>>n>>c>>k;

    vector<ll> arr(n);

    for (auto &&i : arr)
    {
        cin>>i;
    }

    sort(arr.begin(),arr.end());

    for (ll i = 0; i < n; i++)
    {
        if(arr[i] <= c){
            
                // if(c - arr[i] <  0)break;
                ll mn = min(c - arr[i],k);
                k -= mn;
                c+= mn + arr[i];
                        
        }
    }
    
    

    cout<<c<<endl;
    
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