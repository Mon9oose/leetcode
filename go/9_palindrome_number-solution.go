func isPalindrome(x int) bool {
	if x < 0 {
		return false
	}

	tmp := x
	var res int64 = 0
	for x > 0 {
		if tmp <= 0 {
			break
		}
		res = res*10 + int64(tmp%10)
		tmp = tmp / 10
	}
	return res == int64(x)
}