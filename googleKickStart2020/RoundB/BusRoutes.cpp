#include<iostream>
#define ll long long int 

using namespace std;

int main(){
    int t, tc = 0; cin >> t;
    while(t--){
        tc++;
        ll n,d;
        cin >> n >> d;
        ll* arr = new ll[n];
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }
        ll temp = d;
        for(ll i = n-1; i >= 0; i--){
            temp -= temp%arr[i];
        }
        cout << "Case #" << tc <<": " << temp <<endl;
    }
}