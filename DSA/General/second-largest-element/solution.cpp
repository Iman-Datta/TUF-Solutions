class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largeestElement = INT_MIN, secLargestElement = INT_MIN;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] > largeestElement){
                secLargestElement = largeestElement;
                largeestElement = nums[i];
            }
        }      

        for(int i = 0; i < n; i++){
            if(nums[i] > secLargestElement && nums[i] < largeestElement){
                secLargestElement = nums[i];
            }
        }

        if(secLargestElement == INT_MIN) return -1;

        return secLargestElement;
    }
};