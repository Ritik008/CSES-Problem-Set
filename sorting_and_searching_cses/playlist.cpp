 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
 using namespace std;
 
 int32_t main() {
 	
 	int n;
 	cin >> n;
 	vector<int> v(n);
 	
 	for(int i = 0; i < n; i++) {
 		cin >> v[i];
	 }
	 
	map<int, bool> m;
	int ans = INT_MIN;
	int curr_ans = 0;
	int j = 0;
	for(int i = 0; i < n; i++) {
		if(m.find(v[i]) == m.end() || m[v[i]] == false) {
			m[v[i]] = true;
			curr_ans++;
			ans = max(curr_ans, ans);
		}else {
			while(v[j] != v[i]) {
				m[v[j]] = false;
				j++;
			}
			curr_ans = i - j;
			j++;
		}
	}  
 	
 	cout << ans << endl;
 	return 0;
 }
