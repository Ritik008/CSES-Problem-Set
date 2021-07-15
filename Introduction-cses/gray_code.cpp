  #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
 using namespace std;
 
 vector<string> x;
 vector<string> solve(int n) {
 	
 	if(n == 1) {
 		vector<string> p;
 		p.push_back("0");
 		p.push_back("1");
 		return p;
	 }
 	
 	vector<string> a = solve(n - 1);
 	vector<string> b;
	for(int i = 0; i < a.size(); i++) {
 		string s = a[i];
 		b.push_back("0"+s);
	}
	
	for(int i = a.size() - 1; i >= 0; i--) {
 		string s = a[i];
 		b.push_back("1"+s);
	}
	
	return b;
 }
 
 
 int32_t main() {
	int n;
	cin >> n;
	
	vector<string> v = solve(n);
	for(int i = 0; i < v.size(); i++) cout << v[i] << endl;
	return 0;
 }
