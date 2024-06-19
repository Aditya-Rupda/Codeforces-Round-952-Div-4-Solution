//B
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n,mx = 0; cin >> n;
        ll ans;
        for(ll i = 2;i <= n; ++i){
            ll s = 0;
            for(ll j = i;j <= n; j += i){
                s += j;
            }
            if(s > mx){
                mx = s;
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
