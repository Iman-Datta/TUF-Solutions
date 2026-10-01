class Solution {
public:
    int reverseNumber(int n) {
        int num = n, reverseNumber = 0;
        while (num > 0){
            int dig = num % 10;
            reverseNumber = reverseNumber * 10 + dig;
            num = num / 10;
        }
        return reverseNumber;
    }
};