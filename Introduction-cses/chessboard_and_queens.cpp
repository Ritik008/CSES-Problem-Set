 #include<bits/stdc++.h>
 #define int long long int
 #define endl "\n"
 using namespace std;
 
 
 char board[8][8];
 int x = 0;
 bool isValid(int row, int col) {
 	if(board[row][col] == '*') return false;
 	for(int i = 0; i < 8; i++) 
 		if(board[i][col] == 'Q') 
		 	return false;

	int i = row;
	int j = col;
	while(i >= 0 && j >= 0) {
		if(board[i][j] == 'Q') {
			return false;
		}
		i--;
		j--;
	}
	
	i = row;
	j = col;
	while(i >= 0 && j < 8) {
		if(board[i][j] == 'Q') {
			return false;
		}
		i--;
		j++;
	}
	
	return true;
 }
 
 void solve(int row) {
 	if(row == 8) {
 		x++;
 		return;
	 } 
	 for(int i = 0; i < 8; i++) {
	 	if(isValid(row, i)) {
	 		board[row][i] = 'Q';
			solve(row + 1);
			board[row][i] = '.';	
		}
	 }
 }
 
 int32_t main() {
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++) {
			cin >> board[i][j];
		}
	}
 	solve(0);
 	cout << x;
 	return 0;
 }
