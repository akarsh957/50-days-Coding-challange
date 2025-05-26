Find First and last position
class Solution {
public:
    int findIndex(const vector<int>& nums, int target, bool findFirst) {
        int left = 0, right = nums.size() - 1, index = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                index = mid;
                if (findFirst)
                    right = mid - 1; 
                else
                    left = mid + 1;  
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return index;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findIndex(nums, target, true);
        int last = findIndex(nums, target, false);
        return {first, last};
    }
};

Binary Tree Inorder
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> st;
        TreeNode* curr = root;

        while (curr || !st.empty()) {
            while (curr) {
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top(); st.pop();
            result.push_back(curr->val);
            curr = curr->right;
        }

        return result;
    }
};