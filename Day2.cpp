Find the middle element
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = 0;
    ListNode* temp = head;

    while (temp) {
        length++;
        temp = temp->next;
    }

  
    int mid = length / 2;
    while (mid--) {
        head = head->next;
    }

    return head;
        
    }
};


Add Digits 

class Solution {
public:
    int addDigits(int num) {
        int sum =0;
        while(num>0){
            int dig = num%10;
            sum += dig;
            num = num/10;
        }
        if(sum>9){
           int n1 = addDigits(sum);
           return n1;
        }
        
        return sum;
    }
};