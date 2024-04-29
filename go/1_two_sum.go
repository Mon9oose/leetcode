func twoSum(nums []int, target int) []int {
    buffer := make(map[int]int)
    for index, data := range nums {
        remain := target - data
        if _, exist := buffer[remain]; exist {
            return []int{
                buffer[remain],
                index,
            }
        }
        buffer[data] = index
    }
    return []int{}
}