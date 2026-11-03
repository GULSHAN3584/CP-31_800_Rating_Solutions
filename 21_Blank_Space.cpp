#include<iostream>
#include<vector>

void solve()
{
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    int i = 0;
    while(i < n)
    {
        count1 = 0;
        if(arr[i]== 0)
        {
        while(i < n && arr[i] == 0)
        {
            count1++;
            i++;
        }
        
        if(count1>count2)
        {
            count2 = count1;
        }

        }
        else 
        {
            i++;
        }
    }

  
    std::cout << count2 << std::endl;
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
