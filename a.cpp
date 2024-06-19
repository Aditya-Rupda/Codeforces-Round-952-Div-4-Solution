//A
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--){
        string a,b;
        cin >> a>> b;
        swap(a[0],b[0]);
        cout << a << " " << b << endl;
    }
    return 0;
}
