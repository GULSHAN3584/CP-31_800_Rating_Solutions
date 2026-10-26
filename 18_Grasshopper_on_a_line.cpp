#include<iostream>

void solve()
{
    int x, k;
    std::cin >> x >> k;

    if (x%k== 0)
    {
        std::cout << "2" << std::endl;
        std::cout << x - 1 << ' ' << "1" << std::endl;
    }
    else if (x % k != 0)
    {
        std::cout << "1" << std::endl;
        std::cout << x << std::endl;
    }
    else if( x < k)
    {
        std::cout << "1" << std::endl;
        std::cout << x << std::endl;
    }
    
}

int main() 
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >>t;

    while(t--)
    {
        solve();
    }
    return 0;
}
