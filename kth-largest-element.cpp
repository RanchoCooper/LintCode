/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-09 00:47:22
 * Find K-th largest element in an array.
 * Example
 * In array [9,3,2,4,8], the 3rd largest element is 4.
 * In array [1,2,3,4,5], the 1st largest element is 5, 2nd largest element is 4,
 * 3rd largest element is 3 and etc.
 *
 * Detail: https://leetcode.com/discuss/38336/4ms-c-solution-using-quicksort-and-max-heap
 */

class Solution {
public:
    /*
     * param k : description of k
     * param nums : description of array and index 0 ~ n-1
     * return: description of return
     */
    int partition(vector<int>& nums, int left, int right) {
        int pivot = nums[left];
        int l = left + 1, r = right;
        while (l <= r) {  //
            if (nums[l] < pivot && pivot < nums[r])  // exchange and reduce distance of l and r
                swap(nums[l++], nums[r--]);
            if (pivot <= nums[l])  // find an element big than pivot on left-side
                l++;
            if (nums[r] <= pivot)  // find an element small than pivot on right-side
                r--;
        }
        // last r is no less than pivot, excatly the r + 1 th largest element
        swap(nums[left], nums[r]);
        return r;
    }

    int kthLargestElement(int k, vector<int> nums) {
        int left = 0, right = nums.size() - 1;
        while (true) {
            int pos = partition(nums, left, right);
            if (pos == k - 1)
                return nums[pos];
            if (pos < k - 1)
                left = pos + 1;
            else
                right  = pos - 1;
        }
    }
};

/*
 * Reflection:
 * 快排的partition算法
 */
