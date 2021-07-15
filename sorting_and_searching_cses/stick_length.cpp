 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
 using namespace std;
 
 int32_t main() {
 	
 	int n;
 	cin >> n;
 	vector<int> arr;
 	int a;
 	for(int i = 0; i < n; i++) {
 		cin >> a;
		arr.push_back(a);	
	}
	
	sort(arr.begin(), arr.end());
	
	int mid = arr.size() / 2;
	
	int ans = 0;
	for(int i = 0; i < n; i++) {
		ans += abs(arr[mid] - arr[i]);
	}
	cout << ans;
 	
 	return 0;
 }
