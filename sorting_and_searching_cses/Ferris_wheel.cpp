 #include<bits/stdc++.h>
 #define endl "\n"
 #define int long long int
 using namespace std;
 
 int32_t main() {
 	int n, x;
 	cin >> n >> x;
 	vector<int> p(n);
 	for(int i = 0; i < n; i++) cin >> p[i];
 	
 	sort(p.begin(), p.end());
 	int i = 0;
 	int j = n - 1;
 	int ans = 0;
 	while(i <= j) {
 		if(p[i] + p[j] > x) {
 			j--;
		 }else {
		 	i++;
		 	j--;
		 }
		 ans++;
	}
 	cout << ans << endl;
 	return 0;
 }
 
