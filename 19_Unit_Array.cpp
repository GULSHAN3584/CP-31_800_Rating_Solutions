#include<iostream>
#include<vector>
#include<numeric>
#include<functional>
#include<cstdlib>

void function(int &add, int&add2)
{
    while (add < 0)
    {
        add2 += 2;
        add += 4;
    }
}

void solve()
{
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);
    
    int add2 = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int add = std::accumulate(arr.begin(), arr.end(),0);
    int mul = std::accumulate(arr.begin(), arr.end(), 1, std::multiplies<int>());
    
    if ( mul>0 && add>0)
    {
        std::cout << "0" << std::endl;
    }

    else if(mul > 0)
    {
        function(add, add2);
        std::cout << add2 << std::endl;
    }
    else
    {
        add2 = 1;
        add += 2;
        function(add, add2);

        std::cout << add2 << std::endl;
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
