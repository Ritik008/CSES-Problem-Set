 #include<bits/stdc++.h>
 
using namespace std;
 
 
int main() {
	long n, a;
	cin >> n;
	long sum = 0;
	for(int i = 0; i < n - 1; i++) {
		cin >> a;
		sum += a;
	}
	n = n * (n + 1) / 2;
	cout << n - sum;
	return 0;
}
