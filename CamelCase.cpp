#include<bits/stdc++.h>
using namespace std;

int camelcase(string s) {
    int c=0;
    for(auto i:s){
        if(i>=65 && i<=90){
            c++;
        }
    }
    if(s[0]>=97 && s[0]<=122){
        c ++;
    }
    return c;
}
int main(){
string s;
cin >> s;
int result = camelcase(s);
cout << result;
return 0;
}