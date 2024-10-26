


class Solution {
public:
    int operation(int val1, int val2, string operand) {
        int res;
        if (operand == "+") {
            res= val1 + val2;
        } else if (operand == "-") {
            res= val1 - val2;
        } else if (operand == "*") {
            res= val1 * val2;
        } else if (operand == "/") {
            res= val1 / val2; 
        }
        return res ;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (string token : tokens) {
            
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                
                int val2 = s.top();
                s.pop();
                int val1 = s.top();
                s.pop();
                
                int res = operation(val1, val2, token);
                s.push(res);
            } else {
                
                s.push(stoi(token));
            }
        }
        return s.top(); 
    }
};
