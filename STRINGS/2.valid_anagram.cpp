// https://leetcode.com/problems/valid-anagram/description/


/*

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false

*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp;
        bool ans = true;
        for(int i=0;i<s.length();i++) {
            mp[s[i]]++;
        }

        for(int i=0;i<t.length();i++) {
            mp[t[i]]--;
        }

        for(auto it=mp.begin();it!=mp.end();it++) {
            if(it->second != 0) {
                ans = false;
                break;
            }
        }

        return ans;
    }
};