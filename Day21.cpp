Pascal's Triangle 
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> vec(rowIndex+1);
        unsigned long long int val = 1;
        vec[0] = vec[rowIndex] = 1;
        for(int r =1; r<rowIndex; r++){
            val = val *(rowIndex-r+1)/r;
            vec[r] =(int)val;

        }

        return vec;
    }
};

Valid Parenthesis String
class Solution {
public:
    bool checkValidString(string s) {
        stack<int> extraopen;
        stack<int> asterisk;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(') {
                extraopen.push(i);
            } else if (ch == '*') {
                asterisk.push(i);
            } else {
                if (!extraopen.empty()) {
                    extraopen.pop();
                } else if (!asterisk.empty()) {
                    asterisk.pop();
                } else {
                    return false;
                }
            }
        }

        while (!extraopen.empty() && !asterisk.empty()) {
            if (extraopen.top() > asterisk.top()) {
                return false;
            }
            extraopen.pop();
            asterisk.pop();
        }

        return extraopen.empty();
    }
};