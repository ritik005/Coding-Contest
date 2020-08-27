#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int ans = 0;
	    for(int i = 0; i < s.length(); i++){
	        if(s[i] == s[i+1]){
	            ans++;
	        }
	    }
	   if(ans == s.length() - 1) {
	       cout << -1 << endl;
	   } else {
	       sort(s.begin(), s.end());
	       cout << s << endl;
	   }
	}
	return 0;
}
