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

bool palindrome(long long x){
    string s = to_string(x);
    string flag = s;

    for (long long  i = 0; i < s.size(); i++)
    {
       s.push_back(s[s.size() - i]);
    }

    cout<<flag<<endl;
    
}

void solve() {
    long long n;
    cin>>n;

    for (long long i = 0; i < n; i+=12)
    {
        long long temp = n - i;

        // cout<<temp<<endl;

        palindrome(temp);
        
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