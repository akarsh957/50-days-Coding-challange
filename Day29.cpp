Sum of Leaves 
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
                if (!root) return 0;

        int sum = 0;

        if (root->left) {
            
            if (!root->left->left && !root->left->right)
                sum += root->left->val;
            else
                sum += sumOfLeftLeaves(root->left);
        }

        sum += sumOfLeftLeaves(root->right);
        return sum;
    }
};

Kth largest elements 
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int num : nums) {
            minHeap.push(num);
            if (minHeap.size() > k)
                minHeap.pop();
        }

        return minHeap.top(); 
    }
};