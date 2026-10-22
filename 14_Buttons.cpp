#include<iostream>
#include<vector>

void solve()
{
    std::vector<int> buttons(3);
    for (int i = 0; i < 3;i++ )
    {
        std::cin >> buttons[i];
    }

    if ( buttons[0] + buttons[2] == buttons [1] + buttons[2])
    { 
        if (buttons[2]% 2 == 0)
        {
        std::cout << "Second" << std::endl;
        }
        else 
        {
            std::cout << "First" << std::endl;
        }
        return;
    }
    else if (buttons[0] + buttons[2] > buttons[1] + buttons[2])
    {
        std::cout << "First" << std::endl;
        return;
    }
    else 
    {
        std::cout << "Second" << std::endl;
    }
}

int main() 
{
    int t;
    std::cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
