#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> birds;
    while (n--)
    {
        int x;
        cin >> x;
        birds[x]++;
    }
    auto it = birds.begin();
    int max = it->second, maxid = it->first;
    for (auto b : birds)
    {
        if (b.second > max)
        {
            max = b.second;
            maxid = b.first;
        }
    }
    cout << maxid << endl;


}