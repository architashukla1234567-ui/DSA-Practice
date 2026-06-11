/*
Problem: Remove Duplicates from Sorted List (LeetCode 83)
Pattern: Linked List

Approach:
Traverse the sorted linked list using a pointer.
If the current node and the next node have the same value,
skip the duplicate node by updating the next pointer.
Otherwise, move to the next node.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return head;

        ListNode* curr = head;

        while (curr->next != nullptr) {
            if (curr->val == curr->next->val) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }

        return head;
    }
};
