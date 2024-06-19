//E
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ll t; cin >> t;
    while(t--){
        ll x, y, z, K, ans = 0;
        cin >> x >> y >> z >> K;
        ll mx = 0;
        for (ll i = 1; i <= x; i++){
            for (ll j = 1; j <= y; j++){
                if (K % (i * j) == 0){
                    ll k = K / (i * j);
                    if (k <= z){
                        mx = max((x - i + 1) * (y - j + 1) * (z - k + 1), mx);
                    }
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}
