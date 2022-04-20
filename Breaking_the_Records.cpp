#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ans(2, 0);
    vector<ll> scores;
    while (n--)
    {
        ll x;
        cin >> x;
        scores.push_back(x);
    }

    ll max = scores[0], min = scores[0];
    for (auto i : scores)
    {
        if (i > max)
        {
            ans[0]++;
        }
        else if (i < min)
        {
            ans[1]++;
            min = i;
        }
    }
    cout << ans[0] << " " << ans[1];

    return 0;
}