class Solution {
public:
    int pascalTriangleI(int r, int c) {
        long long res = 1;
        r--;
        c--;

        for (int i = 0; i < c; i++) {
            res = res * (r - i);
            res = res / (i + 1);
        }

        return res;
    }
};