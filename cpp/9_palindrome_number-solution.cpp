class Solution {
public:
    bool isPalindrome(int x) {
        if(x<10&&x>=0) return true;
        int p=abs(x);
        int q=p;
        long long sum=0;
        while(p>0){
           sum=sum*10+p%10;
           p=p/10;
        }
        if(sum==q&&q==x) return true;
        return false;
    }
};