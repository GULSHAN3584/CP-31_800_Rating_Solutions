#include<iostream>
#include<vector>

void solve()
{
    int m;
    std::cin >> m;
    std::vector<int> sequence(m);

    for (int i = 0; i < m; i++)
    {
        std::cin >> sequence[i];
    }
    std::vector<int> ans;

    ans.push_back(sequence[0]);

    for (int i = 1; i < m; i++)
    {

        if (sequence[i] < sequence[i - 1])
        {
            ans.push_back(1);
        }
        ans.push_back(sequence[i]);
    }

    std::cout << ans.size() << std::endl;

    for (int j = 0; j < ans.size(); j++)
    {
        std::cout << ans[j] << ' ';
    }
    std::cout << "\n";
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
