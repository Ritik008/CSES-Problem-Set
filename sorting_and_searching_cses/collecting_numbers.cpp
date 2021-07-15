 #include<bits/stdc++.h>
 #define endl "\n"
 #define int long long int
 using namespace std;
 
 
 int32_t main() {
 	
 	int n;
 	cin >> n;
 	vector<int> v;
	int a;
	for(int i = 0; i < n; i++) {
 		cin >> a;
 		a--;
 		v.push_back(a);
	}
	vector<int> pos(n);
	for(int i = 0; i < n; i++) {
		pos[v[i]] = i;
	}
	
	int matches = 1;
	for(int i = 1; i < n; i++) {
		matches += pos[i] < pos[i - 1];
	}
	
	cout << matches;
 	
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
