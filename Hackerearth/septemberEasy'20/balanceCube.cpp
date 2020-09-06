#include<iostream>
#define ll long long int 
using namespace std;
// we just need to divide the sugar cubes into 3 groups and repeat it untill its not further divided

int main(){
    ll n; cin >> n;
    ll res = 1,ctn=0;
    while(res < n){
        res *= 3;
        ctn++;
    }
    cout << ctn;
}