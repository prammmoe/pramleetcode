#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Check the edge case first
        if (strs.empty()) return "";

        // Sort the array
        sort(strs.begin(), strs.end());

        string first_str = strs[0];
        string last_str = strs[strs.size() - 1];

        // Empty string to return the LCP
        string lcp = "";

        // Get the minimum length of possible longest prefix
        int minLength = min(first_str.length(), last_str.length());

        // Iterate the chars 
        for (int i = 0; i < minLength; i++) {
            if (first_str[i] == last_str[i]) {
                lcp += first_str[i];
            } else {
                break;
            }
        }

        return lcp;
    }    
};