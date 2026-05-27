// 3121. Count the Number of Special Characters II

#include <iostream>
#include <string>
#include <unordered_map>

constexpr int DIFF = 32;
int numberOfSpecialChars(std::string word)
{
    if (word.empty())
        return 0;

    std::unordered_map<char, std::pair<int, int>> mp{};
    int specChar = 0;

    for (int i = 0; i < word.size(); i++)
    {
        char ch = word[i];
        if (mp.find(word[i]) != mp.end())
        {
            mp[ch].second = i;
        }
        else
        {
            mp[ch] = {i, i};
        }
    }

    for (const auto &[key, val] : mp)
    {
        char sCh = char(key - DIFF);
        if (mp.find(sCh) != mp.end() && (val.second < mp[sCh].first))
            specChar++;
    }
    return specChar;
}

int main()
{
    std::string word = "cCceDC"; // o/p -> 0
    // std::string word = "cCceDCcC"; // o/p -> 0
    // std::string word = "aaAbcBC"; // o/p -> 3
    // std::string word = "abc"; // o/p -> 0
    // std::string word = "AbBCab"; // o/p -> 0
    std::cout << numberOfSpecialChars(word) << std::endl;
    return 0;
}