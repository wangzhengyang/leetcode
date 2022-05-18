# 买卖股票的最佳时机II
给你一个整数数组`prices`，其中`prices[i]`表示某支股票第`i`天的价格。
在每一天，你可以决定是否购买和/或出售股票。你在任何时候**最多**只能持有**一股**股票。你也可以先购买，然后在**同一天**出售。
返回 你能获得的**最大**利润 。


# 解题思路
就是统计每两个元素之间的大于0的差值之和

# 代码
```c++
int maxProfit(vector<int>& prices)
{
    int profit;
    for(int j = 1; j < prices.size(); j++)
    {
        if(prices[j] > prices[j - 1]){
            profit += prices[j] - prices[j - 1];
        }
    }

    return profit;
};
```