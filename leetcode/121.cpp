// 121. Best Time to Buy and Sell Stock

#include <iostream>
#include <vector>

int maxProfit(std::vector<int> &prices)
{
    int minPrice = prices[0], maxProf = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        minPrice = std::min(prices[i], minPrice);
        maxProf = std::max(prices[i] - minPrice, maxProf);
    }
    return maxProf;
}

int main()
{
    std::vector<int> prices;

    prices = {7, 1, 5, 3, 6, 4};
    (5 == maxProfit(prices)) ? std::cout << true << std::endl : std::cout << false << std::endl;
    return 0;
}