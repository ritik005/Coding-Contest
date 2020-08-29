#include<iostream>
#define ll long long int
using namespace std;

int main(){
    ll n; cin >> n;
   ll* arr = new ll[n+1];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    ll q; cin >> q;
    while(q--){
        int no;
        cin >> no;
        if(no == 1){
            ll l,r,x;
            cin >> l >> r >> x;
            for(ll i = l; i <= r; i++){
                arr[i] = arr[i] + x;
            }
        }
        else if(no == 2){
            ll l,r,y;
            cin >> l >> r >> y;
            for(ll i = l; i <= r; i++){
                arr[i] = arr[i] * y;
            }
        }
        else if(no == 3) {
            ll z;
            cin >> z;
            int a = -1, b = -1;
            for(int i = 1; i <= n; i++){
                if(arr[i] == z) {
                    a = i;
                    break;
                }
            }
            for(int i = n; i > 0; i--){
                if(arr[i] == z) {
                    b = i;
                    break;
                }
            }
           if(a == -1 || b == -1){
               cout << -1 << endl;
           }
           else {
               cout << (b-a+1) << endl;
           }
        }
    }
}