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

// we just calculate the maximum distance between "R"
int main() {
    w(t){
        string s; cin >> s;
        vi v;
        v.pb(0);
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] == 'R'){
                v.pb(i+1);
            }
        }
        v.pb(n+1);
        int ans = 0;
        for(int i = 0; i < v.size() - 1; i++){
            ans = max(ans, v[i+1]- v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}