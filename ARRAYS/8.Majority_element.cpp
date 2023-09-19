// https://leetcode.com/problems/majority-element/description/

/*

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2

*/


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        map<int,int>mp;

        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }

        //
        int ans;
        for(auto it=mp.begin();it!=mp.end();it++) {
            if(it->second > n/2) {
                ans = it->first;
                break;
            }
        }

        return ans;
    }
};