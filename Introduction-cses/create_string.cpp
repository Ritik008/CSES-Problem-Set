 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
	
 using namespace std;

 int32_t main() {
 	string s;
 	cin >> s;
	 
	sort(s.begin(), s.end());
	vector<string> ans;
	do {
		ans.push_back(s);
	} while(next_permutation(s.begin(), s.end()));	

	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}
	
	return 0;
 }
