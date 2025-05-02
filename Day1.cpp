Reverse linkedlist
**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 //Iterative approach 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head, *prev = nullptr, *next;// initialize the pointers 
        //traverse the nodes 
        while(curr!=nullptr){
            //store next
            next = curr->next;
            // reverse 
            curr->next = prev;
            // update the other pointers 
            prev = curr;
            curr = next;
        }

        return prev;

    }
};


Missing Number 
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalSum = (n * (n + 1)) / 2;  
        int sum = accumulate(nums.begin(), nums.end(), 0);  
        return totalSum - sum;
    }
};