//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	       int maxLen=0;
        unordered_map<int,int> map;//store remainder and index
        
        map[0]=-1;
        
        int prefixSum=0;
        
        for(int i=0;i<n;i++)
        {
            prefixSum+=arr[i];
            
            
            int rem=prefixSum%k;
            
            //handle -ve remainder values
            if(rem < 0)
                rem+=k;
            
            //if rem is not found in map earlier then push in map
            if(map.find(rem) == map.end())
                map.insert({rem,i});
                
           //if rem is found in map then update maxLen
           else
           {
               maxLen=max(maxLen,i-map[rem]);
           }
           
        }
        return maxLen;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends