// https://leetcode.com/problems/contains-duplicate/description/

/*

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true

*/

// --------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        map<int,int>mp;

        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }

        bool ans = false;

        for(auto it=mp.begin();it!=mp.end();it++) {
            if(it->second >= 2) {
                ans = true;
                break;
            }
        }

        return ans;
    }
};


//------------------------------------------------------------------------------------------------------------------------------

func containsDuplicate(nums []int) bool {
    ans := false

    mp := make(map[int]int, len(nums))

    for i, _ := range nums {
        mp[nums[i]]++
    }

    for _, v := range mp {
        if v >= 2 {
            ans = true;
            break;
        }
    }

    return ans
}