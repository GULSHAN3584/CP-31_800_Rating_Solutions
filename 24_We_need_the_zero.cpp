#include<iostream>
#include<vector>
#include<numeric>
#include<functional>

void solve()
{
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    std::vector<int> arrb;

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int total_xor = 0;

    int count = 0;
    while (count < 256)
    {
        arrb.clear();
        for (int j = 0; j < n; j++)
        {
            arrb.push_back(arr[j] ^ count);
            total_xor = std::accumulate(arrb.begin(), arrb.end(), 0, std::bit_xor<int>());
            
        }
        if(total_xor == 0)
        {
            std::cout << count << std::endl;
            return;
        }
        count++;
    }
    // now we have array b we can focus on how to find xor of each element of arrb
    if(total_xor != 0)
    {
        std::cout << "-1" << std::endl;
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
