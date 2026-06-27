#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
#define all(x) (x).begin(), (x).end()
#define rep(i,a,b) for (int i = (a); i < (b); i++)
#define endl "\n"

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << x << "\n";
#else
#define dbg(x)
#endif

void solve() {

    long long n,count = 0;
    cin>>n;

    vector<long long> arr(n);
    // vector<long long> arr;

    for(auto &&i : arr) cin>>i;

    // for (ll i = 0; i < n; i++)
    // {
    //     ll x;cin>>x;
    //     arr.push_back(x);
    // }
    

    for (int i = n - 1; i > 0; i--)
    {
        if(arr[i] > 0) arr[i - 1] += arr[i]; 

    }

    for (auto &&i : arr)
    {
        if(i > 0) count++;
    }

    cout<< count <<endl;
    
    
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