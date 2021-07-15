  #include<bits/stdc++.h>
 #define endl "\n"
 #define int long long int
 using namespace std;
 
 bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
 int32_t main() {
 	
 	int n, a, b;
 	vector<pair<int, int>> v;
 	cin >> n;
 	int ans = 1;
 	while(n--) {
 		cin >> a >> b; 	
 		v.push_back({a, b});
	}
	sort(v.begin(), v.end(), sortbysec);
	int temp = v[0].second;
	for(int i = 1; i < v.size(); i++) {
 		if(v[i].first >= temp) {
 			temp = v[i].second;
 			ans++;
		}
	}
	cout << ans << endl;
 	
 	return 0;
 }
