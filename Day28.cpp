Minimum Depth 
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;

    queue<pair<TreeNode*, int>> q;
    q.push({root, 1});
    while (!q.empty()) {
        auto [node, depth] = q.front();
        q.pop();
        if (!node->left && !node->right) return depth;

        if (node->left) q.push({node->left, depth + 1});
        if (node->right) q.push({node->right, depth + 1});
    }
        return 0;
    }
};

Number of subarrays with LCM
class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
            int n = nums.size(), count = 0;

    for (int i = 0; i < n; ++i) {
        int curr_lcm = nums[i];
        if (curr_lcm == k) count++;

        for (int j = i + 1; j < n; ++j) {
            curr_lcm = lcm(curr_lcm, nums[j]);
            if (curr_lcm == k) count++;
            if (curr_lcm > k || k % curr_lcm != 0) break;
        }
    }

    return count;
    }
};