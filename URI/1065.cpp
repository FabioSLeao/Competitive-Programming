#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t{5}, count{0}, value{0};
	while(t--){
		cin >> value;
		if(!(value % 2)) count ++;
	}
	cout << count << " valores pares" << endl;


	return 0;

}
