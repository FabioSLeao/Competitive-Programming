#include <bits/stdc++.h>

using namespace std;

int main(){
string s;
int marker{0};
char c;
while((c = getchar()) && (c != EOF)){
    if (c == '\"'){
        if (marker == 0){
            s.push_back('`');
            s.push_back('`');
            marker = 1;
        }
        else{
            s.push_back('\'');
            s.push_back('\'');
            marker = 0;
        }
    
    }
    else{
        s.push_back(c);
    }
}
cout << s;
return 0;

}