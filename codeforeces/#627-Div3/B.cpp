#include<bits/stdc++.h>
#include<cmath>

using namespace std;

#define ff              first
#define ss              second
#define pb              push_back
#define mp              make_pair
#define pii             pair<int, int>
#define vi              vector<int>
#define mii             map<int, int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int, vi, greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr = new type[n];
#define w(x)            int x; cin>>x; while(x--)

int main() {
    w(t){
        int n; cin >> n;
        mk(arr,n+1,int);
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }
        map<int, vi> p;
        //frequency == 3
        string ans = "NO";
        // we store the indices of each element
        for(int i = 1; i <= n; i++){
            p[arr[i]].pb(i);
        }
        for(auto jk : p){
            if(jk.ss.size() >= 3)
            {
                ans = "YES";
                break;
            }
        }
        for(auto jk : p){
            if(jk.ss.size() == 2 && jk.ss[0] != jk.ss[1] -1)  // Means they are not adjacent
            {
                ans = "YES";
                break;
            } 
        }
        cout << ans << endl;
    }
    return 0;
}