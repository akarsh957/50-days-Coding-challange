Min Stack
class MinStack {
private:
    stack<long long> st;
    long long minVal;

public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(0);  
            minVal = val;
        } else {
            st.push((long long)val - minVal);
            if (val < minVal) minVal = val;
        }
    }

    void pop() {
        if (st.empty()) return;

        long long top = st.top();
        st.pop();

        if (top < 0) {
            minVal = minVal - top;
        }
    }

    int top() {
        long long top = st.top();
        if (top >= 0) {
            return minVal + top;
        } else {
            return minVal;
        }
    }

    int getMin() {
        return minVal;
    }
};

Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; 
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }
        return {}; 
    }
};