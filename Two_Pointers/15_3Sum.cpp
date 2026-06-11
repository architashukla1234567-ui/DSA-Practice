/*
Problem: 3Sum (LeetCode 15)
Pattern: Two Pointers

Approach:
1. Sort the array.
2. Fix one element at index i.
3. Use two pointers:
   - j = i + 1
   - k = n - 1
4. Find pairs such that:
      nums[i] + nums[j] + nums[k] = 0
5. Skip duplicate values for i, j, and k to avoid
   duplicate triplets in the answer.

Time Complexity: O(n²)
Space Complexity: O(1) (excluding the output array)
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int j = i + 1;
            int k = n - 1;

            while (j < k) {

                int sum = nums[i] + nums[j] + nums[k];

                if (sum < 0) {
                    j++;
                }
                else if (sum > 0) {
                    k--;
                }
                else {
                    ans.push_back({nums[i], nums[j], nums[k]});

                    j++;
                    k--;

                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }

                    while (j < k && nums[k] == nums[k + 1]) {
                        k--;
                    }
                }
            }
        }

        return ans;
    }
};
