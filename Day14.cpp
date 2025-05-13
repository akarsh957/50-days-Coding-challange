Partition List
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* beforeHead = new ListNode(0);
        ListNode* afterHead = new ListNode(0);
        
        ListNode* before = beforeHead;
        ListNode* after = afterHead;
        
        while (head) {
            if (head->val < x) {
                before->next = head;
                before = before->next;
            } else {
                after->next = head;
                after = after->next;
            }
            head = head->next;
        }

        after->next = nullptr;         
        before->next = afterHead->next;

        return beforeHead->next;
    }
};

Reverse Integer
class Solution {
public:
    int reverse(int x) {
        int ans =0;
        int i = 0;
        int dig =0;
        
            while(x!=0){
                dig = x%10;
                if((ans>INT_MAX/10)|| (ans<INT_MIN/10)){
                    return 0;
                }
                ans = ans*10+dig;
                x=x/10;
                i++;
            }
            return ans;
    }
};