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
const int INF = 1e9;
const ll LLINF = 1e16;
 
ll modinv(ll a, ll m) {
    ll b = m, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> ken(n+1);
    
    REP(i,m){
        int p, y;
        cin >> p >> y;
        ken[p].push_back(pair<int, int>(y, i));
    }

    FOR(i,1,ken.size()){
        sort(all(ken[i]));
    }

    vector<string> id(m);
    FOR(i,1,ken.size()){
        for (int j = 0; j < ken[i].size(); j++)
        {
            char tmp[13];
            sprintf(tmp, "%06d%06d", (int)i,j + 1);
            id[ken[i][j].second] = tmp;
        }
    }

    REP(i,id.size()){
        cout << id[i] << endl;
    }

    return 0;
}