class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n>0 && not (n & (n-1))) return true;
        else return false;
    }
};