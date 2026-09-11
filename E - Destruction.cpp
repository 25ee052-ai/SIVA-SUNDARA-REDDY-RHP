#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
int find(vector<int>& ldr, int node){
	if(ldr[node]!= node){
		ldr[node] = find(ldr, ldr[node]);
	}
	return ldr[node];
}
void join(vector<int>& ldr, int lt, int rt){
	ldr[find(ldr, rt)] = find(ldr, lt);
}
int main(){
	int N, M; cin >> N >> M;
	vector <int> ldr(N+1);
	vector<pair<int,pair<int,int>>> edge;
	for(int node=0; node<N+1; node++){ldr[node] = node;}
	while(M--){
		int a, b, cost; cin >> a >> b >> cost;
		if(cost<=0){
			join(ldr, a, b);
		}else{
			edge.push_back(make_pair(cost, make_pair(a,b)));
		}
	}
	ll rewards = 0;
	for(auto[cost, p]: edge){
		int a = p.first, b = p.second;
		if(find(ldr, a) != find(ldr, b)){
			join(ldr, a, b);
		}
		else{
			rewards += cost;
		}
	}
	cout << rewards << endl;
}