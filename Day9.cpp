nth digit 
class Solution {
public:
    int findNthDigit(int n) {
    long long digitLength = 1;
    long long count = 9;
    long long start = 1;

    // Step 1: Find the digit length group
    while (n > digitLength * count) {
        n -= digitLength * count;
        digitLength++;
        count *= 10;
        start *= 10;
    }

    // Step 2: Find the actual number
    long long number = start + (n - 1) / digitLength;

    // Step 3: Find the digit in that number
    string numStr = to_string(number);
    int digitIndex = (n - 1) % digitLength;
    return numStr[digitIndex] - '0';  // Convert char to int
}
    
};
Swapping nodes in a linkedlist
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
    ListNode* first = head;
    ListNode* second = head;
    ListNode* current = head;
    int length = 0;
    while (current) {
        length++;
        current = current->next;
    }
    for (int i = 1; i < k; ++i)
        first = first->next; 
    for (int i = 1; i < length - k + 1; ++i)
        second = second->next;
    swap(first->val, second->val);

    return head;
    }
};