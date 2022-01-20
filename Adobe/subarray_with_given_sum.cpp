// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector <int> ans;
        int start = 0;
        int temp_sum = 0;
        
        for(int i=0;i<n;i++)
        {
            temp_sum+= arr[i];
            while(temp_sum >= s && ans.size() == 0)
            {
                if(temp_sum == s)
                {
                    ans.push_back(start+1);
                    ans.push_back(i+1);
                    break;
                }
              
                temp_sum-=arr[start];
                start++;
            }
        }
        if(ans.size()==0)
        {
            ans.push_back(-1);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends