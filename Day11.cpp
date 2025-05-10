Factorial trailing Zeros
class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
       while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count; 
    }
};

Remove nth node from the end 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode* dummy = new ListNode(0); 
    dummy->next = head;
    ListNode* fast = dummy;
    ListNode* slow = dummy;
    for (int i = 0; i <= n; ++i) {
        fast = fast->next;
    }
    while (fast != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }
    ListNode* toDelete = slow->next;
    slow->next = slow->next->next;
    delete toDelete;

    ListNode* newHead = dummy->next;
    delete dummy;
    return newHead;
    }
};