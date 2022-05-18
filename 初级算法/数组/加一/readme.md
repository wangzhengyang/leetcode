给定一个由**整数**组成的**非空**数组所表示的非负整数，在该数的基础上加一。
最高位数字存放在数组的首位， 数组中每个元素只存储**单个**数字。
你可以假设除了整数 0 之外，这个整数不会以零开头。

# 解题思路
设置一个变量标识进位，1或者0
从数组的最末尾开始加1，如果有进位在继续轮询，如果没有则退出
退出时判断是否是否还有进位，如果有进位，需要在补1

# 代码
```c++
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int pos = digits.size() - 1; pos > 0; pos--){
            digits[pos] += carry;
            if(digits[pos] == 10){
                digits[pos] = 0;
                continue;
            }
            break;
        }

        return digits;
    }
};
```
