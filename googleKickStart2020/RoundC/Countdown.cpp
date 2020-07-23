#include<iostream>

using namespace std;

int main(){
    int t,tc = 0;
    cin >> t;
    while(t--){
        tc++;
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++ ){
            cin >> arr[i];
        }
        int ans = 0, currentAns = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] == arr[i-1] - 1){
                currentAns += 1;
            } else {
                currentAns = 0;
            }
            if(arr[i] == 1 && currentAns >= k-1){
                ans += 1;
            }
        }
        cout << "Case " << "#" << tc << ": " << ans << endl;
    }
}