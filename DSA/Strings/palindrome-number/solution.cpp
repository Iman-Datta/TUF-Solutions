class Solution {
public:
    bool isPalindrome(int x) {
    int num = x, reverse_num = 0;

    while (num > 0){
        int digit = num % 10;
        reverse_num = reverse_num * 10 + digit;
        num /= 10;
    }

    if(reverse_num == x) return true;
    else return false;
    }
};