 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
 using namespace std;
 
 
 int32_t main() {
 	int n;
 	cin >> n;
 	vector<int> v;
 	int a;
	for(int i = 0; i < n; i++) {
 		cin >> a;
 		v.push_back(a);
	}
	int msf = INT_MIN;
	int mtn = 0;
	int me = INT_MIN;
	for(int i = 0; i < n; i++) {
		mtn += v[i];
		if(mtn < 0) {
			mtn = 0;
		}
		if(mtn > msf) {
			msf = mtn;
		}
		if(v[i] > me) {
			me = v[i];
		}
	}
	if(msf == 0) {
		cout << me;
	}else {
		cout << msf;
	}
	 	
 	return 0;
 }
  
