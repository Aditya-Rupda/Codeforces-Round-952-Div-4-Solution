//C
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> a(n);
        for(ll i = 0;i < n; ++i){
            cin >> a[i];
        }
        ll ans = 0,s = 0;
        multiset<ll> mst;
        for(ll i = 0;i < n; ++i){
            s += a[i];
            mst.insert(a[i]);
            if(i == 0 && s == 0) ans++;
            else{
                if(s - *mst.rbegin() == *mst.rbegin()) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
