Perfect Number
class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int> arr;
        for(int i = 1; i<=(num/2);i++){
            if(num%i==0){
                arr.push_back(i);
            }
        }
        int sum = 0;
        for(int a : arr){
            sum+=a;
        }
        if(sum==num){
            return true;
        }

        return false;
    }
};

Merge two sorted lists

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
  {
		if(l1 == NULL)
        {
			return l2;
		}
		
		if(l2 == NULL)
        {
			return l1;
		} 
		
		if(l1 -> val <= l2 -> val)
        {
			l1 -> next = mergeTwoLists(l1 -> next, l2);
			return l1;
		}
		else
        {
			l2 -> next = mergeTwoLists(l1, l2 -> next);
			return l2;            
		}
	}
};	