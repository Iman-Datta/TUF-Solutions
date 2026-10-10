class Solution {
public:
    vector<vector<int>> pascalTriangleIII(int n) {
        vector<vector<int>> pascalTriangle;

        for(int i = 0; i < n; i ++){
            vector<int> row;
            long long nextEl = 1;

            for(int j = 0; j <= i; j ++){
                row.push_back(nextEl);
                nextEl = nextEl * (i - j) / (j + 1);
            }

            pascalTriangle.push_back(row);
        }

        return pascalTriangle;
    }
};