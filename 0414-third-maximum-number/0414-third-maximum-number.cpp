class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        // if(n<3) return nums[n-1];
        int count=0;
        int maxx=0;
        for(int i=n-1;i>=0;i--){
            if(count==0 ||maxx!=nums[i]){
                maxx=nums[i];
            count+=1;
            }
            if(count==3)  return maxx;
        }
        return nums[n-1];
    }
};