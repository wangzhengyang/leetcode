给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。

# 解题思路
两个相同的元素异或的结果为0，任何元素与0进行异或结果为元素本身
对所有元素进行异或，结果就为只出现一次的元素值

# 代码
```c++
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int value;
        for(int i = 0; i < nums.size(); i++){
            value = value ^ nums[i];
        }

        return value;
};
```