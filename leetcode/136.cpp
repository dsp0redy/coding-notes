// 136. Single Number

#include <iostream>
#include <vector>

int singleNumber(std::vector<int> &nums)
{
    int x = 0;
    for (auto &it : nums)
        x ^= it;

    return x;
}

int main()
{
    return 0;
}