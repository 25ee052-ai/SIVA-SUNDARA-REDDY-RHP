#include<iostream>
#include<vector>
using namespace std;
int main(){
	int K; cin >> K;
	while(K--){
		int N, M; cin >> N >> M;
		vector<int> cnt(M+1, 0);
		for(int i=0; i<N; i++){
			int curr; cin>>curr;
			cnt[curr]++;
		}
		vector<int> psum(M+1, 0);
		for(int i=1; i<=M; i++){
			psum[i] = psum[i-1]+cnt[i];
		}
		int ans=0;
		for(int x=1; x<=M; x++){
			int cntcar = psum[M] - psum[x-1];
			if(x*2<=M){
				cntcar += cnt[x*2];
			}
			ans = max(ans, cntcar);
		}
		cout << ans << endl;
	}
}