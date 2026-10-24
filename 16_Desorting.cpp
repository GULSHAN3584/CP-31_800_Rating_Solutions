#include<iostream>
#include<cmath>
#include<vector>
#include<limits>
#include<algorithm>

void solve()
{
    int n;
    std::cin >> n;
    int count = 0;
    std::vector<int> val(n);
// to fill the array 
    for (int i = 0; i < n; i++)
    {
        std::cin >> val[i];
    }
    // to check whhether the array is sorted or not already 
    if (!std::is_sorted(val.begin(),val.end()))
    {
        std::cout << "0" << std::endl;
        return;
    }
    else 
    {
        int min = INT_MAX;
        int index1 = 0;
        int index2 = 0;

        for (int j = 0; j < val.size() - 1; j++)
        {
            int cur = std::abs(val[j] - val[j + 1]);

            if(cur < min)
            {
                 min = cur;
                 index1 = val[j];
                 index2 = val[j + 1];
            }

        }
        while(min >= 0)
        {
            count++;
            min -= 2;
        }
    }
    std::cout << count << std::endl;

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
