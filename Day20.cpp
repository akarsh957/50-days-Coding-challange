GCD
class Solution {
public:
    int findGCD(vector<int>& nums) {
    int min_num = *min_element(nums.begin(), nums.end());
    int max_num = *max_element(nums.begin(), nums.end());
    while (max_num % min_num != 0) {
        int temp = max_num % min_num;
        max_num = min_num;
        min_num = temp;
    }
    return min_num; 
    }
};

Evaluate the Reverse Polish 
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
            stack<int> st;

    for (string& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
            else st.push(a / b);  
        } else {
            st.push(stoi(token));  
        }
    }

    return st.top();
    }
};