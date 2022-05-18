给定一个整数数组`nums`和一个整数目标值`target`，请你在该数组中找出**和为目标值`target`**的那**两个**整数，并返回它们的数组下标。
你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
你可以按任意顺序返回答案。

# 解题思路
## 解法1
针对数组的每一个数去遍历，判断`nums1 + nums2 == target`
## 解法2
使用set，判断`nums2 = target - nums1`是否在set中

# 代码
```c++
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::set<int> record;
        for(int i = 0; i < nums.size(); i++){
            int left = target - nums[i];
            if(record.find(left) == record.end()){
                record.insert(nums[i]);
                continue;
            }

            int j = 0;
            for(; j < i; j++){
                if(nums[j] == left){
                    break;
                }
            }

            return {j, i};
        }

        return std::vector<int>();
    }
};
```
