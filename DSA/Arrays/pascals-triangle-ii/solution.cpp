class Solution {
public:
    vector<int> pascalTriangleII(int r) {
        long long nextEl = 1;
        vector<int> ans;

        ans.push_back(nextEl);

        for(int i = 1; i < r; i++){
            nextEl = nextEl * (r - i);
            nextEl = nextEl / i;

            ans.push_back(nextEl);
        }

        return ans;
    }
};