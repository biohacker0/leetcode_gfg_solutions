class Solution {
public:
    int search(vector<int>& nums, int target) {
        int peak=findMinINdex(nums);

        int findelemenet1=binarySearch(nums,target,peak,nums.size()-1);
        
        int findelemenet2=binarySearch(nums,target,0,peak-1);

        if(findelemenet1==-1)return findelemenet2;
        else return findelemenet1;

    }
    static  int findMinINdex(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        while (low <= high) {
        int mid = low + (high - low) / 2;
  

        if (mid<high&&nums[mid]> nums[mid+1]) {
            return mid+1; // Target found
        } else if (mid>low&&nums[mid] < nums[mid-1]) {
            return mid; // Discard the left half
        } else if(nums[low]>nums[mid]){
              high=mid-1; // Discard the right half
        }
        else{
        
              low = mid + 1;
        }
    }

    return 0; // Target not found
    }

   static int binarySearch(vector<int>&  array, int target,int low,int high) {


    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == target) {
            return mid; // Target found
        } else if (array[mid] < target) {
            low = mid + 1; // Discard the left half
        } else {
            high = mid - 1; // Discard the right half
        }
    }

    return -1; // Target not found
}
};