#include<iostream>
#include<vector>
#include <vector>


void solve()
{
    int n;
    int count = 0;
    int newcount = 0;
    int count1 = 0;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool twofound = (arr[i] == 2);

        if(twofound)
        {
            count++;
        }
    }

    if (count % 2 == 1)
    {
        std::cout << "-1" << std::endl;
        return;
    }
    else if(count == 0)
    {
        std::cout << "1" << std::endl;
        return;
    }
    else if(count % 2 == 0)
    {
        int newcount = count / 2;
        for (int i = 0; i < n; i++)
        {
            bool twohalf = (arr[i] == 2);

            if(twohalf)
            {
                count1++;
                if(count1 == newcount)
                {
                    std::cout << i + 1 << std::endl;
                    return;
                }
                else
                {
                    continue;
                }
            }
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
