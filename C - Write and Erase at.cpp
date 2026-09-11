#include<iostream>
#include<map>
using namespace std;
int main(){
	int N; cin >> N;
	map<int, int> m;
	while(N--){
		int curr; cin >> curr;
		m[curr]++;
	}
	int ctr=0;
	for(auto[pos, val] : m){
		if(val&1){
			ctr++;
		}
	}
	cout << ctr << endl;
}