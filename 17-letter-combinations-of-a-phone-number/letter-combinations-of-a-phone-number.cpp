class Solution {
public:
    vector<string> result;
    
    void backtrack(int index, string &current, string &digits, vector<string> &mapping) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }
        
        string letters = mapping[digits[index] - '0'];
        for (char c : letters) {
            current.push_back(c);
            backtrack(index + 1, current, digits, mapping);
            current.pop_back(); // backtrack
        }
    }
    
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        vector<string> mapping = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        
        string current;
        backtrack(0, current, digits, mapping);
        return result;
    }
};
