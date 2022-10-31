#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define MOD 1000000007
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
bool cmp(const pair<ll,ll> &a,
               const pair<ll,ll> &b)
{
    return (a.first < b.first);
}
void solve(){
   


     }


int main() {

#ifndef ONLINE_JUDGE
    freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    freopen("Error.txt","w",stderr);
#endif
    auto start1=chrono::high_resolution_clock::now();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    auto stop1=chrono::high_resolution_clock::now();
    auto duration= chrono::duration_cast<chrono::microseconds>(stop1-start1);
#ifndef ONLINE_JUDGE
    cerr<<"Time: "<<duration.count()/1000<<endl;
#endif
    return 0;
}
