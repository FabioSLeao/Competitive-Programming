#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t{0};
	int a{0},b{0};
	cin >> t;
	while(t--){
		cin >> a >> b;
		if (a == b){
			cout << "=" << endl;
		}
		else{
			a > b ? cout << ">": cout << "<";
		}
	}


	return 0;

}
