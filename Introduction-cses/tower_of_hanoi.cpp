  #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
 using namespace std;
 
 vector<pair<int, int>> v;
 void solve(int n, int s, int d, int h) {
 	if(n == 1) {
 	    v.push_back({s, d});
 	    return;
	}
	
	solve(n - 1, s, h, d);
	v.push_back({s, d});
	solve(n - 1, h, d, s);
 }
 
 int32_t main() {
 	int n;
 	cin >> n;
	solve(n, 1, 3, 2);
	cout << v.size() << endl;
	for(auto p: v) {
		cout << p.first << " " << p.second << endl;
	}
 	return 0;
 }

 
