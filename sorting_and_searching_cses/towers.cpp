 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
 using namespace std;
 
 int32_t main() {
 	
 	int n;
 	cin >> n;
 	vector<int> v(n);
 	
 	for(int i = 0; i < n; i++) cin >> v[i];
	
	multiset<int> x;
 	for(int i = 0; i < n; i++) {
 		auto it = x.upper_bound(v[i]);
 		if(it == x.end()) x.insert(v[i]);
 		else {
 			x.erase(it);
 			x.insert(v[i]);
		}
	}
	cout << x.size() << endl;
 	
 	return 0;
 }
