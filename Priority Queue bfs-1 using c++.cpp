                              /* Priority Queue bfs-1 using c++ */ 
#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;

int main(){
	int R; cin >> R;
	map< int, vector<pair<int,int>>> g;
	set<int> vis;
	while(R--){
		int src, dest, dist; cin >> src >> dest >> dist;
		g[src].push_back(make_pair(dest, dist));
		g[dest].push_back(make_pair(src, dist));
	}
	int st, end; cin >> st >> end;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push(make_pair(0, st));
	
	while(!pq.empty()){
		auto[dist, currCity] = pq.top();pq.pop();
		if(!vis.contains(currCity)){
			vis.insert(currCity);
			if(currCity == end){
				cout << dist << endl;
				exit(0);
			}
			for(auto[ocity, odist] : g[currCity]){
				if(!vis.contains(ocity)){ 
					pq.push(make_pair(dist+odist, ocity));
				}
			}
		}
	}
	cout << "City " << end << " cannot be reached from City " << st << endl;
}