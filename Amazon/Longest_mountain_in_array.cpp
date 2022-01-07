class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans = 0;
        int i = 1 , inc_start , inc_end , dec_start ,dec_end;
        int n = arr.size();
        
        while(i < n){
			
            inc_start = i-1;
            while(i < n && arr[i] > arr[i-1]) 
            {
                i++;
            }
            inc_end = i-1;
            
            while(i < n && arr[i] == arr[i-1]) 
            {
                i++;
            } 
			
            dec_start = i-1;
            while(i<n && arr[i-1] > arr[i]) 
            {
                i++;
            }
            dec_end = i-1;
            
			
            if(inc_end != inc_start && dec_end!= dec_start && inc_end == dec_start) 
            {
                ans = max(ans , dec_end - inc_start+1);
            }  
        }
        
        return ans;
    }
};