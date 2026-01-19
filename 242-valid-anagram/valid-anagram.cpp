class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ma;
        unordered_map<char, int> mb;

        for (char c : s) {
            ma[c]++;
        }

        for (char c : t) {
            mb[c]++;
        }

        return ma == mb;
    }
};
