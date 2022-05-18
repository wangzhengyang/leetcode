给定一个数组**nums**，编写一个函数将所有**0**移动到数组的末尾，同时保持非零元素的相对顺序。
**请注意**，必须在不复制数组的情况下原地对数组进行操作。

# 解题思路
俩个指针，一个指针指向第一个0的位置，一个指针指向非0的位置
先查找到第一个为0的位置
在基于该位置，往后遍历数组
遍历数组，如果数据为0，则只累加指向非0的指针，
如果数据不为0，先比较指针位置是否相同，不相同，调换位置，然后两个指针都增加

# 代码
```c++
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_pos = 0;
        for(; zero_pos < nums.size(); zero_pos++){
            if(nums[zero_pos] == 0){
                break;
            }
        }

        for(int i = zero_pos + 1; i < nums.size(); i++){
            if(nums[i] == 0){
                continue;
            }

            nums[zero_pos] = nums[i];
            zero_pos++;
        }
    }
};
```