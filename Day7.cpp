Rotate List
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

    
    int length = 1;
    ListNode* tail = head;
    while (tail->next) {
        tail = tail->next;
        length++;
    }

    
    tail->next = head;
    k = k % length;
    int stepsToNewTail = length - k;
    ListNode* newTail = tail;
    while (stepsToNewTail--) {
        newTail = newTail->next;
    }

    
    ListNode* newHead = newTail->next;
    newTail->next = nullptr;

    return newHead;
    }
};

Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            digits[i] += 1;
            return digits;
        }
        digits[i] = 0; // carry over
    }


    digits.insert(digits.begin(), 1);
    return digits;

    }
};