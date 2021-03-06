#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string out = "";
	int t{0};
	while(cin >> t && t != EOF){
		string ref = "";
		for(int i = 0 ; t > i ; i++){
			ref.push_back('3');
		}
		for(int i = 0; t > i; i++){
			out = ref;
			if (i == out.length()){
				out[i] = '2';
			}
			else{
				out[i] = '1';
				out[out.length() - i - 1] = '2';

			}
			cout << out << endl;
		}
}
	return 0;

}
