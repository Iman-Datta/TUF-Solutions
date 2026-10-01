class Solution {
public:
    int factorial(int n) {
        int num = n, factorial = 1;
        for (int i = num; i > 0; i--){
            factorial *= i;
        }
        return factorial;
    }
};
