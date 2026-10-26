

















#include <iostream>
#include <vector>

void solve()
{
    int n, k, x;
    std::cin >> n >> k >> x;

    // Case 1: x is NOT 1. We can simply use all 1s.
    if (x != 1)
    {
        std::cout << "Yes" << "\n";
        std::cout << n << "\n";
        for (int i = 0; i < n; i++)
        {
            std::cout << 1 << (i == n - 1 ? "" : " ");
        }
        std::cout << "\n";
    }
    
    else
    {
    
        if (k == 1 || (k == 2 && n % 2 != 0))
        {
            std::cout << "No" << "\n";
        }
        else if (n % 2 == 0)
        {
            
            int m = n / 2;
            std::cout << "Yes" << "\n";
            std::cout << m << "\n";
            for (int i = 0; i < m; i++)
            {
                std::cout << 2 << (i == m - 1 ? "" : " ");
            }
            std::cout << "\n";
        }
        else
        {
            
            int count_twos = (n - 3) / 2;
            std::cout << "Yes" << "\n";
            std::cout << count_twos + 1 << "\n";
            std::cout << 3 << " ";
            for (int i = 0; i < count_twos; i++)
            {
                std::cout << 2 << (i == count_twos - 1 ? "" : " ");
            }
            std::cout << "\n";
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
