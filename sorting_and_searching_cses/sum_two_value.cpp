 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
 using namespace std;
 
 
 int32_t main() {
 	int n, x;
 	cin >> n >> x;
 	
 	vector<pair<int, int>> v;
 	int a;
 	for(int i = 0; i < n; i++) {
 		cin >> a;
		v.push_back({a, i});
	 }
	 
	sort(v.begin(), v.end());
	
	int i = 0;
	int j = n - 1;
	bool flag =  false;
	while(i < j) {
		int sum = v[i].first + v[j].first;
		if(sum == x) {
			cout << v[i].second + 1 <<" "<< v[j].second + 1;
			flag = true;
			break; 
		}else if(sum > x) {
			j--;
		}else {
			i++;
		}
	}
	if(!flag) cout << "IMPOSSIBLE" << endl;
	 	
 	return 0;
 }
 
