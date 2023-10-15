//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int maxWindow = 0;
        int sum = 0;
        std::unordered_map<int, int> prefixSumIndex;

        // Iterate through the array
        for (int i = 0; i < N; i++) {
            sum += A[i];

            if (sum == K) {
                maxWindow = i + 1;  // The entire subarray sums to the target
            } else if (prefixSumIndex.count(sum - K)) {
                maxWindow = std::max(maxWindow, i - prefixSumIndex[sum - K]);
            }

            if (!prefixSumIndex.count(sum)) {
                prefixSumIndex[sum] = i;
            }
        }

        return maxWindow;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends