#include <iostream>
#include <vector>
#include <utility>
#include<algorithm>

void solve()
{
    int n;
    std::cin >> n;

    std::vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());

    if(arr[0] == arr[n-1])
    {
        std::cout << "NO" << std::endl;
        return;
    }
    else if(arr[n-1] == arr[1])
    {
        std::cout << "YES" << std::endl;
        for (int i = 0; i < n; i++)
        {
            std::cout << arr[i] << ' ';
        }
        std::cout << std::endl;
        return;
    }

    else 
    {
        std::swap(arr[0], arr[n - 1]);

        std::cout << "YES" << std::endl;

        for (int i = 0; i < n; i++)
        {
            std::cout << arr[i] << ' ';
        }
        std::cout << std::endl;
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
