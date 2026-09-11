#include <iostream>
#include <vector>
#include<string>
using namespace std;
const int diff[5] = {0,-1,0,1,0};
void dfs(int R, int C, vector<string> &flat, int row, int col){
	flat[R][C] = '#';
	for(int i=0; i<4; i++){
		int dr = R+diff[i], dc = C+diff[i+1];
		if(dr>=0 && dr<row && dc>=0 && dc<col && (flat[dr][dc] == '.')){
			dfs(dr, dc, flat, row, col);
		}
	}
}
int main(){
	int row, col; cin >> row >> col;
	vector<string> flat(row);
	for(int R=0;R<row; R++){
		cin >> flat[R];
	}
	int room = 0;
	for(int R=0; R<row; R++){
		for(int C=0; C<col; C++){
			if(flat[R][C] == '.'){
				room += 1;
				dfs(R, C, flat, row, col); 
			}
		}
	}
	cout << room << endl;
}