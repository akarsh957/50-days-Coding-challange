Sign Of Product
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1;
        for (int num : nums) {
            if (num == 0) return 0;
            if (num < 0) sign *= -1;
        }
        return sign;
    }
};

Remove Duplicate 

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        while (head) {
            if (head->next && head->val == head->next->val) {
                int dupVal = head->val;
                while (head && head->val == dupVal) {
                    head = head->next;
                }
                prev->next = head;
            } else {
                prev = prev->next;
                head = head->next;
            }
        }

        return dummy->next;
    }
};