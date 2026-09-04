class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            int minn=INT_MAX;
            int maxx=INT_MIN;
            for(int j=0;j<=i;j++){
                maxx=max(maxx,nums[j]);
            }
            for(int j=i;j<n;j++){
                minn=min(minn,nums[j]);
            }

            if(maxx-minn<=k) return i;
        }
        return -1;
    }
};