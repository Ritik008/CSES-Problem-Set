 #include<bits/stdc++.h>
 
using namespace std;
 
 
int main() {
	string s;
	cin >> s;
	int ans = 1;
	int temp = 1;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == s[i + 1]) {
			temp++;
		}else {
			temp = 1;
		}
		ans = max(ans, temp);
	}
	cout << ans;
		
	return 0;
}
