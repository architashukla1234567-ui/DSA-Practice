/*
Problem: Two Sum II - Input Array Is Sorted
Pattern: Two Pointers

Approach:
Use two pointers, one at the beginning and one at the end.
If the sum is smaller than target, move the left pointer.
If the sum is larger than target, move the right pointer.

Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        while(left<right){
            int sum = numbers[left]+numbers[right];
            if(sum == target){
                return {left+1,right+1};
            }else if(sum<target){
                left++;
            }else{
                right--;
            }
        }
        return{};
    }
};
