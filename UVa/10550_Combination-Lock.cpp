#include <bits/stdc++.h>

using namespace std;

int main(){
 int comb[4];
 while(cin >> comb[0] >> comb[1] >> comb[2] >> comb[3]){
     if(comb[0] + comb[1] + comb[2] + comb[3] == 0){
         break;
     }

     int angle{1080};

     angle += ((comb[0] - comb[1]+40)%40)*9; //clockwise
     angle += ((comb[2] - comb[1]+40)%40)*9; //counter-clockwise
     angle += ((comb[2] - comb[3] + 40)%40)*9; //clockwise

     cout << angle << endl;
 }

return 0;

}
