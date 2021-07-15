 #include<bits/stdc++.h>
 
 #define int long long int
 #define endl "\n"
 
 using namespace std;
 
 int32_t main() {
 	int n;
 	cin >> n;
 	vector<int> v(n);
 	for(int i = 0; i < n; i++) v[i] = i + 1;
 	
 	while(v.size() > 1) {
 		vector<int> x;
		for(int i = 0; i < v.size(); i++) {
			if(i % 2 == 1) {
				cout << v[i] << " ";
			}else {
				x.push_back(v[i]);
			}
		}
		if(v.size() % 2 == 0) {
			v = x;
		}else {
			int start = x.back();
			x.pop_back();
			v.clear();
			v.push_back(start);
			for(int z: x) {
				v.push_back(z);
			}
		}
	}
	cout << v[0];
 	
 	return 0;
 }
