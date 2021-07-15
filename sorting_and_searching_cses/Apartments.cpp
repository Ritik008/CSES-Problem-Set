 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
 using namespace std;
 
 int32_t main() {
 	int n, m, k;
 	cin >> n >> m >> k;
 	
 	
	vector<int> applicants(n);
	vector<int> apartment(m);	
 	for(int i = 0; i < n; i++) cin >> applicants[i];
 	for(int i = 0; i < m; i++) cin >> apartment[i];
 	
 	sort(applicants.begin(), applicants.end());
 	sort(apartment.begin(), apartment.end());
 	
 	int i = 0;
 	int j = 0;
 	int match = 0;
 	while(i < n) {
 		while(j < m && apartment[j] < applicants[i] - k)
		 	j++;
		
		if(abs(apartment[j] - applicants[i]) <= k) {
			i++;
			j++;
			match++;
		} else {
			i++;
		}
	}
	cout << match << endl;
 		
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
