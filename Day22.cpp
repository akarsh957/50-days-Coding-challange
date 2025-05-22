Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        for(int i = 0; i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.second>(nums.size()/2)){
                return it.first;
            }
        }
        return -1;
    }
};

Minimum Remove to make valid parentheses
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                if (!st.empty()) {
                    st.pop();
                } else {
                    s[i] = '*'; 
                }
            }
        }

        
        while (!st.empty()) {
            s[st.top()] = '*';
            st.pop();
        }

        
        s.erase(remove(s.begin(), s.end(), '*'), s.end());

        return s;
    }
};