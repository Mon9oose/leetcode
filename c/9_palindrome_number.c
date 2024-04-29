bool isPalindrome(int x) {
    if (x <= 0) return x == 0;
    int tmp = x;
    unsigned int result = 0;

    while(tmp > 0)
    {
        result = result * 10 + tmp % 10;
        tmp /= 10;
    }

    return result == x;
}