#include<iostream>

using namespace std;

int main() {
    int t, tc = 0;
    cin >> t;
    while(t--){
        tc++;
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int peekc = 0;
        for(int i = 1; i < n-1; i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                peekc++;
            }
        }
        cout << "Case " << "#" << tc << ": " << peekc << endl;
    }
    return 0;
}