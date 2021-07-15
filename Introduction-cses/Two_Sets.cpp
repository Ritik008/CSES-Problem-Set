 #include<bits/stdc++.h>
 #define endl "\n"
 #define int long long int 
 #define pb push_back
 #define vi vector<int>
 using namespace std;
 
 
 
 int32_t main() {
 	int n;
 	cin >> n;
 	int sum = n * (n + 1) / 2;
 	vi v1;
 	vi v2;
 	if((sum & 1) == 0) {
 		cout << "YES" << endl;
 		if((n & 1 == 1)) {
 			v1.pb(n);
			n--;	
		}
 		bool flag = false;
 		int x = n;
 		for(int i = 1; i <= n / 2; i++, x--) {
 			if(flag) {
				v1.pb(i);
				v1.pb(x);
				flag = false; 					
			}else {
				v2.pb(i);
				v2.pb(x);
				flag = true;
			}
		 }
		 cout << v1.size() << endl;
		 for(int i = 0; i < v1.size(); i++) {
		 	cout << v1[i] << " ";
		 }
		 cout << endl;
		 cout << v2.size() << endl; 
		 for(int i = 0; i < v2.size(); i++) {
		 	cout << v2[i] << " ";
		 }
	 }else {
	 	cout << "NO" << endl;
	 }
 	
 	return 0;
 }

