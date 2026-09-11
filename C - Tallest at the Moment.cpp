#include <iostream>
#include <set>
#include <vector>

using namespace std;
int main(){
	int N; cin >> N;
	vector<pair<int,int>> arr(N);
	for(int i=0; i<N; i++){
		int ht, lt; cin >> ht >> lt;
		arr[i] = make_pair(ht, lt);
	}
	sort(arr.begin(), arr.end(), greater<>());
	int prev = 0;
	vector<int> htarr, ltarr;
	for(auto[hT, lT] : arr){
		if(lT>prev){
			prev = lT;
			ltarr.push_back(lT);
			htarr.push_back(hT);
		}
	}
	int Q; cin >> Q;
	while(Q--){
		int t; cin >> t;
		auto it = upper_bound(ltarr.begin(), ltarr.end(), t);
		int idx = it-ltarr.begin();
		cout << htarr[idx] << endl;
	}
	
}