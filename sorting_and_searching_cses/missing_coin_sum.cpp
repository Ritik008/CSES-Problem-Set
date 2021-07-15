 #include<bits/stdc++.h>
 #define endl "\n"
 #define int long long int
 
 using namespace std; 
 
 int32_t main() {
 	
 	int n;
	cin >> n;
	vector<int> arr;
	int x;
	for(int i = 0; i < n; i++) {
		cin >> x;
		arr.push_back(x);
	}
 	
 	sort(arr.begin(), arr.end());
 	int res = 1;
	for(int i = 0; i < n && arr[i] <= res; i++) {
 		res += arr[i];	
	}
	
	cout << res;
 	
 	return 0;
 }
