#include <iostream>

void solve()
{
    long long n, k;
    std::cin >> n >> k;
    if (k > n)
    {
        std::cout << "NO" << std::endl;
        return;
    }
    if ( n % 2 == 0)
    {
        std::cout << "YES" << std::endl;
    }
    else if(n%2==1)
    {
        if(k % 2 == 0)
        {
            std::cout << "NO" << std::endl;
        }
        else
        {
            std::cout << "YES" << std::endl;
        }
    }

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
