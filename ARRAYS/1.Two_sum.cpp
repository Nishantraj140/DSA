// https://leetcode.com/problems/two-sum/

/*

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.


Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

*/

// --------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        map<int,int>mp;

        vector<int>ans;

        for(int i=0;i<n;i++) {
            if(mp.find(target-nums[i]) != mp.end()) {
                return {i, mp[target-nums[i]]};
            }

            mp[nums[i]] = i;
        }
        return {};
    }
};


//------------------------------------------------------------------------------------------------------------------------------

func twoSum(nums []int, target int) []int {
    ans := make([]int, 0)

    mp := make(map[int]int, len(nums))


    for i, val := range nums {
        fmt.Println(nums[i], i)
        _, exists := mp[target - val]
        if exists {
            ans = append(ans,i,mp[target-val])
            return ans
        }
        mp[nums[i]] = i
    }

    return ans;
}