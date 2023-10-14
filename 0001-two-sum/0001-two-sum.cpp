class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> myMap;

        for(int i=0;i<nums.size() ; i++){
            int val = target-nums[i];
            if(myMap.count(val)){
                return {myMap[val] , i };
            }
            myMap[nums[i]]=i;
        }
        
  return{-1 , -1};
    }
};