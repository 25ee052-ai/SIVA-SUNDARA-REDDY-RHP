#include<iostream>
#include<vector>
using namespace std;
void solve(){
	int N; cin>>N;
	int oc=0;
	vector<int> arr(N);
	for(int i=0; i<N; i++){
		cin >> arr[i];
		oc += arr[i];
	}
	int zc = N-oc;
	if(zc<2){
		cout << -1 << endl; return;
	}
	int ans = 0;
	if(arr[0]) ans++;
	if(arr[N-1]) ans++;
	cout << ans << endl;
}
int main(){
	int T; cin >> T;
	while(T--){
		solve();
	}
}