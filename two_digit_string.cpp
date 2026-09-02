#include<iostream>
#include<vector>
using namespace std;

void solve(){
	string a, b;
	cin >> a >> b;
	
	int n = a.length();
	int m = b.length();
	
	vector<int> pa(n+1,0);
	vector<int> pb(m+1,0);
	
	pa[0] =(a[0] - '0')%10;
	pb[0] = (b[0] - '0')%10;
	
	for(int i=1;i<n;i++){
		pa[i] = (pa[i-1]+(a[i]-'0'))%10;
	}
	for(int j = 1;j<m;j++){
		pb[j] = (pb[j-1] + (b[j] - '0'))%10;
	}
	
	if(pa[n-1] != pb[m-1]){
		cout << -1 << endl;
		return;
	}
	
	vector<vector<int>> dp(n,vector<int>(m,0));
	
	for(int i = 1;i<n;i++){
		for(int j = 1;j<m;j++){
			if(pa[i-1]==pb[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
				
			}else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	cout << dp[n-1][m-1]+1 << endl;
	
}

int main(){
	int t;cin >> t;
	while(t--){
		solve();
	}
	return 0;
}