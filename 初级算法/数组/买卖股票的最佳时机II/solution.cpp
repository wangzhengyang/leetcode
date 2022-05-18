#include <vector>
#include <iostream>

using namespace std;

int maxProfit(vector<int>& prices)
{
    int profit = 0;
    for (int j = 1; j < prices.size(); j++)
    {
        if (prices[j] > prices[j - 1])
        {
            profit += prices[j] - prices[j - 1];
        }
    }

    return profit;
};

int main()
{
    std::vector<int> test1{ 7, 1, 5, 3, 6, 4 };
    std::cout << "profit:" << maxProfit(test1) << std::endl;
    std::vector<int> test2{ 1, 2, 3, 4, 5 };
    std::cout << "profit:" << maxProfit(test2) << std::endl;
    std::vector<int> test3{ 7, 6, 4, 3, 1 };
    std::cout << "profit:" << maxProfit(test3) << std::endl;
    return 0;
}