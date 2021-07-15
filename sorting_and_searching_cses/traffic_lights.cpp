 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
 using namespace std;
 
 
 int32_t main() {
 	int x, n;
 	cin >> x >> n;
 	vector<int> v(n);
 	
 	for(int i = 0; i < n; i++) cin >> v[i];
 	
 	set<int> arr;
 	multiset<int> values;
 	arr.insert(0);
 	arr.insert(x);
 	values.insert(x - 0);
 	
 	for(int i = 0; i < n; i++) {
 		arr.insert(v[i]);
		auto itr = arr.find(v[i]);
		int prevVal = *prev(itr);	
		int nextVal = *next(itr);	
		
		values.erase(values.find(nextVal - prevVal));
		values.insert(v[i] - prevVal);
		values.insert(nextVal - v[i]);
		cout << *values.rbegin() << " ";
	}
 	
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
