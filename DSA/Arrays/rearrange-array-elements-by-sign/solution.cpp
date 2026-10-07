class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> posetive;
        vector<int> negetive;
        vector<int> ans;

        for(int x : nums){
            if(x > 0) posetive.push_back(x);
            else negetive.push_back(x);
        }
        int posP = 0, posN = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                ans.push_back(posetive[posP++]);
            }
            else{
                ans.push_back(negetive[posN++]);
            }
        }
        return ans;
    }
};