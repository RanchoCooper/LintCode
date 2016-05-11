/*
 * @author: Rancho (rancho941110@gmail.com)
 * @date  : 2016-05-11 21:57:46
 *
 * Brief:
 * For an array A, if i < j, and A [i] > A [j]
 * called (A [i], A [j]) is a reverse pair.
 * return total of reverse pairs in A.
 * Example:
 * Given A = [2, 4, 1, 3, 5] , (2, 1), (4, 1), (4, 3) are reverse pairs. return 3
 * Detail:
 */

class Solution {
private:
    int *tmp;
public:
    /**
     * @param A an array
     * @return total of reverse pairs
     */
    long long reversePairs(vector<int>& A) {
        int n = A.size();
        tmp = new int[n];
        return mergeSort(A, 0, n - 1);
    }

    long long merge(vector<int> &v, int l, int m, int r) {
        int i = l, j = m + 1, k = l;
        long long ans = 0;
        while (i <= m && j <= r) {
            if (v[i] > v[j]) {  // 存在逆序对
                tmp[k++] = v[j++];
                ans += m - i + 1;  // 逆序对恰好为'm-i+1'
            } else {
                tmp[k++] = v[i++];
            }
        }
        while (i <= m) tmp[k++] = v[i++];
        while (j <= r) tmp[k++] = v[j++];
        for (i = l; i <= r; ++i)
            v[i] = tmp[i];
        return ans;
    }

    long long mergeSort(vector<int>& v, int l, int r) {
        long long ans = 0;
        if (l < r) {
            int m = (l + r ) >> 1;
            ans += mergeSort(v, l, m);
            ans += mergeSort(v, m + 1, r);
            ans += merge(v, l, m, r);
        }
        return ans;
    }
};

/*
 * Reflection:
 * 基于比较的排序来记录逆序对个数
 */
