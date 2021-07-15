 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n" 
 using namespace std;
 
 int32_t main() {
	int n;
	cin >> n;
	int sum = 0;
	while(n) {
		n = n / 5;
		sum += n;
	}
	
	cout << sum << endl;
 	
 	return 0;
 }
 
