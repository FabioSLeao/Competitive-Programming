#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	float a{0}, b{0}, c{0};
	while(cin >> a, (a > 0)){
 		cin >> b >> c;
		cout << int(sqrt(a*b*(100.0/c))) << endl;

	}
	return 0;

}
