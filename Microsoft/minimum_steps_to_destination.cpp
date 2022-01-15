// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minSteps(int n){
        // code here
        
        int count = 0, sum = 0;
        
        while(sum < n)
        {
            sum += count;
            count++;
        }
        
        while((sum - n) % 2)
        {
            sum += count;
            count++;
        }
        
        return count-1;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int D;
        cin>>D;
        
        Solution ob;
        cout<<ob.minSteps(D)<<"\n";
    }
    return 0;
}  // } Driver Code Ends