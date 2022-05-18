给你一个数组，将数组中的元素向右轮转**k**个位置，其中**k**是非负数。

# 解题思路
## 解法1
通过平移的方式实现
## 解法2
通过旋转数组的方式实现, 但如果右移k值超过了数组的长度，需要对k值做取余操作，因为k的整数倍右移操作，不会对数组做出任何该表

# 代码
```c++
class Solution{
public:
    void rotate(vector<int>& nums, int k){
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }

    void reverse(vector<int>& nums, int start, int end)
    {
        for(; start < end; start++, end--){
            int temp = nums[start] ^ numes[end];
            nums[start] = tmp ^ nums[start];
            nums[end] = tmp ^ nums[start];
        }
    }
};
```