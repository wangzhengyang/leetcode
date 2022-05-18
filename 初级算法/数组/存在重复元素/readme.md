给你一个整数数组`nums`。如果任一值在数组中出现**至少两次**，返回`true`；如果数组中每个元素互不相同，返回`false`。

# 解题思路
## 解法1
每一个元素与后面元素进行比较，有相同返回true，不相同返回false
## 解法2
借助set标准库，遍历数组，如果数据不存在加入到set，如果存在返回true，否则遍历完返回false
## 解法3
排序数组后，遍历数组，如果相邻数据相同，返回true，否则遍历完返回false

# 代码
```c++
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set s;
        for(int i = 0; i < nums.size(); i++){
            if(s.find(nums[i]) != s.end()){
                return true;
            }

            s.insert(nums[i]);
        }
        return false;
    }
};
```