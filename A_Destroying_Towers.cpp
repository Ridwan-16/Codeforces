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

    long long n,sum = 0;
    cin>>n;

    vector<long long> arr(n);

    for (auto &&i : arr) cin>>i;
    
    for (long long i = 0; i < n - 1; i++)
    {
        for (long long j = i+1; j < n; j++)
        {
            if(arr[i] < arr[j]) {
                
                arr[j] = arr[i];

            }
        }
        
    }

    for (auto &&i : arr)
    {
        sum+=i;
    }

    cout<<sum<<endl;
    
    
    
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