/*
Problem: Segregate 0s and 1s
Pattern: Two Pointers

Approach:
Use two pointers, one starting from the beginning and one from the end.
If the left pointer is already at 0, move it forward.
If the right pointer is already at 1, move it backward.
Otherwise, swap the elements and move both pointers.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    void segregate0and1(vector<int> &arr) {
        int n = arr.size() - 1;
        int i = 0;
        int j = n;

        while (i < j) {
            if (arr[i] == 0) {
                i++;
            }
            else if (arr[j] == 1) {
                j--;
            }
            else {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
    }
};
