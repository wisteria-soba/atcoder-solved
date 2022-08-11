#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define REPR(i,n) for(ll i = n;i >= 0;--i)
#define FOR(i,m,n) for(ll i = m, i##_len=(n);i <i##_len; ++i)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll modinv(ll a, ll m) {ll b = m, u = 1, v = 0;while (b) {ll t = a / b;a -= t * b; swap(a, b);u -= t * v; swap(u, v);}u %= m;if (u < 0) u += m;return u;}
const int INF = 1e9;
const ll LLINF = 1e16;

vector<ll> createDivisorList(ll n)
{
    vector<ll> divisorList;
    for (ll i = 1; i * i <= n; i++)
    {
        if(n % i == 0){
            divisorList.push_back(i);
            if(i*i != n){
                divisorList.push_back(n / i);
            }
        }
    }
    return divisorList;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(0);
    ll n, m;
    cin >> n >> m;
    vector<ll> divisor_list = createDivisorList(m);
    sort(all(divisor_list),greater<ll>());
    REP(i,divisor_list.size()){
        if(m / divisor_list[i] >= n){
            cout << divisor_list[i] << endl;
            break;
        }
    }

    return 0;
}