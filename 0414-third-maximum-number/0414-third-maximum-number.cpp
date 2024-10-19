class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> distinct_nums(nums.begin(), nums.end());
        if(distinct_nums.size() < 3){
            auto MAX =  max_element(nums.begin(), nums.end());
            return *MAX;
        }

        auto it = distinct_nums.rbegin();
        for(int i = 0; i < 2; ++i){
            ++it;
        }
        return *it;

    }
};