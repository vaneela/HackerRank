#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int prev = 2;
    for (int i = 1; i <= n; i++)
    {
        ans += prev;
        prev = (prev * 3) / 2;
    }
    cout << ans << endl;
    return 0;
}
