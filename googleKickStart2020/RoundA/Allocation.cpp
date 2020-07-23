#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int t,tc = 0;
    cin >> t;
    while(t--){
        tc++;
        int n, b;
        cin >> n >> b;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(b >= arr[i]){
                ans++;
                b = b - arr[i];
            }
        }
        cout << "Case " << "#" << tc << ": " << ans << endl;
    }
    return 0;
    
}