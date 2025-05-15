Sum of Squares
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a = 0;
        long long b = (long long)sqrt(c);
        
        while (a <= b) {
            long long sum = a * a + b * b;
            if (sum == c) return true;
            else if (sum < c) a++;
            else b--;
        }
        return false;
    }
};

Delete node in a linked list

class Solution {
public:
    void deleteNode(ListNode* node) {
       
        node->val = node->next->val; 
        node->next = node->next->next; 
    }
};