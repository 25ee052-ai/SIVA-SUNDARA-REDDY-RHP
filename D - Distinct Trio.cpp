#include <iostream>
#include <vector>
#define ll long long int

using namespace std;
int main(){
	int N; cin >> N;
	vector<int> arr(N);
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	ll sum = 0;
	for(int i=1; i<N-1; i++){
		auto htit = upper_bound(arr.begin(), arr.end(), arr[i]);
		int maidx = arr.end()-htit;
		auto ltit = lower_bound(arr.begin(), arr.end(), arr[i]);
		int miidx = ltit-arr.begin();
		sum += (1ll*miidx*maidx);
	}
	cout << sum << endl;
}