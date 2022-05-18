给你两个整数数组`nums1`和`nums2`，请你以数组形式返回两数组的交集。返回结果中每个元素出现的次数，应与元素在两个数组中都出现的次数一致（如果出现次数不一致，则考虑取较小值）。可以不考虑输出结果的顺序。

# 解题思路
## 解法1
使用set存放结果，用`nums1`每一个结果与`nums2`数组对比，如果有相同的，则查找set里面结果是否已经存在，如果不存在则放在set里面。

## 解法2
先对两个数组`nums1`和`nums2`排序，排序完后，使用两个指针指向两个数组，如果`nums1`的指向数据比`nums2`小，则`nums1`的指针指向下一个，如果`nums1`的指向数据比`nums2`大，则`nums2`的指针指向下一个，如果相等，把数据存起来，两个指针同时指向下一个

# 代码
```c++
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::set<int> result;
        std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
        for(int pos1 = 0, pos2 = 0; pos1 < nums1.size() || pos2 < nums2.size();){
            if(nums1[pos1] == nums2[pos2]){
                result.insert(nums1[pos1]);
                pos1++;
                pos2++;
            }else if(nums1[pos1] < nums2[pos2]){
                pos1++;
            }else{
                pos2++;
            }
        }

        return std::vector<int>(result.begin(), result.end());
    }
};
```