#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> result;

    void backtrack(string current, int openCount, int closeCount, int n) {

        if (openCount == n && closeCount == n) {
            result.push_back(current);
            return;
        }

        
        if (openCount < n) {
            backtrack(current + "(", openCount + 1, closeCount, n);
        }


        if (closeCount < openCount) {
            backtrack(current + ")", openCount, closeCount + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        backtrack("", 0, 0, n);
        return result;
    }
};
