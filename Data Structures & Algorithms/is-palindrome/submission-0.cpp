#include <regex>
#include <string>
#include <algorithm>

class Solution {
   public:
    bool isPalindrome(string s) {
        std::regex pattern("[^a-zA-Z0-9]");

        s = std::regex_replace(s, pattern, "");

        std::transform(s.begin(), s.end(), s.begin(), [](const char c) { return std::tolower(c); });

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != s[s.length() - (i + 1)]) {
                return false;
            };
        }
        return true;
    }
};
