 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
 using namespace std;
 
 
 int32_t main() {
	
	string s;
	cin >> s; 	
 	unordered_map<char, int> freq;
	int oddCount = 0;
	char mid = ' ';
	for(char ch: s) {
		++freq[ch];
	}
	
	for(auto c: freq) {
		if((c.second & 1) == 1) {
			oddCount++;
			mid = c.first;
		}
		if(oddCount > 1) {
		cout << "NO SOLUTION" << endl;
		return 0;
		}
	}

	string firstHalf = "", secondHalf = "";
	
	for(auto c: freq) {
		string s(c.second >> 1, c.first);
		firstHalf += s;
		secondHalf = s + secondHalf;
	}
	
	if(oddCount == 1) cout << firstHalf + mid + secondHalf << endl;
	else cout << firstHalf + secondHalf << endl;
 	
	
	return 0;
 }
