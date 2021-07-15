 #include<bits/stdc++.h>
 #define endl "\n"
 #define int long long int
 using namespace std;
 
 
 int32_t main() {
 	int n, m;
 	cin >> n >> m;
 	set<pair<int, int>> h;
 	vector<int> t(m);
	int a; 	
 	for(int i = 0; i < n; i++) {
		cin >> a;
		h.insert({a, i});
	 }
 	for(int i = 0; i < m; i++) cin >> t[i];
 		
 	for(int i = 0; i < m; i++) {
 		auto find = h.lower_bound({t[i] + 1, 0});
		
		if(find == h.begin()) {
			cout << -1 << endl;
		}else {
			find--;
			cout << (*find).first << endl;
			h.erase(find);
		}	
	}
 		
 	return 0;
 }
 
 
 
 
