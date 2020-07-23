#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int k = 1; k <=t; k++){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int ans = 0, nex = -1;
       for(int i = 0; i < n; i++){
           if(nex < arr[i] && (i+1 == n || arr[i] > arr[i+1])){
               ans++;
           } 
           if(nex < arr[i]){
               nex = arr[i];
           }
       }
       cout << "Case #" << k << ": " << ans << endl; 
    }
}