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

    ll n,mx = 0,onemax = 0,onemin = 0;
    cin>>n;

    string arr;
    cin>>arr;

    for(ll i = 1;i < n - 1;i++){

        if(arr[i - 1] == '1' && arr[i + 1] == '1') arr[i] = '1';
    }

    for (auto &&i : arr)
    {
        if(i == '1') onemax++;
    }

    for(ll i = 1;i < n - 1;i++){

        if(arr[i - 1] == '1' && arr[i + 1] == '1') arr[i] = '0';
    }

    for (auto &&i : arr)
    {
        if(i == '1') onemin++;
    }

    cout<<onemin<<" "<<onemax<<endl;
    
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