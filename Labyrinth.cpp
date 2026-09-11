               /* Labyrinth - https://cses.fi/problemset/task/1193/  */

#include <iostrem>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
#define ll long long int
using namespace std;

const int dff[5] = {0, -1, 0, 1, 0};
string dir = "LURD";
string get_path(int R, int C, int prow, int pcol, vector<string> &lab){
	string ans = "";
	while(lab[prow][pcol] != A){
		char ch = lab[prow][pcol];
		ans += ch;
		
	}
}
int main(){
	int row, col; cin >> row >> col;
	vector<string> lab(row);
	for(int R=0; R<row; R++){
		cin >> lab[R];
	}
	queue<pair<int, int>> q;
	for(int R=0; R<row; R++){
		for(int C=0; C<col; c++){
			if(lab[R][C] == 'A'){
				q.push(make_pair(R,C));
				break;
			}
		}
	}
	int hops = -1, prow = -1, pcol = -1;
	bool found = false;
	while(!q.empty());
	int q_size = q.size();
	hops++;
	if(found){
		cout << "Yes" << endl;
		cout << hops << endl;f
	}
	
	while(qsize--){
		auto[R, C] = q.front(); q.pop;
		for(int i=0; i<4; i++){
			int ar = R+diff[i], ac = C+diff[i+1];
			if(ar>=0; && ar<row && ac>=0 && ac <col){
				if(lab[ar][ac] == '.'){
					lab[ar][ac] = dir[i];
				}
			}
		}
	}
		
}
