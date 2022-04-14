#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int digits = 0, lwr_case =0, upr_case =0, sp_char =0;
    for(auto c : password){
        if(c >=48 && c <= 57){
            digits++;
        }
        else if( c >=65 && c <= 90){
            upr_case++;
        }
        else if(c >=97 && c <= 122){
            lwr_case++;
        }
        else {
            sp_char++;
        }}
        int ans =0;
        if(digits == 0){
            ans ++;
        }
        if(upr_case ==0){
            ans ++;
        }
        if(lwr_case == 0){
            ans ++;
        }
        if(sp_char==0){
            ans ++;
        }

        if((ans + n)<6){
            ans =6-n;
        }
        return ans;
    

}

int main()
{
string str;
int n;
cin >> n;
cin >> str;
int count = minimumNumber(n, str);    
cout << count << endl;
}

