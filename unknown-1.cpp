#include <iostream>
#include <vector>
#include <queue>
#define ll unsigned long long
using namespace std;
int main(){
	int R, C, K; cin >> R >> C >> K;
	vector<int> g(R);
	for(int row = 0; row<R; row++) cin >> g[i];
	vector<bool> br(R, false), bc(C,false);
	for(int row = 0; row<R; row++){
		for(int col = 0; col<C; col++){
			if(g[row][col] == '#'){
				br[row] = true; bc[col] = true;
			}
		}
	}
	queue<int> q;
	vector<vector<bool>> vis(R, vector<bool>(C, false));
	for(int row = 0; row<R; row++){
		for(int col =0; col<C; Col++){
			if(!br[row] && !bc[col]){
				q.push(make_pair(row, col));
				vis[row][col] = true;
			}
		}
	}
	const int diff[5] = {0, 1, 0, -1, 0};
	int cellcntr = 0;
	while(!q.empty() && hops <= K){
		int qsize = q.size();
		cellcntr += qsize;
		while(qsize--){
			auto[row, col] = q.front();q.pop();
			for(int i=0; i<4; i++){
				int dr = row+diff[i], dc = col+diff[i+1];
				if(dr>=0 && dr<R && dc>=0 && dc<C && !vis[dr][dc] && g[dr][dc] == '.'){
					q.push(make_pair(dr, dc));
					vis[dr][dc] = true;
				}
			}
		}
	}
	cout << cellcntr << endl;
}