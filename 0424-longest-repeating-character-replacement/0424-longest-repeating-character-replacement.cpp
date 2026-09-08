class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        vector<int> hash(26,0);
        int l=0, r=0, maxlen=0,maxfreq=0;
        while(r<n){
            hash[s[r]-'A']++;
            maxfreq=max(maxfreq,hash[s[r]-'A']);
            while((r-l+1)-maxfreq > k){
                hash[s[l]-'A']--;
                l+=1;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};