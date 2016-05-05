/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-05 13:45:53
 *
 * Brief:
 * Given an array nums of integers and an int k, partition the array
 * (i.e move the elements in "nums") such that:
 *     All elements < k are moved to the lef
 *     All elements >= k are moved to the righ
 *     Return the partitioning index, i.e the first index i nums[i] >= k.
 * Example:
 *     If nums = [3,2,2,1] and k=2, a valid answer is 1.
 * Detail:
 */
class Solution {
public:
    int partitionArray(vector<int> &nums, int k) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            while (left <= right && nums[left] < k) ++left;
            while (left <= right && k <= nums[right]) --right;
            if (i <= j)
                swap(nums[left++], nums[right--]);
        }
        return left;
    }
};


/*
 * Reflection:
 * if ommit the boundary condition 'left <= right'
 * left or right may out of array border
 */
