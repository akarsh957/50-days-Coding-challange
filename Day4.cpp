Linked list Cycle
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*>st;
        while(head!=nullptr){
            if(st.find(head)!=st.end()){
                return true;
            }

            st.insert(head);
            head = head->next;
        } 

        return false;
    }
};

Palindrome Number
class Solution {
public:
    bool isPalindrome(long long int x) {
        long long int revnum = 0; 
        long long int num2 = x;
        while (x > 0){
            int lastdigit = x % 10;
            revnum = (revnum*10)+lastdigit;
            x =  x/10;
        }
    return (num2 == revnum);
    }
};