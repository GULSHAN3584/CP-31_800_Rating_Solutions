#include <bits/stdc++.h>
using namespace std;

core logic // a gcd can never increase when we increase the number of elements it can either stay same or decrease.

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool possible = false;

    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (std::gcd(a[i], a[j]) <= 2)
            {
                possible = true;
                break;
            }
        }
        if (possible)
            break;
    }

    if (possible)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
