Longest Valid Parentheses
class Solution {
public:
    int longestValidParentheses(string s) {
        int left = 0, right = 0, maxLen = 0;
        // Left to right scan
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') left++;
            else right++;

            if (left == right)
                maxLen = std::max(maxLen, 2 * right);
            else if (right > left)
                left = right = 0;
        }
        // Right to left scan
        left = right = 0;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '(') left++;
            else right++;

            if (left == right)
                maxLen = std::max(maxLen, 2 * left);
            else if (left > right)
                left = right = 0;
        }

        return maxLen;
    }
};
Search Insert Position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left;
    }
};