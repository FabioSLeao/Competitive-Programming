#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t{0},store{0}, n_stores{0},max{0},min{100};
	cin >> t;
	while(t--){
		cin >> n_stores;
		while(n_stores--){
			cin >> store;
			if (store > max){
				max = store;
			}
			if (store < min){
				min = store;
			}
		}
		cout << (max - min)*2 << endl;
	}
	return 0;
}
