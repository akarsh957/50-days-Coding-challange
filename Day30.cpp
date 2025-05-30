Diameter of a Tree
class Solution {
    int maxDiameter = 0;

    int height(TreeNode* node) {
        if (!node) return 0;

        int left = height(node->left);
        int right = height(node->right);

        maxDiameter = max(maxDiameter, left + right); 
        return 1 + max(left, right); 
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxDiameter;
}
};

Find the Duplicate Number
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
            int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};