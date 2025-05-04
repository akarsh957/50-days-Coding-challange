 Perfect square
bool isPerfectSquare(int num) {
        //Using the binary search approach 
        if(num<=1){
            return true;
        }
        long long start = 0;
        long long end = num;
        while(start<=end){
            long long mid = start + (end-start)/2;
            long long square = mid*mid;
            if(square==num){
                return true;
            }
            else if(square<num){
                start = mid +1;
            }
            else{
                end= mid -1;
            }
        }

        return false;
    }
};

Palindrome linked list

bool isPalindrome(ListNode* head) {
        ListNode* currNode = head;
        stack<int> s;

        // Push all elements onto the stack
        while (currNode != nullptr) {
            s.push(currNode->val);  
            currNode = currNode->next;
        }

        // Compare with elements from the stack
        while (head != nullptr) {
            int topVal = s.top();
            s.pop();

            if (head->val != topVal) {
                return false;
            }

            head = head->next;
        }

        return true;
    }
};
