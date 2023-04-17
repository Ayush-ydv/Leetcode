#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> map = {{')', '('}, {']', '['}, {'}', '{'}};
        
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stack.push(c);
            } else {
                if (stack.empty() || stack.top() != map[c]) {
                    return false;
                }
                stack.pop();
            }
        }
        
        return stack.empty();
    }
};
