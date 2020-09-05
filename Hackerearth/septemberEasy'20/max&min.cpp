#include<bits/stdc++.h>  
#define ll long long int
using namespace std;  
  
// The first least significant set bit is same for the nodes on the same level. 
// For example: 1st set LSB of nodes at level 0 (1,3,5,7) is 1st bit, 1st set LSB of nodes at level 1 (2,6,10,14) is 2nd bit. 
// To get minimum and maximum you just have to subtract and add number 1 less than pow(2, least significant set bit) respectively.


void solve(){
    ll n; cin >> n;
    ll t = 1;
    ll num = n;
    while(n%2==0){
        n /= 2;
        t = t*2;
    }
    cout << num - (t-1) << " " << num + (t-1) << endl;
}
 
int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}