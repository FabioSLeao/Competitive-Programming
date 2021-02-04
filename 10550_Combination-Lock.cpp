#include <bits/stdc++.h>

using namespace std;

int main(){
 int comb[4];
 while(cin >> comb[0] >> comb[1] >> comb[2] >> comb[3]){
     if(comb[0] + comb[1] + comb[2] + comb[3] == 0){
         break;
     }

     int angle{1080};

     angle += comb[0]*9;
     angle += abs(comb[1]-40)*9;
     angle += (40+comb[2]-comb[1])*9;
     angle += abs(comb[3]-(40+comb[2]))*9;
     cout << angle << endl;
 }
    
return 0;

}