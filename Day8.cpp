Odd Even Linked List
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
    if (!head || !head->next) return head;

    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenHead = even;

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;
    return head;
    }
};

Excel Sheet Column Number

class Solution {
public:
    int titleToNumber(string columnTitle) {
    int result = 0;
    for (char c : columnTitle) {
        result = result * 26 + (c - 'A' + 1);
    }
    return result;
    }
};