 #include<bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;
 
 
int32_t main() {
	
	int t, a, b;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		if(a < b) {
			if(b % 2 == 0) {
				cout << ((b - 1) * (b - 1) + 1) + a - 1 << endl; 
			}else {
				cout << (b * b) - a + 1 << endl;
			}
		}else {
			if(a % 2 == 1) {
				cout << ((a - 1) * (a - 1) + 1) + b - 1 << endl; 
			}else {
				cout << (a * a) - b + 1 << endl;
			}
		}
	}
		
	return 0;
}
