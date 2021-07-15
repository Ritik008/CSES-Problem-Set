 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
 using namespace std;
 
 int32_t main() {
 	int n;
 	cin >> n;
 	int arr[n];
 	for(int i = 0; i < n; i++) cin >> arr[i];
 	sort(arr, arr + n);
 	int count = 0;
 	for(int i = 0; i < n - 1; i++) {
 		if(arr[i] == arr[i + 1]) {
 			continue;
		 }else {
		 	count++;
		 }
	}
	cout << count + 1;
 	
 	return 0;
 }
