class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int curr_sum = 0;
        int min_length = n+1;
        int start = 0, end = 0;
        
        while(end < n)
        {
            while(curr_sum <= target && end<n)
                curr_sum += nums[end++];
            
            while(curr_sum > target && start < n)
            {
                if(end - start < min_length)
                {
                    min_length = end - start;
                }
                curr_sum -= nums[start++];
            }
        }
        return min_length;
    }
};
