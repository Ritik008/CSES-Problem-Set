 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
	
 using namespace std;
	
 int solve(int arr[], int n, int sum, int currSum) {
	if(n == 0) 
		return abs(sum - 2 * currSum);
	
	
	return min(solve(arr, n - 1, sum, currSum + arr[n]), solve(arr, n - 1, sum, currSum));
 	
 }

 int32_t main() {
 	int n;
 	cin >> n;
 	int arr[n], sum = 0;
 	for(int i = 0; i < n; i++) 
 		cin >> arr[i], sum += arr[i];
	
 	
 	cout << solve(arr, n - 1, sum, 0) << endl;
	return 0;
 }
