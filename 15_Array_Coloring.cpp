#include<iostream>
#include<vector>
#include <numeric>

void solve()
{
    int n;
    std::cin >> n;
    std::vector<int> array(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
    int sum = std::accumulate(array.begin(), array.end(), 0);
    if (sum % 2 == 0)
    {
        std::cout << "Yes" << std::endl;
        return;
    }
    else if(n == 2)
    {
        if (sum % 2 == 0)
        {
            std::cout << "Yes" << std::endl;
            return;
        }
        else{
            std::cout << "No" << std::endl;
        }

    }
    else
    {
        std::cout << "No" << std::endl;
    }



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
