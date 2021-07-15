 #include<bits/stdc++.h>
 
#define int long long int
#define endl "\n"
using namespace std;
 
 
int32_t main() {
	int n;
	cin >> n;
	if(n == 1) {
		cout << 1;
		return 0;
	}
	if(n <= 3) {
		cout << "NO SOLUTION";
		return 0;
	}
	
	for(int i = 1; i <= n; i++) {
		if((i & 1) == 0) {
			cout << i << " ";
		} 
	}
	
	for(int i = 1; i <= n; i++) {
		if((i & 1) == 1) {
			cout << i << " ";
		} 
	}
		
	return 0;
}
