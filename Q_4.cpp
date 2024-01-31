#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mj = 0; 
        for (int i = 0;i<nums.size();i++){
            if (mj>=i)mj = max(mj,nums[i]+i);
            else break;
        }
        if (mj>= nums.size()-1) return true;
        return false;
    }
};