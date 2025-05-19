Valid Parentheses
class Solution{
public:
    bool isValid(string s) {
     stack<char>mp;
     for(int i=0;i<s.size();i++)
     {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
        {
            mp.push(s[i]);
        }
        else{
            if(mp.empty())
            {
                return false;
            }
            if((s[i]==')'&& mp.top()=='(') ||
             (s[i]==']'&& mp.top()=='[')||
             (s[i]=='}'&& mp.top()=='{') )
             {
              mp.pop();
             }
             else{
                return false; 
               }
        }
     }  
     return mp.empty();
    }
};
   
Buy and sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int min_price = INT_MAX;
    int max_profit = 0;

    for (int price : prices) {
        if (price < min_price) {
            min_price = price;  
        } else if (price - min_price > max_profit) {
            max_profit = price - min_price;  
        }
    }

    return max_profit;
    }
};