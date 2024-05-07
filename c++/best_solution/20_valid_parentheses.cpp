#include <vector>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        if (s.size() % 2 != 0) return false;
        std::vector<char> buffer;
        for (const auto ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                buffer.push_back(ch);
                continue;
            }
            if(buffer.empty()) return false;
            auto data = buffer.back();
            buffer.pop_back();
            if (data == '(' && ch == ')') continue;
            if (data == '{' && ch == '}') continue;
            if (data == '[' && ch == ']') continue;
            return false;
        }
        return buffer.empty();
    }
};