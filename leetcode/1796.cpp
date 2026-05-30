// 1796. Second Largest Digit in a String

#include <iostream>
#include <string>
#include <climits>

int secondHighest(std::string s)
{
    if (s.empty())
        return -1;

    int first_lar = -1;
    int sec_lar = -1;

    for (auto &it : s)
    {
        if (it < 58 && it > 47)
        {
            if (-1 == first_lar)
                first_lar = it - 48;
            else
            {
                if (first_lar > (it - 48) && sec_lar < (it - 48))
                    sec_lar = it - 48;
                else if (first_lar < (it - 48))
                {
                    sec_lar = first_lar;
                    first_lar = it - 48;
                }
            }
        }
    }
    return sec_lar;
}

int main()
{
    std::string s;

    s = "abc1111";
    (-1 == secondHighest(s)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    s = "dfa12321afd";
    (2 == secondHighest(s)) ? std::cout << true << std::endl : std::cout << false << std::endl;

    return 0;
}