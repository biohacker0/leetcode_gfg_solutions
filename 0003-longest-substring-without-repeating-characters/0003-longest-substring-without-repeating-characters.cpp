class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int tail=0; int head=0; int ans=0;
    unordered_map<char,int>map;

    for(head=0;head<s.size();head++){
        map[s[head]]++;
        while(map[s[head]] > 1){
            ans=max(ans,head-tail);
            map[s[tail]]--;
            tail++;
        }
         ;
    }

    ans=max(ans,head-tail);
    return ans;
        


    }
};