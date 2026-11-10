#include <iostream>
#include <vector>


void solve()
{
    int n;
    std::cin >> n;
    int count = 0;

    std::vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int i = 0;
    while(i < n-1)
    {
        if(arr[i] % 2 == 0 && arr[i+1] % 2 == 0)
        {
            count++;
            
        }
        else if (arr[i] % 2 == 1 && arr[i + 1] % 2 == 1)
        {
            count++;
        
        }
        i++;
    }
   
    std::cout << count << std::endl;
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
