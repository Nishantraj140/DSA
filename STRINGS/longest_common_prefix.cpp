// https://leetcode.com/problems/longest-common-prefix/submissions/


/*

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());

        string first = strs[0];
        string last = strs[strs.size()-1];
        string ans = "";

        for(int i=0;i<first.length();i++) {
            if(first[i] == last[i]) {
                ans+=first[i];
            }
            else {
                break;
            }
        }

        return ans;
    }
};