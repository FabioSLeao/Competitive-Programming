#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

  int t{0}, n{0}, m{0};
  cin >> t;
  while(t--){

    int horizontal{0}, vertical{0};
    cin >> n >> m;
    n -= 2;
    m -= 2;
    if(n > 0 && m > 0){
      n%3 ? horizontal += n/3 + 1 : horizontal += n/3;
      m%3 ? vertical += m/3 + 1 : vertical += m/3;
      cout << horizontal*vertical<< endl;

    }

  }

	return 0;

}
