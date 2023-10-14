class Solution {
public:
    void rotate(vector<int>& nums, int k) {
k = k % nums.size();
// remember this trick for k
       
 int backVal=0;
        vector<int> temp;
        int startindex=nums.size()-k;
        
         for(int i=startindex;i<nums.size();i++){
            // backVal=nums[nums.size()-1];
            // nums.pop_back();
            // nums.insert(nums.begin(), backVal);
            temp.push_back(nums.at(i));
        }

      for(int i=0;i<startindex;i++){
            // backVal=nums[nums.size()-1];
            // nums.pop_back();
            // nums.insert(nums.begin(), backVal);
            temp.push_back(nums.at(i));
        }

        for(int i=0;i<nums.size();i++){
            // backVal=nums[nums.size()-1];
            // nums.pop_back();
            // nums.insert(nums.begin(), backVal);
          nums.at(i)=temp.at(i);
        }
        
        
       
      
    }
};