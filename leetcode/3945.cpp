// 3945. Digit Frequency Score

#include <iostream>
#include <unordered_map>

int digitFrequencyScore(int n)
{
    if (0 == n)
        return 0;

    std::unordered_map<int, int> um;
    while (n)
    {
        if (um.find(n % 10) != um.end())
            um[n % 10]++;
        else
            um[n % 10] = 1;

        n = n / 10;
    }
    int freq = 0;
    for (const auto &[key, value] : um)
    {
        freq += (key * value);
    }
    return freq;
}

int main()
{
    return 0;
}