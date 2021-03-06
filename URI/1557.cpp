#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a{0}, greatest_size{0}, value{0}, space;
	while(cin >> a, (a > 0)){
		greatest_size = floor(log10(pow(2,2*a-2))) + 1;
 		for(int i = 0 ; i < a ; i++){
			value = pow(2,i);
			cout << setw(greatest_size - floor(log10(value))) << value;
		 for(int j = 1 ; j < a ; j++){
			 value = pow(2,(j+i));
			 cout << setw(greatest_size - floor(log10(value)) + 1) << value;

		 }
		 cout << endl;
		}
	}
	return 0;

}
