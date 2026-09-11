                     /*E - K-Divisible Subarrays*/

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
	int N, K; cin >> N >> K;
	vector<int> dp(N+1,0);
	map<int, int> m;
	m[0] = 0;
	int rem = 0;
	for(int i=1; i<=N; i++){
		int curr; cin >> curr;
		rem = (rem+curr)%K;
		if(m.find(rem) != m.end()){
			dp[i] = max(dp[i-1], dp[m[rem]]+1);
		}else{
			dp[i] = dp[i-1];
		}
		m[rem] = i;
	}
	cout << dp[N] << endl;
}