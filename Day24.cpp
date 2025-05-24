Basic Calculator
class Solution {
public:
    int calculate(string s) {
        stack<int> stk;
        int result = 0, sign = 1, num = 0;

        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            } else if (c == '+') {
                result += sign * num;
                num = 0;
                sign = 1;
            } else if (c == '-') {
                result += sign * num;
                num = 0;
                sign = -1;
            } else if (c == '(') {
                // Push current result and sign to stack
                stk.push(result);
                stk.push(sign);
                result = 0;
                sign = 1;
            } else if (c == ')') {
                result += sign * num;
                num = 0;
                result *= stk.top(); stk.pop(); // sign before parentheses
                result += stk.top(); stk.pop(); // result before parentheses
            }
        }
        result += sign * num;
        return result;
    }
};

Move Zeros 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = nums.size();
        for (int i = 0, j = i + 1; i < s - 1 && j < s;  j++) {
            if (nums[i] != 0) {
                i++;
                continue;
            }
            if (nums[j] != 0) swap(nums[i++], nums[j]);
        }
    }
};