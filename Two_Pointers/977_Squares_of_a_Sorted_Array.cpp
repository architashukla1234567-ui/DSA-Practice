/*
Problem: Squares of a Sorted Array (LeetCode 977)
Pattern: Two Pointers

Approach:
Since the array is sorted, the largest square can come
from either the leftmost negative number or the rightmost
positive number.

Use two pointers:
- One at the beginning.
- One at the end.

Compare their squares and insert the larger square into
the result array. Finally, reverse the result to obtain
the squares in sorted order.

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ss;
        int i = 0;
        int j = nums.size() - 1;

        while (i <= j) {
            int leftsq = nums[i] * nums[i];
            int rightsq = nums[j] * nums[j];

            if (leftsq > rightsq) {
                ss.push_back(leftsq);
                i++;
            } else {
                ss.push_back(rightsq);
                j--;
            }
        }

        reverse(ss.begin(), ss.end());
        return ss;
    }
};
