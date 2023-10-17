//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long head=0;long tails=0; long sum=0; long maxSum=0;
        
        while(head<K){
            sum+=Arr[head];
            head++;
        }
         maxSum=max(sum,maxSum);
         
        for(int i=K;i<N;i++){
            sum+=Arr[i];
            sum-=Arr[tails];
            tails++;
            maxSum=max(sum,maxSum);
        }
        
       return maxSum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends