#include <iostream>
#include <vector>
#include <numeric>
#include <functional>
#include <string>

void solve()
{
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    
    int i = 0;
    int left = 0;
    int right = n - 1;
    int x = n;
    while(left < right)
    {
      if(s.size() == 1 || s.size() ==0)
      {
          break;
      }
      else if ((s[left] == '1' && s[right] == '0') ||( s[left] == '0' && s[right] == '1'))
      {
          i++;
          left++;
          right--;
          x -= 2;
      }
      

   
      else if ((s[left] == '1' && s[right] == '1' )|| (s[left] == '0' && s[right] == '0'))
      {
          break;

      }
      else
      {
          break;
      }
    }
    std::cout << x << std::endl;
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
