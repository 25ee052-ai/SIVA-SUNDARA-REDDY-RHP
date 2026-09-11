#include <iostream>
#include <vector>
using namespace std;
int main(){
	int N; cin >> N;
	vector<int> a(N);
	for(int i=0; i<N; i++) cin >> a[i];
	
	sort(a.begin(), a.end());
	
	vector<int> ans;
	long long cf = 0;
	for(int ctr = 1; ctr <= a[N-1]; ctr++){
		auto it = lower_bound(a.begin(), a.end(), ctr);
		int cnt = a.end() - it;
		cf += cnt;
		ans.push_back(cf%10);
		cf = cf/10;
	}
	while(cf>0){
		ans.push_back(cf%10);
		cf = cf/10;
	}
	reverse(ans.begin(), ans.end());
	for(int d : ans) cout << d;
}