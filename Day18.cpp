Implement Queue using the stack
class MyQueue {
private:
    stack<int> input, output;
    void transfer() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
    }

public:
    void push(int x) {
        input.push(x);
    }
    int pop() {
        transfer();
        int front = output.top();
        output.pop();
        return front;
    }
    int peek() {
        transfer();
        return output.top();
    } 
    bool empty() {
        return input.empty() && output.empty();
    }
};

Contains Duplicate 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }
        return false; 
    }
};