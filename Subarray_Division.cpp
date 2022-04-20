#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, d, m;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> d >> m;
    int sum, count = 0;
    for (int i = 0; i <= v.size() - m; i++)
    {
        sum = 0;
        for (int j = i; j < i + m; j++)
        {
            sum += v[j];
        }
        if (sum == d)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
