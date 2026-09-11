#include<iostream>
using namespace std;
int main(){
	int T; cin >> T;
	while(T--){
		int N;cin>>N;
		int odd=0, eoq=0, eeq=0;
		while(N--){
			int curr; cin>>curr;
			if(curr&1){odd++;}
			else{
				int q = curr/2;
				if(q&1){eoq++;}
				else{eeq++;}
			}
		}
		cout << max(odd, max(eoq, eeq)) << endl;
	}
}