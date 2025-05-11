Count Odd Numbers
class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0 ;
        for(int i = low; i<=high; i++){
            if(i%2!=0){
                count+=1;
            }
        }

        return count;

    }
};

Insert GCD node 
class Solution {
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;

        while (curr && curr->next) {
            int gcdVal = gcd(curr->val, curr->next->val);
            ListNode* newNode = new ListNode(gcdVal);

            newNode->next = curr->next;
            curr->next = newNode;

            curr = newNode->next; 
        }

        return head; 
    }
};