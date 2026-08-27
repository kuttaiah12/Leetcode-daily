class Solution {
public:
    bool canJump(vector<int>& nums) {
        int rem_steps=nums[0];
for(int i=1;i<nums.size();i++){
if(rem_steps==0)return false;
rem_steps--;
rem_steps=max(rem_steps,nums[i]);
}
return true;
    }
};