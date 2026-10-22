#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
void solve()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::vector<int> b{};
    std::vector<int> c{};
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    
    std::sort(a.begin(), a.end());

    if(a[0] == a[n-1])
    {
        std::cout << "-1" << std::endl;
        return;
    }
    int count = 0;

    while (count < n && a[0] == a[count])
    {
        count++;
        b.push_back(a[0]);
    }
    for (int i = count; i < n; i++)
    {
        c.push_back(a[i]);
    }

    std::cout << b.size() << ' ' << c.size() << std::endl;

    for (int j = 0; j < b.size();j++)
    {
        std::cout << b[j] << ' ';
    }
    std::cout << std::endl;
    for (int k = 0; k < c.size(); k++)
    {
        std::cout << c[k] << ' ';
    }
    std::cout << std::endl;
}


int main() 
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
