//week11-1b.cpp
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numSet;
        for(int num:nums) numSet.insert(num);
        while(numSet.find(original) !=numSet.end()){
            original=original*2;
        }
        return original;
    }
};
