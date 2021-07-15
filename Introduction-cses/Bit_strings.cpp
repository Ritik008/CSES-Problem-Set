 #include<bits/stdc++.h>
 
 #define endl "\n"
 #define int long long int 
 #define pb push_back
 #define vi vector<int>
 using namespace std;
 
 const int MOD = 1000000007; 
 int32_t main() {
 	int n;
 	cin >> n;
 	int res = 1;
 	for(int i = 0; i < n; i++) {
 		res = (res * 2) % MOD;	
	}
	cout << res;
 	
 	return 0;
 }

