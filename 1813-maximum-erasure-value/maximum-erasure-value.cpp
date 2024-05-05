class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int head=0; int tail=0; int sum=0; int ans=0;
        unordered_map<int,int> map;

        for(head =0; head<nums.size();head++){
            sum=sum+nums[head];

            while(map[nums[head]]>0){
                sum=sum-nums[tail];
                map[nums[tail]]--;
                tail++;
            }
            
            ans = max(ans, sum);
            map[nums[head]] = map[nums[head]]+1;
        }
        return ans;
    }
};