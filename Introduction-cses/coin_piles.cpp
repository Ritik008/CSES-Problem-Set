 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
 using namespace std;
 
 
 int32_t main() {
 	int t;
 	cin >> t;
 	while(t--) {
 		int a, b;
		 cin >> a >> b;
		 
		 int m = min(a, b);
		 int diff = abs(a - b);
		 m -= diff;
		 if(m == 0 || (m > 0 && m % 3 == 0)) {
		 	cout << "YES" << endl;
		 }else {
		 	cout << "NO" << endl;
		 }
	}
 	
 	return 0;
 }
