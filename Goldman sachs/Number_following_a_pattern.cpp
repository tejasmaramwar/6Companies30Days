// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here
        string ans;
        stack<int> s1;
        int count=1;
        
        for(int i=0;i<S.size();i++)
        {
            if(S[i] == 'D')
            {
                s1.push(count);
                count++;
            }
            else
            {
                s1.push(count);
                count++;
                while(!s1.empty())
                {
                    ans += to_string(s1.top());
                    s1.pop();
                }
            }
        }
        s1.push(count);
        while(!s1.empty())
        {
            ans += to_string(s1.top());
            s1.pop();
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends