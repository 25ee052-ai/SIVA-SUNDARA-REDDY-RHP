#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
int find(vector <int>& ldr, int node){
	if(ldr[node]!= node){
		ldr[node] = find(ldr, ldr[node]);
	}
	return ldr[node];
}
void join(vector <int>& ldr, int lt, int rt){
	ldr[find(ldr, rt)] = find(ldr, lt);
}
int main(){
	int sum;
	int N, M; cin >> N >> M;
	vector <int> ldr(N+1);
	for(int node=0; node<N+1; node++){ldr[node] = node;}
	while(M--){
		int a, b; cin >> a >> b;
		join(ldr, a, b);
	}
	vector<int> cnt(N+1, 0), edge(N+1, 0);
	for(int node = 1; node<=N; node++){
		cnt[find(ldr, node)]++;
		if(ldr[node] == ldr[node+1]){edge[find(ldr, node)]++;}
	}
	for(int node=1; node<N; node++){
		if(cnt[node] != 0){
			int curr = ((1ll*cnt[node]*(cnt[node]-1))/2)-edge[node];
			sum += curr;
		}
	}
	cout << sum << endl;
}