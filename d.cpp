//D
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n,m;
        cin >> n>> m;
        vector<vector<char>> a(n,vector<char> (m));
        for(ll i = 0;i < n; ++i){
            for(ll j = 0;j < m; ++j){
                cin >> a[i][j];
            }
        }
        ll x1,y1;
        bool fg = false;
        for(ll i = 0;i < n; ++i){
            for(ll j= 0;j < m; ++j){
                if(a[i][j] == '#'){
                    x1 = i;
                    y1 = j;
                    fg = true;
                    break;
                }
            }
            if(fg) break;
        }
        ll x2;
        for(ll i = 0;i < n; ++i){
            if(a[i][y1] == '#') x2 = i;
        }
        ll y2,x;
        fg = false;
        for(ll i = 0;i < m; ++i){
            for(ll j = 0;j < n; ++j){
                if(a[j][i] == '#'){
                    y2 = j;
                    x = i;
                    fg = true;
                    break;
                }
            }
            if(fg) break;
        }
        y1=0;
        for(ll i = 0;i < m; ++i){
            if(a[y2][i] == '#') y1 = i;
        }
        cout << ((x1+x2)/2) + 1 << " " << ((y1+x)/2) + 1 << endl;
    }
    return 0;
}
