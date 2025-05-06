Happy Number
class Solution {
public:
    bool isHappy(int n) {
    unordered_set<int> seen;

    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }

    return n == 1;
    }
};

Remove LinkedList
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* curr = dummy;

    while (curr->next != nullptr) {
        if (curr->next->val == val) {
            ListNode* todelete = curr->next;
            curr->next = curr->next->next;
            delete todelete;
        } else {
            curr = curr->next;
        }
    }

    ListNode* newhead = dummy->next;
    delete dummy;
    return newhead;
    }
};