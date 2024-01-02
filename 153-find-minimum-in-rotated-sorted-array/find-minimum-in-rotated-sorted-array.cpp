class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        while (low <= high) {
        int mid = low + (high - low) / 2;
        cout<<nums[mid];

        if (mid<high&&nums[mid]> nums[mid+1]) {
            return nums[mid+1]; // Target found
        } else if (mid>low&&nums[mid] < nums[mid-1]) {
            return nums[mid]; // Discard the left half
        } else if(nums[low]>nums[mid]){
              high=mid-1; // Discard the right half
        }
        else{
        
              low = mid + 1;
        }
    }

    return nums[0]; // Target not found
    }
};