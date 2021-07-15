 #include<bits/stdc++.h>
 #define endl "\n"
 #define int long long int
 using namespace std;
 
 int32_t main() {
 	
 	int n;
 	cin >> n;
	vector<pair<int, int>> v;
 	int a, b;
	for(int i = 0; i < n; i++) {
 		cin >> a >> b;
 		v.push_back({a, 1});
 		v.push_back({b, -1});
	}
	
	sort(v.begin(), v.end());
	
	int ans = INT_MIN;
	int sum = 0;
	for(int i = 0; i < v.size(); i++) {
		sum += v[i].second;
		ans = max(sum, ans);
	}
	cout << ans;
	
 	
 	return 0;
 }
