#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	int T; cin >> T;
	while(T--){
		int N, K; cin >> N >> K;
		string s; cin >> s;
		int F = N/K;
		vector<int> own(F, false);
		for(unsigned int i=0; i<s.size(); i++){
			if(s[i] == '0'){
				int idx = i/K;
				own[idx] = true;
			}
		}
		int count = 0;
		for(int f=0; f<F; f++){
			if(!own[f]){
				count++;
			}
		}
		cout << count << endl;
	}
}