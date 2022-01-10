// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isValid(vector<vector<int>> mat){
        // code here
        int r = mat.size();
        int c = mat[0].size();

        unordered_map<int, int> rows[9];
        unordered_map<int, int> columns[9];
        unordered_map<int, int> boxes[9];

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                int ch = mat[i][j];

                if(ch!=0 && rows[i][ch++] > 0 || columns[i][ch++] || boxes[i/3*3 + c/3][ch++] > 0)
                    return false;
            }
        }

        return true;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends