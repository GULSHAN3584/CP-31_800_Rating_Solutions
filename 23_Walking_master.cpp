#include<iostream>
#include<vector>

void solve()
{
    std::vector<int> arr(4);
    for (int i = 0; i < 4; i++)
    {
        std::cin >> arr[i];
    }
    if (arr[3] < arr[1])
        {
            std::cout << "-1" << std::endl;
            return;
        }
    
    
    int j = 0;
    while (arr[3] > arr[1])
    {
        arr[1]++;
        arr[0]++;
        j++;
    }
    int k = 0;
    while(arr[2] < arr[0])
    {
        arr[0]--;
        k++;
    }
    
    if(arr[0] <arr[2])
    {
        std::cout << "-1" << std::endl;
        return;
    }
    int f = j + k;

    std::cout << f << std::endl;
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
}
