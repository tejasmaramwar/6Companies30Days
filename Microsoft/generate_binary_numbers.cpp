// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int n)
{
	// Your code here
	vector<string> ans;
    string s="";
    
	for(int i=1;i<=n;i++)
	{
	    int a=i;
	    while(a)
	    {
	        int rem = a % 2;
	        s=to_string(rem)+s;
	        a/=2;
	    }
	    
	    ans.push_back(s);
	    s="";
	}
	return ans;
	
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends