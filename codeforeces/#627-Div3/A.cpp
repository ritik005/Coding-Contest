#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int cd[2] = {};
        // We check the parity of each element
        for(int i = 0; i < n; i++){
            cd[arr[i]%2]++;
        }
        //if the parity is same then YES else NO
        if(cd[0] && cd[1]){
            cout << "NO" << endl;
        } else{
            cout << "YES" << endl;
        }
    }
    return 0;
}