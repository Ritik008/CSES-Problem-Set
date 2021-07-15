 #include<bits/stdc++.h>
 
#define int long long int
#define endl "\n"
using namespace std;
 
 
int32_t main() {
	int n, ans = 0;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for(int i = 0; i < n - 1; i++) {
		if(arr[i + 1] < arr[i]) {
			int diff = arr[i] - arr[i + 1];
			arr[i + 1] = arr[i + 1] + diff;
			ans += diff;
		}
	}
	cout << ans;
		
	return 0;
}
