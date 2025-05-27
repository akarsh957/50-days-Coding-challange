Maximum Subarray
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
            int max_current = nums[0];
    int max_global = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        max_current = max(nums[i], max_current + nums[i]);
        max_global = max(max_global, max_current);
    }
    return max_global;

    }
};

Path Sum 
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false;
    if (!root->left && !root->right)
        return root->val == targetSum;
    return hasPathSum(root->left, targetSum - root->val) ||
           hasPathSum(root->right, targetSum - root->val);
    }
};
