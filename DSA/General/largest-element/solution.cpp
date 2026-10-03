class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largestElement = INT_MIN;
        int flag = -1;
        for(int i = 0; i < nums.size(); i ++){
            if(nums[i] > largestElement){
                largestElement = nums[i];
                flag = largestElement;
            
            }
        }

        return flag;
    }
};