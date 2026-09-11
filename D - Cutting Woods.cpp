#include <iostream>
#include <set>

using namespace std;
int main(){
	int L, Q; cin >> L >> Q;
	set<int> st;
	st.insert(0);
	st.insert(L);
	while(Q--){
		int qType, x; cin >> qType >> x;
		if(qType == 1){
			st.insert(x);
		} else{
			auto it = st.upper_bound(x);
			cout << *it-*(prev(it)) << endl;
		}
	}
}