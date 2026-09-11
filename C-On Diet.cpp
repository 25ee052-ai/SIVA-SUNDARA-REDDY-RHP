                          /* At Coder C-On Diet*/
#include <iostream>
#include <vector>
#define ll unsigned long long int
using namespace std;
int main(){
	int N, M; ll K; cin >> N >> M >> K;
	vector<int> arr(N);
	vector<bool> eaten(N, false);
	for(int i=0; i<N; i++) cin >> arr[i];
	ll curr = 0;
	for(int i=0; i<N; i++){
		if(i>=M){
			if(eaten[i-M]){
				curr -= eaten[i-M];
			}
		}
		if(curr+arr[i] <= K){
			cout << "Yes" << endl;
			curr += arr[i];
			eaten[i] = true;
		}
		else{
			cout << "No" << endl;
		}
	}
}