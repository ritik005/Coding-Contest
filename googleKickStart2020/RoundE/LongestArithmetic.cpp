#include<iostream>
#include<cmath>
#define ll long long int

using namespace std;

int main(){
    int t,tc = 0;
    cin >> t;
    while(t--){
        tc++;
        ll n;
        cin >> n;
        ll* arr = new ll[n];
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }
        ll curlen = 2;
        ll maxlen = 2;
        ll cursum = arr[0] - arr[1];
        for(ll i = 1; i < n-1; i++){
            if(arr[i]-arr[i+1] == cursum){
                curlen++;
            } else{
                curlen = 2;
                cursum = arr[i] - arr[i+1];
            }
            maxlen = max(maxlen,curlen);
        }
        cout << "Case " << "#" << tc << ": " << maxlen << endl;
    }
}