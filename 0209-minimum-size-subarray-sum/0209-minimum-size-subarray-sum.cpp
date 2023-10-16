class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int curWindow = 0;
        int minLength = INT_MAX; // Initialize minLength to a large value.
        int sum = 0;
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum >= target) {
                while (sum - nums[curWindow] >= target) {
                    sum -= nums[curWindow];
                    curWindow++;
                }
                minLength = min(minLength, i - curWindow + 1);
            }

            if (!map.count(sum)) {
                map[sum] = i;
            }
        }

        return (minLength == INT_MAX) ? 0 : minLength;
    }
};
