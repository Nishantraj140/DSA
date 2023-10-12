// https://leetcode.com/problems/move-zeroes/description/

func moveZeroes(nums []int) {
	n := len(nums)

	i := 0
	j := 1

	for j < n {
		if nums[i] == 0 && nums[j] != 0 {
			// swap(nums[i], nums[j])
			temp := nums[i]
			nums[i] = nums[j]
			nums[j] = temp
			i++
			j++
		} else if nums[i] == 0 && nums[j] == 0 {
			j++
		} else {
			i++
			j++
		}
	}
}