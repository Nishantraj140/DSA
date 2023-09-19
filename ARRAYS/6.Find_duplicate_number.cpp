// https://leetcode.com/problems/find-the-duplicate-number/description/

/*

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

 

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2
Example 2:

Input: nums = [3,1,3,4,2]
Output: 3

*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;

        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }

        int ans = -1;

        for(auto it=mp.begin();it!=mp.end();it++) {
            if(it->second >= 2) {
                ans = it->first;
                break;
            }
        }

        return ans;
    }
};