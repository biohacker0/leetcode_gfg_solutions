class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int head = 0, tail = 0, sum = 0, ans = 0;
        unordered_map<int, int> map;

        for (head = 0; head < nums.size(); head++) {
            sum += nums[head];
            while (map[nums[head]] > 0) {
                sum -= nums[tail];
                map[nums[tail]]--;
                tail++;
            }
            ans = max(ans, sum);
            map[nums[head]]++;
        }
        return ans;
    }
};